#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <chrono>
#include "motor.hpp"
#include "self_controller.hpp"

SelfController s{};

Motor m;
std::mutex mtx;
bool o = false;

void interrupt() {

    while (true) {
        {
            std::lock_guard<std::mutex> guard(mtx);
            if (o) { break; }
        }
        if (m.control_law_) {
            m.control_law_->update();
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}


void alert() {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    m.arm(&m.current_control_);
    std::cout << __FUNCTION__ << "---------------------------------------" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    std::cout << __FUNCTION__ << "---------------------------------------" << std::endl;
    m.arm(&m.res_control_);
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    std::cout << __FUNCTION__ << "---------------------------------------" << std::endl;
    m.disarm();
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    m.arm(&s);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::lock_guard<std::mutex> guard(mtx);
    o = true;
}


int main() {
    std::vector<std::thread> thread;

    thread.reserve(2);
    thread.emplace_back(interrupt);
    thread.emplace_back(alert);

    for (auto &e: thread) {
        e.join();
    }

    return 0;
}

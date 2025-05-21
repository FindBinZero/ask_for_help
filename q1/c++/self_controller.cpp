//
// Created by FindBin on 2025/5/21.
//

#include "self_controller.hpp"

void SelfController::reset() {
    i = 0;
    std::cout << typeid(*this).name() << "::" << __FUNCTION__ << std::endl;
}

void SelfController::update() {
    i++;
    std::cout << typeid(*this).name() << "::" << __FUNCTION__ << std::endl;
}

void SelfController::get_output() {
    std::cout << typeid(*this).name() << "::" << __FUNCTION__ << std::endl;
}

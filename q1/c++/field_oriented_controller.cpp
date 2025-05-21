//
// Created by FindBin on 2025/5/21.
//

#include "field_oriented_controller.hpp"

void FieldOrientedController::reset() {
    i = 0;
    std::cout << typeid(*this).name() << "::" << __FUNCTION__ << std::endl;
}

void FieldOrientedController::update() {
    i++;
    std::cout << typeid(*this).name() << "::" << __FUNCTION__ << std::endl;
}

void FieldOrientedController::get_output() {
    std::cout << typeid(*this).name() << "::" << __FUNCTION__ << std::endl;
}

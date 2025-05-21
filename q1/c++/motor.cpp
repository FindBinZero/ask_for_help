//
// Created by FindBin on 2025/5/21.
//

#include "motor.hpp"

void Motor::update() {
    if (control_law_) {
        control_law_->update();
    }
}

void Motor::arm(ControlLaw *control_law) {
    if (control_law) {
        control_law_ = control_law;
        control_law_->reset();
    }
}


void Motor::disarm() {
    control_law_ = nullptr;
}


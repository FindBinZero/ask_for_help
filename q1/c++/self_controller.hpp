//
// Created by FindBin on 2025/5/21.
//

#ifndef ODRIVE_RUST_SELF_CONTROLLER_HPP
#define ODRIVE_RUST_SELF_CONTROLLER_HPP

#include "control_law.hpp"
#include <iostream>

class SelfController : public ControlLaw {
    void reset() override;

    void update() override;

    void get_output() override;

    int i{};
};


#endif //ODRIVE_RUST_SELF_CONTROLLER_HPP

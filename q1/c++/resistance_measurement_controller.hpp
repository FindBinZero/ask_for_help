//
// Created by FindBin on 2025/5/21.
//

#ifndef ODRIVE_RUST_RESISTANCE_MEASUREMENT_CONTROLLER_HPP
#define ODRIVE_RUST_RESISTANCE_MEASUREMENT_CONTROLLER_HPP

#include "control_law.hpp"
#include <iostream>

class ResistanceMeasurementControlLaw : public ControlLaw {
public:
    void reset() override;

    void update() override;

    void get_output() override;

private:
    int i{};
};


#endif //ODRIVE_RUST_RESISTANCE_MEASUREMENT_CONTROLLER_HPP

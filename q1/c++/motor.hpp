//
// Created by FindBin on 2025/5/21.
//

#ifndef ODRIVE_RUST_MOTOR_HPP
#define ODRIVE_RUST_MOTOR_HPP

#include "control_law.hpp"
#include "field_oriented_controller.hpp"
#include "resistance_measurement_controller.hpp"

class Motor {

public:
    void update();

    void arm(ControlLaw *control_law_);

    void disarm();


    ControlLaw *control_law_;

    FieldOrientedController current_control_{};
    ResistanceMeasurementControlLaw res_control_{};

};


#endif //ODRIVE_RUST_MOTOR_HPP

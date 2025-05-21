//
// Created by FindBin on 2025/5/21.
//

#include "resistance_measurement_controller.hpp"

void ResistanceMeasurementControlLaw::reset() {
    i = 0;
    std::cout << typeid(*this).name() << "::" << __FUNCTION__ << std::endl;
}

void ResistanceMeasurementControlLaw::update() {
    i++;
    std::cout << typeid(*this).name() << "::" << __FUNCTION__ << std::endl;
}

void ResistanceMeasurementControlLaw::get_output() {
    std::cout << typeid(*this).name() << "::" << __FUNCTION__ << std::endl;
}

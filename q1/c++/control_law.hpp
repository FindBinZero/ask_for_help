//
// Created by FindBin on 2025/5/21.
//

#ifndef ODRIVE_RUST_CONTROL_LAW_HPP
#define ODRIVE_RUST_CONTROL_LAW_HPP


class ControlLaw {
public:

    virtual void reset() = 0;

    virtual void update() = 0;

    virtual void get_output() = 0;
};


#endif //ODRIVE_RUST_CONTROL_LAW_HPP

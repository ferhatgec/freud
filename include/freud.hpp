// MIT License
//
// Copyright (c) 2021 Ferhat Geçdoğan All Rights Reserved.
// Distributed under the terms of the MIT License.
//
//

#ifndef FREUD_FREUD_HPP
#define FREUD_FREUD_HPP

#include <iostream>
#include <string>
#include "defs/freud_defs.h"

constexpr i8 escape = 27;
constexpr i8 up     = 65;
constexpr i8 down   = 66;

class Freud {
    std::string file_data;

    unsigned __up          = 0,
             __down        = 0,
             __full_length = 0,
             __h           = 0;
public:
    Freud ()= default;
    ~Freud()= default;

    void init(std::string const filename) noexcept;
    void init_buffer() noexcept;

    void from(bool is_up) noexcept;
};

#endif // FREUD_FREUD_HPP
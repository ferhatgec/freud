// MIT License
//
// Copyright (c) 2021 Ferhat Geçdoğan All Rights Reserved.
// Distributed under the terms of the MIT License.
//
//

#ifndef TOTEM_TOTEM_HELPERS_HPP
#define TOTEM_TOTEM_HELPERS_HPP

#include "freud.hpp"

namespace {
    template<typename... Args>
    void print(Args... args) noexcept {
        ((std::cout << args), ...);
    }

    template<typename... Args>
    void println(Args... args) noexcept {
        ((std::cout << args), ...) << '\n';
    }

    void refresh() noexcept {
        print("\x1b[2J");
    }

    void clear() noexcept {
        refresh(); print("\x1b[H");
    }

    void to_up() noexcept {
        print("\x1b[0A");
    }

    void up_to(i32 n) noexcept {
        print("\x1b[" + std::to_string(n) + "A");
    }

    void disable_cursor() noexcept {
        print("\x1b[?25l");
    }

    void enable_cursor() noexcept {
        print("\x1b[?25h");
    }
}

#endif // TOTEM_TOTEM_HELPERS_HPP

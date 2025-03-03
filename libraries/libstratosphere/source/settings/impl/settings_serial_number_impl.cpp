/*
 * Copyright (c) Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <stratosphere.hpp>
#include "settings_serial_number_impl.hpp"

namespace ams::settings::impl {

    Result GetSerialNumber(settings::factory::SerialNumber *out) {
        static_assert(sizeof(*out) == sizeof(::SetCalSerialNumber));
        return ::setcalGetSerialNumber(reinterpret_cast<::SetCalSerialNumber *>(out));
    }

    Result GetSerialNumber(settings::system::SerialNumber *out) {
        static_assert(sizeof(*out) == sizeof(::SetSysSerialNumber));
        return ::setsysGetSerialNumber(reinterpret_cast<::SetSysSerialNumber *>(out));
    }

}

/*
 * Copyright (c) 2018-2020 Atmosphère-NX
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
#pragma once
#include <stratosphere.hpp>

namespace ams::htclow::mux {

    class RingBuffer {
        private:
            void *m_buffer;
            void *m_read_only_buffer;
            bool m_is_read_only;
            size_t m_buffer_size;
            size_t m_data_size;
            size_t m_offset;
            bool m_has_copied;
        public:
            RingBuffer() : m_buffer(), m_read_only_buffer(), m_is_read_only(true), m_buffer_size(), m_data_size(), m_offset(), m_has_copied(false) { /* ... */ }

            size_t GetDataSize() { return m_data_size; }

            Result Write(const void *data, size_t size);
    };

}

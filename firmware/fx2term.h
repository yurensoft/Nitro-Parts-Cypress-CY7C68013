/**
 * Copyright (C) 2009 Ubixum, Inc. 
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 **/

#ifndef FX2TERM_H
#define FX2TERM_H

#include "handlers.h"

/**
 * io_handler for getting fx2 registers
 **/
void get_fx2( WORD len );

/**
 * io_handler for setting fx2 registers
 **/
BOOL set_fx2();

#define DECLARE_FX2_HANDLER(term) \
    DECLARE_HANDLER(term, 0, 0, get_fx2, set_fx2, 0, 0, 0)

/**
 * Get the value from an FX2 SFR. 
 **/
void get_fx2_sfr( WORD len );
/**
 * Set an FX2 SFR 
 **/
BOOL set_fx2_sfr();

#define DECLARE_FX2SFR_HANDLER(term) \
    DECLARE_HANDLER(term, 0, 0, get_fx2_sfr, set_fx2_sfr, 0, 0, 0)

#endif

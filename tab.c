/*
 This file is part of k9an-wsprd.
 
 File name: tab.c
 Description: k9an-wsprd is a detector/demodulator/decoder for K1JT's
 Weak Signal Propagation Reporter (WSPR) mode.
 
 Copyright 2014-2015, Steven Franke, K9AN
 License: GNU GPL v3
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* 8-bit parity lookup table, generated by partab.c */
unsigned char Partab[] = {
 0, 1, 1, 0, 1, 0, 0, 1,
 1, 0, 0, 1, 0, 1, 1, 0,
 1, 0, 0, 1, 0, 1, 1, 0,
 0, 1, 1, 0, 1, 0, 0, 1,
 1, 0, 0, 1, 0, 1, 1, 0,
 0, 1, 1, 0, 1, 0, 0, 1,
 0, 1, 1, 0, 1, 0, 0, 1,
 1, 0, 0, 1, 0, 1, 1, 0,
 1, 0, 0, 1, 0, 1, 1, 0,
 0, 1, 1, 0, 1, 0, 0, 1,
 0, 1, 1, 0, 1, 0, 0, 1,
 1, 0, 0, 1, 0, 1, 1, 0,
 0, 1, 1, 0, 1, 0, 0, 1,
 1, 0, 0, 1, 0, 1, 1, 0,
 1, 0, 0, 1, 0, 1, 1, 0,
 0, 1, 1, 0, 1, 0, 0, 1,
 1, 0, 0, 1, 0, 1, 1, 0,
 0, 1, 1, 0, 1, 0, 0, 1,
 0, 1, 1, 0, 1, 0, 0, 1,
 1, 0, 0, 1, 0, 1, 1, 0,
 0, 1, 1, 0, 1, 0, 0, 1,
 1, 0, 0, 1, 0, 1, 1, 0,
 1, 0, 0, 1, 0, 1, 1, 0,
 0, 1, 1, 0, 1, 0, 0, 1,
 0, 1, 1, 0, 1, 0, 0, 1,
 1, 0, 0, 1, 0, 1, 1, 0,
 1, 0, 0, 1, 0, 1, 1, 0,
 0, 1, 1, 0, 1, 0, 0, 1,
 1, 0, 0, 1, 0, 1, 1, 0,
 0, 1, 1, 0, 1, 0, 0, 1,
 0, 1, 1, 0, 1, 0, 0, 1,
 1, 0, 0, 1, 0, 1, 1, 0,
};


//
// SPDX-FileCopyrightText: 2020 Friedrich-Alexander University Erlangen-Nuernberg (FAU), Computer Science 7 - Computer Networks and Communication Systems
//
// SPDX-License-Identifier: LGPL-3.0-or-later
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

//
// Part of 5G-Sim-V2I/N
//


package nr.stack.rlc;

import lte.stack.rlc.*;

// 
// Compound module for the RLC layer of LTE Stack.
//
module NRRlc extends LteRlc
{
    parameters:
        @display("i=block/transport");
        string NRRlcUmType = default("NRRlcUm");
        LteRlcUmType = default("NRRlcUm");     // One of: "LteRlcUm", "LteRlcUmRealistic", "LteRlcUmRealisticD2D"      

}


// 
// UM Module
//
simple NRRlcUm extends LteRlcUm like ILteRlcUm
{
    parameters:
        @class("NRRlcUm");
        @display("i=block/wheelbarrow");
        
        
}

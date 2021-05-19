/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2021 Azael R. <azael.devel@gmail.com>
 * 
 * octetos-chimestry is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * octetos-chimestry is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include "atoms.hh"



int main()
{	
	oct::chem::Atom H(oct::chem::H);
	
	oct::chem::Atom O(oct::chem::O);
	
	oct::chem::Atom Fe(oct::chem::Fe);
	const oct::chem::QuantumNumber& qnFe = Fe.getQuantumNumber();
	std::string strQnFe = (std::string)qnFe;
	std::cout << "size : " << qnFe.size() << "\n";
	std::cout << "Fe : " << strQnFe << "\n";
	
	oct::chem::Atom Cr(oct::chem::Cr);
	
	return 0;
}


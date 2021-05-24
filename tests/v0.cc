
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
#include <CUnit/Basic.h>


#include <iostream>
#include <atom.hh>



void testDeveloping()
{	
	oct::chem::Atom H(oct::chem::H);
	CU_ASSERT(H.getSymbol() == H.getAtomicNumber());//El numero atomico es el symbolo
	CU_ASSERT(H.getSymbol() == 1);// H tiene este numero atomico
	
	oct::chem::Atom O(oct::chem::O);
	CU_ASSERT(O.getSymbol() == O.getAtomicNumber());//El numero atomico es el symbolo
	CU_ASSERT(O.getSymbol() == 8);//O tiene este numero atomico
		
	oct::chem::Atom Cr(oct::chem::Cr);
	CU_ASSERT(Cr.getSymbol() == Cr.getAtomicNumber());//El numero atomico es el symbolo
	CU_ASSERT(Cr.getSymbol() == 24);//Fe tiene este numero atomico
	
	oct::chem::Atom Fe(oct::chem::Fe);
	CU_ASSERT(Fe.getSymbol() == Fe.getAtomicNumber());//El numero atomico es el symbolo
	CU_ASSERT(Fe.getSymbol() == 26);//Fe tiene este numero atomico
	//const oct::chem::QuantumNumber& qnFe = Fe.getQuantumNumber();
	//std::string strQnFe = (std::string)qnFe;
	//std::cout << "size : " << qnFe.size() << "\n";
	//std::cout << "Fe : " << strQnFe << "\n";
	
}

int init(void)
{
	return 0;
}
int clean(void)
{
	return 0;
}

int main(int argc, char *argv[])
{  
	 
	CU_pSuite pSuite = NULL;
	
	/* initialize the CUnit test registry */
	if (CUE_SUCCESS != CU_initialize_registry()) return CU_get_error();
	
	pSuite = CU_add_suite("Testong Chemistry", init, clean);
	if (NULL == pSuite) 
	{
		CU_cleanup_registry();
		return CU_get_error();
	}
		
	if ((NULL == CU_add_test(pSuite, "Developing..", testDeveloping)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}
		
	
	/* Run all tests using the CUnit Basic interface */
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();	
}

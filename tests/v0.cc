
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
	unsigned short MAXNUMATOM = 118;
	oct::chem::Atom atoms[MAXNUMATOM];
	
	for(unsigned short i = 1; i < MAXNUMATOM; i++)
	{
		CU_ASSERT(atoms[i].getSymbol() == oct::chem::Symbol::None);
		const oct::chem::QuantumNumber& qnATmp = atoms[i].getQuantumNumber();
		CU_ASSERT(qnATmp.size() == 0);//el numero cuantico deve estar vacio de inicio
	}
	for(unsigned short i = 1; i < MAXNUMATOM; i++)
	{
		atoms[i].set(i);	
		CU_ASSERT(atoms[i].getSymbol() == atoms[i].getAtomicNumber()); //el numero atomico es equivalenmte a la enumeriacion
		const oct::chem::QuantumNumber& qnA = atoms[i].getQuantumNumber();
		unsigned short qnCountE = 0;
		for(const oct::chem::Orbital& o : qnA)
		{
			qnCountE += o.electron;
		}		
		if(qnCountE == atoms[i].getAtomicNumber())//la cantidad de electrones en el numero atomico es igual al numero atomico
		{
			CU_ASSERT(true);
		}
		else
		{
			std::cout << "n : " << atoms[i].getAtomicNumber() << "\n";
			std::cout << "e : " << qnCountE << "\n";
			std::string strQnA = (std::string)qnA;
			std::cout << "number : " << strQnA << "\n";
			CU_ASSERT(false);
		}		
	}	
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

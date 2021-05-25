
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
	oct::chem::Atom atoms[87];
	
	for(unsigned short i = 1; i < 87; i++)
	{
		CU_ASSERT(atoms[i].getSymbol() == oct::chem::Symbol::None);
		const oct::chem::QuantumNumber& qnATmp = atoms[i].getQuantumNumber();
		CU_ASSERT(qnATmp.size() == 0);//el numero cuantico deve estar vacio de inicio
	}
	for(unsigned short i = 1; i < 87; i++)
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
			std::cout << "n " << atoms[i].getAtomicNumber() << "\n";
			std::cout << "e " << qnCountE << "\n";
			std::string strQnA = (std::string)qnA;
			std::cout << "number : " << strQnA << "\n";
			CU_ASSERT(false);
		}
		
		
	}
	
	
	oct::chem::Atom H(oct::chem::H);
	CU_ASSERT(H.getSymbol() == H.getAtomicNumber());//El numero atomico es el symbolo
	CU_ASSERT(H.getSymbol() == 1);// H tiene este numero atomico
	
	oct::chem::Atom He(oct::chem::He);
	CU_ASSERT(H.getSymbol() == H.getAtomicNumber());//El numero atomico es el symbolo
	CU_ASSERT(H.getSymbol() == 1);// H tiene este numero atomico
	const oct::chem::QuantumNumber& qnHe = He.getQuantumNumber();
	std::string strQnHe = (std::string)qnHe;
	CU_ASSERT(qnHe.size() == 1);
	CU_ASSERT(qnHe[0].main == 1);
	CU_ASSERT(qnHe[0].orbital == oct::chem::Suborbital::s);
	CU_ASSERT(qnHe[0].electron == 2);
	//std::cout << "He : " << strQnHe << "\n";
		
	oct::chem::Atom O(oct::chem::O);
	CU_ASSERT(O.getSymbol() == O.getAtomicNumber());//El numero atomico es el symbolo
	CU_ASSERT(O.getSymbol() == 8);//O tiene este numero atomico
	const oct::chem::QuantumNumber& qnO = O.getQuantumNumber();
	std::string strQnO = (std::string)qnO;
	CU_ASSERT(qnO.size() == 3);
	CU_ASSERT(qnO[2].main == 2);
	CU_ASSERT(qnO[2].orbital == oct::chem::Suborbital::p);
	CU_ASSERT(qnO[2].electron == 4);
	//std::cout << "O : " << strQnO << "\n";
	
	oct::chem::Atom Ne(oct::chem::Ne);
	CU_ASSERT(Ne.getSymbol() == Ne.getAtomicNumber());//El numero atomico es el symbolo
	CU_ASSERT(Ne.getSymbol() == 10);//O tiene este numero atomico
	const oct::chem::QuantumNumber& qnNe = Ne.getQuantumNumber();
	std::string strQnNe = (std::string)qnO;	
	CU_ASSERT(qnNe.size() == 3);
	CU_ASSERT(qnNe[2].main == 2);
	CU_ASSERT(qnNe[2].orbital == oct::chem::Suborbital::p);
	CU_ASSERT(qnNe[2].electron == 6);
	//std::cout << "Ne : " << strQnNe << "\n";
	
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

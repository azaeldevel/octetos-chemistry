
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

//#include <list>
#include <iostream>
#include <Molecule.hh>



void testDeveloping()
{	
	unsigned short MAXNUMATOM = 118;
	oct::chem::Atom atoms[MAXNUMATOM];
	
	for(unsigned short i = 1; i < MAXNUMATOM; i++)
	{
		CU_ASSERT(atoms[i].getSymbol() == oct::chem::Symbol::None);
		//const oct::chem::QuantumNumber& qnATmp = atoms[i].getQuantumNumber();
		//CU_ASSERT(qnATmp.size() == 0);//el numero cuantico deve estar vacio de inicio
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
		
	unsigned short valenciaCl = atoms[oct::chem::Cl].getQuantumNumber().getElectronValencia();
	if(valenciaCl == 7)
	{
		CU_ASSERT(true);
	}
	else
	{
		std::string strQnA = (std::string)atoms[oct::chem::Cl].getQuantumNumber();
		std::cout << "number : " << strQnA << "\n";
		std::cout << "e : " << valenciaCl << "\n";
		CU_ASSERT(false);
	}
	const oct::chem::Valencias& valenciasCL = atoms[oct::chem::Cl].getValencias();
	CU_ASSERT(valenciasCL.size() == 4)
	/*if(not valenciasCL.empty())
	{
		std::cout << "Cl(";
		for(short v : valenciasCL)
		{
			std::cout << v << ",";
		}
		std::cout << ")\n";
	}*/
	
	
	oct::chem::Table tperiodica;
	oct::chem::Metales bMetales(tperiodica);
	CU_ASSERT(bMetales.size() == 87);//no confirmado
	oct::chem::NoMetales bNoMetales(tperiodica);
	CU_ASSERT(bNoMetales.size() == 25);//no confirmado
	
	
	std::list<oct::chem::Molecule*> lsMolecules;
	
	//unsigned int count = 0;
	float negativity = 0.0;
	for(size_t i = 0; i < bMetales.size(); i++)
	{
		for(size_t j = 0; j < bNoMetales.size(); j++)
		{
			if(bNoMetales[j]->getNegativityNumber() < 0.001) continue;//no reactivos no p[articipan
			negativity = abs(bMetales[i]->getNegativityNumber() - bNoMetales[j]->getNegativityNumber());
			if(abs(negativity) > 1.7) oct::chem::Molecule::reactionIonic(*bMetales[i],*bNoMetales[j],lsMolecules);			
		}
	}
	for(size_t i = 0; i < bNoMetales.size(); i++)
	{
		for(size_t j = 0; j < bNoMetales.size(); j++)
		{
			if(bNoMetales[i]->getNegativityNumber() < 0.001) continue;
			if(bNoMetales[j]->getNegativityNumber() < 0.001) continue;
			negativity = bNoMetales[i]->getNegativityNumber() - bNoMetales[j]->getNegativityNumber();
			if(abs(negativity) < 0.4 or abs(negativity) > 1.7) continue;
			if(negativity < 0.0) oct::chem::Molecule::reactionCovalentNotPolar(*bNoMetales[i],*bNoMetales[j],lsMolecules);
			else oct::chem::Molecule::reactionCovalentNotPolar(*bNoMetales[j],*bNoMetales[i],lsMolecules);			
		}
	}	
	for(size_t i = 0; i < bNoMetales.size(); i++)
	{
		for(size_t j = 0; j < bNoMetales.size(); j++)
		{
			if(bNoMetales[i]->getNegativityNumber() < 0.001) continue;
			if(bNoMetales[j]->getNegativityNumber() < 0.001) continue;
			negativity = bNoMetales[i]->getNegativityNumber() - bNoMetales[j]->getNegativityNumber();
			if(abs(negativity) > 0.4) continue;
			if(negativity < 0.0) oct::chem::Molecule::reactionCovalentNotPolar(*bNoMetales[i],*bNoMetales[j],lsMolecules);
			else oct::chem::Molecule::reactionCovalentNotPolar(*bNoMetales[j],*bNoMetales[i],lsMolecules);			
		}
	}

	CU_ASSERT(lsMolecules.size() > 0);
	std::cout << "Total moleculas : " << lsMolecules.size() << "\n";		
	for(oct::chem::Molecule* m : lsMolecules)
	{
		*m >> std::cout ;
		std::cout << "\n";
	}
	std::cout << "Total moleculas : " << lsMolecules.size() << "\n";
	
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

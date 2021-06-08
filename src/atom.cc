
//Debug
#include <iostream>
#include <octetos/core/Error.hh>
#include <random>


#include "atom.hh"

namespace oct::chem
{































Atom::Atom()
{
	
}
Atom::Atom(phy::Symbol s) : oct::phy::Bohr(s)
{
	Atom::genValencias(phy::Symbol(protonsCount),valencias);
	Atom::genQuantumNumber(phy::Symbol(protonsCount), qnumber);
}
Atom::Atom(phy::AtomicNumber n) : oct::phy::Bohr(n)
{
	Atom::genValencias(phy::Symbol(protonsCount),valencias);
	Atom::genQuantumNumber(phy::Symbol(protonsCount), qnumber);
}


const phy::QuantumNumber& Atom::getQuantumNumber()
{
	return qnumber;
}

const phy::Valencias& Atom::getValencias() const
{	
	return valencias;
}
float Atom::getNegativityNumber() const
{
	return phy::Symbol(protonsCount) > phy::Symbol::None ? genNegativityNumber(phy::Symbol(protonsCount)) : 0.0;
}

void Atom::set(phy::Symbol s)
{
	Bohr::set(s);
	Atom::genValencias(phy::Symbol(s),valencias);
	Atom::genQuantumNumber(phy::Symbol(s), qnumber);
}
void Atom::set(phy::AtomicNumber a)
{
	Bohr::set(a);
	Atom::genValencias(phy::Symbol(a),valencias);
	Atom::genQuantumNumber(phy::Symbol(a), qnumber);
}


bool Atom::isMetal()const
{
	return genIsMetal(phy::Symbol(protonsCount));
}
bool Atom::isNoMetal()const
{
	return genIsNoMetal(phy::Symbol(protonsCount));
}
bool Atom::isGasNoble()const
{
	return genIsGasNoble(phy::Symbol(protonsCount));
}

Table::Table()
{
	for(unsigned short i = 0; i <= phy::Symbol::Og; i++)
	{
		push_back(new Atom(i));
	}
	resize(phy::Symbol::Og + 1);
}
Table::~Table()
{
	for(Atom* a : *this)
	{
		delete a;
	}
	clear();
}


Metales::Metales(Table& t)
{
	unsigned short count = 0;
	for(Atom* a : t)
	{
		if(a->isMetal()) 
		{
			count++;
			push_back(a);
		}
	}
	resize(count);
}

NoMetales::NoMetales(Table& t)
{
	unsigned short count = 0;
	for(Atom* a : t)
	{
		if(a->isNoMetal()) 
		{
			count++;
			push_back(a);
		}
	}
	resize(count);
}

}
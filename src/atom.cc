
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
Atom::Atom(phy::Symbol s) : oct::phy::Atom(s)
{
	Atom::genValencias(phy::Symbol(protonsCount),valencias);
	Atom::genQuantumNumber(phy::Symbol(protonsCount), qnumber);
}
Atom::Atom(phy::AtomicNumber n) : oct::phy::Atom(n)
{
	Atom::genValencias(phy::Symbol(protonsCount),valencias);
	Atom::genQuantumNumber(phy::Symbol(protonsCount), qnumber);
}




float Atom::getNegativityNumber() const
{
	return phy::Symbol(protonsCount) > phy::Symbol::None ? genNegativityNumber(phy::Symbol(protonsCount)) : 0.0;
}

void Atom::set(phy::Symbol s)
{
	oct::phy::Atom::set(s);
	Atom::genValencias(s,Atom::valencias);
	Atom::genQuantumNumber(s, qnumber);
}
void Atom::set(phy::AtomicNumber a)
{
	oct::phy::Atom::set(a);
	Atom::genValencias(phy::Symbol(a),Atom::valencias);
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

//Debug
#include <iostream>
#include <octetos/core/Error.hh>
#include <random>


#include "atom.hh"

namespace oct::chem
{




AtomicNumber randNumber()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<float> distr(0.99, 118);
	
	return distr(gen);
}











QuantumNumber::operator std::string() const
{
	std::string str = "";
	
	for(unsigned short i = 0; i < size(); i++)
	{
		str += std::to_string(at(i).main);
		switch(at(i).orbital)
		{
		case Suborbital::s:
			str += "s";
			break;
		case Suborbital::p:
			str += "p";
			break;
		case Suborbital::d:
			str += "d";
			break;
		case Suborbital::f:
			str += "f";
			break;
		}
		str += std::to_string(at(i).electron);
		str += " ";
	}
	
	return str;
}
unsigned short QuantumNumber::getElectronValencia()const
{
	if(not empty())
	{
		unsigned short main = back().main;
		unsigned short counte = 0;
		for(unsigned short i = size() - 1; i > 0; i--)
		{
			if(at(i).main == main) counte += at(i).electron;
		}
		return counte;
	}
	
	throw octetos::core::Exception("Numero cuantico no generado.",__FILE__,__LINE__);
}




















Atom::Atom()
{
	symbol = Symbol::None;
}
Atom::Atom(Symbol s) : symbol(s)
{
	if(symbol > Symbol::None) genValencias(symbol,valencias);
}
Atom::Atom(AtomicNumber n) : symbol((Symbol)n)
{
	if(symbol > Symbol::None) genValencias(symbol,valencias);
}

AtomicNumber Atom::getAtomicNumber()const
{
	return symbol;
}
Symbol Atom::getSymbol()const
{
	return symbol;
}
const QuantumNumber& Atom::getQuantumNumber()
{
	//generar si no existe
	if(qnumber.empty()) genQuantumNumber(symbol, qnumber);
	return qnumber;
}
const char* Atom::getName()const
{
	return genNames(symbol);
}
const char* Atom::getStringSymbol()const
{
	return genStrSymbol(symbol);
}
const Valencias& Atom::getValencias() const
{
	return valencias;
}
float Atom::getNegativityNumber() const
{
	return symbol > Symbol::None ? genNegativityNumber(symbol) : 0.0;
}
void Atom::set(Symbol s)
{
	symbol = s;
	if(symbol > Symbol::None) genValencias(symbol,valencias);
}
void Atom::set(AtomicNumber a)
{
	symbol = Symbol(a);
	if(symbol > Symbol::None) genValencias(symbol,valencias);
}

bool Atom::isMetal()const
{
	return genIsMetal(symbol);
}
bool Atom::isNoMetal()const
{
	return genIsNoMetal(symbol);
}
bool Atom::isGasNoble()const
{
	return genIsGasNoble(symbol);
}

Table::Table()
{
	for(unsigned short i = 0; i <= Symbol::Og; i++)
	{
		push_back(new Atom(i));
	}
	resize(Symbol::Og + 1);
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
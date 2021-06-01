
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
	std::uniform_real_distribution<double> distr(1, 36);
	
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
	genValencias(symbol,valencias);
}
Atom::Atom(AtomicNumber n) : symbol((Symbol)n)
{
	genValencias(symbol,valencias);
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

void Atom::set(Symbol s)
{
	symbol = s;
}
void Atom::set(AtomicNumber a)
{
	symbol = Symbol(a);
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
}
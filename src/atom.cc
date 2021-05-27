
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





















Atom::Atom()
{
	symbol = Symbol::None;
}
Atom::Atom(Symbol s) : symbol(s)
{
	
}
Atom::Atom(AtomicNumber n) : symbol((Symbol)n)
{
	
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
	if(qnumber.size() == 0) genQuantumNumber(symbol, qnumber);
	return qnumber;
}
const char* Atom::getName()const
{
	if(symbol < Symbol::Kr) return genNames(symbol);
	else return NULL;
}
const char* Atom::getStringSymbol()const
{
	if(symbol < Symbol::Kr) return genStrSymbol(symbol);
	else return NULL;
}
unsigned short Atom::getElectronValencia()const
{
	if(qnumber.size() > 0)
	{
		unsigned short main = qnumber.back().main;
		unsigned short counte = 0;
		for(unsigned short i = qnumber.size() - 1; i > 0; i--)
		{
			if(qnumber[i].main == main) counte += qnumber[i].electron;
		}
		if(isMetal()) return counte;
		else if(isNoMetal()) 
		{
			if(symbol == Symbol::H or symbol == Symbol::He) return 2 - counte;
			else return 8 - counte;
		}
	}
	
	throw octetos::core::Exception("Numero cuantico no generado.",__FILE__,__LINE__);
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
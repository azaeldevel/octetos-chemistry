
//Debug
#include <iostream>


#include "atom.hh"

namespace oct::chem
{


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
void Atom::set(Symbol s)
{
	symbol = s;
}
void Atom::set(AtomicNumber a)
{
	symbol = Symbol(a);
}

}
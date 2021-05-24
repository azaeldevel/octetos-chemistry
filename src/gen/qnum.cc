

#include "../atom.hh"

namespace oct::chem
{


bool Atom::genQuantumNumber(Symbol s, QuantumNumber& q)
{
	switch(s)
	{
	case Symbol::H:
		q.resize(1);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 1;
		break;
	case Symbol::He:
		q.resize(1);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		break;
		
	case Symbol::Li:
		q.resize(2);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 1;
		break;
	case Symbol::Be:
		q.resize(2);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		break;
	case Symbol::B:
		q.resize(3);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 1;
		break;
	case Symbol::C:
		q.resize(3);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 2;
		break;
	case Symbol::N:
		q.resize(3);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 3;
		break;
	case Symbol::O:
		q.resize(3);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 4;
		break;
	case Symbol::F:
		q.resize(3);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 5;
		break;
	case Symbol::Ne:
		q.resize(3);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		break;		
		
	case Symbol::Na:
		q.resize(4);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 1;
		break;
	case Symbol::Mg:
		q.resize(4);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		break;
	case Symbol::Al:
		q.resize(5);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 1;
		break;
	case Symbol::Si:
		q.resize(5);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[3].main = 3;
		q[3].orbital = Suborbital::s;
		q[3].amount = 1;
		q[4].main = 3;
		q[4].orbital = Suborbital::p;
		q[4].amount = 3;
		break;
	case Symbol::P:
		q.resize(5);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 3;
		break;
	case Symbol::S:
		q.resize(5);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[3].main = 3;
		q[3].orbital = Suborbital::s;
		q[3].amount = 2;
		q[4].main = 3;
		q[4].orbital = Suborbital::p;
		q[4].amount = 2;
		break;
	case Symbol::Cl:
		q.resize(5);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 5;
		break;
	case Symbol::Ar:
		q.resize(5);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		break;
		
		
	case Symbol::K:
		q.resize(6);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 1;
		break;
	case Symbol::Ca:
		q.resize(6);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		break;
	case Symbol::Sc:
		q.resize(6);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 1;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		break;
	case Symbol::Ti:
		q.resize(6);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 2;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		break;
	case Symbol::V:
		q.resize(6);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[3].main = 3;
		q[3].orbital = Suborbital::s;
		q[3].amount = 2;
		q[4].main = 3;
		q[4].orbital = Suborbital::p;
		q[4].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 3;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		break;
	case Symbol::Cr:
		q.resize(6);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 5;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 1;
		break;	
	case Symbol::Mn:
		q.resize(6);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 5;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		break;
	case Symbol::Fe:
		q.resize(6);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 6;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		break;
	case Symbol::Co:
		q.resize(6);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 7;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		break;
	case Symbol::Ni:
		q.resize(6);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 8;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		break;
	case Symbol::Cu:
		q.resize(6);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 10;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 1;
		break;
	case Symbol::Zn:
		q.resize(6);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 10;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		break;	
	case Symbol::Ga:
		q.resize(7);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 10;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		q[5].main = 4;
		q[5].orbital = Suborbital::p;
		q[5].amount = 1;
		break;
	case Symbol::Ge:
		q.resize(7);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 10;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		q[5].main = 4;
		q[5].orbital = Suborbital::p;
		q[5].amount = 2;
		break;
	case Symbol::As:
		q.resize(7);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 10;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		q[5].main = 4;
		q[5].orbital = Suborbital::p;
		q[5].amount = 3;
		break;
	case Symbol::Se:
		q.resize(7);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 10;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		q[5].main = 4;
		q[5].orbital = Suborbital::p;
		q[5].amount = 4;
		break;
	case Symbol::Br:
		q.resize(7);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 10;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		q[5].main = 4;
		q[5].orbital = Suborbital::p;
		q[5].amount = 5;
		break;
	case Symbol::Kr:
		q.resize(7);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 10;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		q[5].main = 4;
		q[5].orbital = Suborbital::p;
		q[5].amount = 6;
		break;
				
	case Symbol::Rb:
		q.resize(8);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 10;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		q[5].main = 4;
		q[5].orbital = Suborbital::p;
		q[5].amount = 6;
		//Kr
		q[6].main = 5;
		q[6].orbital = Suborbital::s;
		q[6].amount = 1;
		break;	
	case Symbol::Sr:
		q.resize(8);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 10;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		q[5].main = 4;
		q[5].orbital = Suborbital::p;
		q[5].amount = 6;
		//Kr
		q[6].main = 5;
		q[6].orbital = Suborbital::s;
		q[6].amount = 2;
		break;
	case Symbol::Y:
		q.resize(8);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 10;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		q[5].main = 4;
		q[5].orbital = Suborbital::p;
		q[5].amount = 6;
		//Kr
		q[6].main = 5;
		q[6].orbital = Suborbital::s;
		q[6].amount = 2;
		q[5].main = 5;
		q[5].orbital = Suborbital::d;
		q[5].amount = 1;
		break;
	case Symbol::Zr:
		q.resize(8);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].amount = 2;
		//He
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].amount = 2;
		q[1].main = 2;
		q[1].orbital = Suborbital::p;
		q[1].amount = 6;
		//Ne
		q[2].main = 3;
		q[2].orbital = Suborbital::s;
		q[2].amount = 2;
		q[2].main = 3;
		q[2].orbital = Suborbital::p;
		q[2].amount = 6;
		//Ar
		q[5].main = 4;
		q[5].orbital = Suborbital::d;
		q[5].amount = 10;
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].amount = 2;
		q[5].main = 4;
		q[5].orbital = Suborbital::p;
		q[5].amount = 6;
		//Kr
		q[6].main = 5;
		q[6].orbital = Suborbital::s;
		q[6].amount = 2;
		q[6].main = 5;
		q[6].orbital = Suborbital::d;
		q[6].amount = 2;
		break;
		
		
	default:
		return false;
	}
	
	return true;
}


}
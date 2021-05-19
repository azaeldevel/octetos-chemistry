

#include "../atoms.hh"

namespace oct::chem
{


bool Atom::genOrbitals(Symbol s, std::vector<QuantumNumber>& q)
{
	L ltemp;
	switch(s)
	{
	case Symbol::H:
		ltemp.resize(1);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 1;
		l.push_back(ltemp);
		break;
	case Symbol::He:
		ltemp.resize(1);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		break;
		
	case Symbol::Li:
		ltemp.resize(2);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 1;
		l.push_back(ltemp);
		break;
	case Symbol::Be:
		ltemp.resize(2);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		break;
	case Symbol::B:
		ltemp.resize(3);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 1;
		l.push_back(ltemp);
		break;
	case Symbol::C:
		ltemp.resize(3);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 2;
		l.push_back(ltemp);
		break;
	case Symbol::N:
		ltemp.resize(3);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 3;
		l.push_back(ltemp);
		break;
	case Symbol::O:
		ltemp.resize(3);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 4;
		l.push_back(ltemp);
		break;
	case Symbol::F:
		ltemp.resize(3);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 5;
		l.push_back(ltemp);
		break;
	case Symbol::Ne:
		ltemp.resize(3);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		break;		
		
	case Symbol::Na:
		ltemp.resize(4);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 1;
		l.push_back(ltemp);
		break;
	case Symbol::Mg:
		ltemp.resize(4);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		break;
	case Symbol::Al:
		ltemp.resize(5);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 1;
		l.push_back(ltemp);
		break;
	case Symbol::Si:
		ltemp.resize(5);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 2;
		l.push_back(ltemp);
		break;
	case Symbol::P:
		ltemp.resize(5);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 3;
		l.push_back(ltemp);
		break;
	case Symbol::S:
		ltemp.resize(5);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 4;
		l.push_back(ltemp);
		break;
	case Symbol::Cl:
		ltemp.resize(5);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 5;
		l.push_back(ltemp);
		break;
	case Symbol::Ar:
		ltemp.resize(5);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		break;
		
		
	case Symbol::K:
		ltemp.resize(6);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		//Ar
		ltemp.main = 4;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 1;
		l.push_back(ltemp);
		break;
	case Symbol::Ca:
		ltemp.resize(6);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		//Ar
		ltemp.main = 4;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		break;
	case Symbol::Sc:
		ltemp.resize(6);
		ltemp.main = 1;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 2;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		ltemp.main = 3;
		ltemp.orbital = Orbital::p;
		ltemp.amount = 6;
		l.push_back(ltemp);
		//Ar
		ltemp.main = 4;
		ltemp.orbital = Orbital::d;
		ltemp.amount = 1;
		l.push_back(ltemp);
		ltemp.main = 4;
		ltemp.orbital = Orbital::s;
		ltemp.amount = 2;
		l.push_back(ltemp);
		break;
	
	}
}


}


#include "../atom.hh"

namespace oct::chem
{



void genQuantumNumber_He(Symbol s, QuantumNumber& q)
{
	q[0].main = 1;
	q[0].orbital = Suborbital::s;
	q[0].electron = 2;
}
void genQuantumNumber_Be(Symbol s, QuantumNumber& q)
{
	q[1].main = 2;
	q[1].orbital = Suborbital::s;
	q[1].electron = 2;
}
void genQuantumNumber_Ne(Symbol s, QuantumNumber& q)
{
	q[2].main = 2;
	q[2].orbital = Suborbital::p;
	q[2].electron = 6;
}
void genQuantumNumber_Mg(Symbol s, QuantumNumber& q)
{
	q[3].main = 3;
	q[3].orbital = Suborbital::s;
	q[3].electron = 2;
}
bool Atom::genQuantumNumber(Symbol s, QuantumNumber& q)
{
	switch(s)
	{
	case Symbol::H:
		q.resize(1);
		q[0].main = 1;
		q[0].orbital = Suborbital::s;
		q[0].electron = 1;
		break;
	case Symbol::He:
		q.resize(1);
		genQuantumNumber_He(s,q);
		break;
	case Symbol::Li:
		q.resize(2);
		genQuantumNumber_He(s,q);
		q[1].main = 2;
		q[1].orbital = Suborbital::s;
		q[1].electron = 1;
		break;
	case Symbol::Be:
		q.resize(2);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		break;
	case Symbol::B:
		q.resize(3);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		q[2].main = 2;
		q[2].orbital = Suborbital::p;
		q[2].electron = 1;
		break;
	case Symbol::C:
		q.resize(3);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		q[2].main = 2;
		q[2].orbital = Suborbital::p;
		q[2].electron = 2;
		break;
	case Symbol::N:
		q.resize(3);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		q[2].main = 2;
		q[2].orbital = Suborbital::p;
		q[2].electron = 3;
		break;
	case Symbol::O:
		q.resize(3);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		q[2].main = 2;
		q[2].orbital = Suborbital::p;
		q[2].electron = 4;
		break;
	case Symbol::F:
		q.resize(3);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		q[2].main = 2;
		q[2].orbital = Suborbital::p;
		q[2].electron = 5;
		break;
	case Symbol::Ne:
		q.resize(3);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		break;
		
	case Symbol::Na:
		q.resize(4);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		q[3].main = 3;
		q[3].orbital = Suborbital::s;
		q[3].electron = 1;
		break;
	case Symbol::Mg:
		q.resize(4);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		break;
		
		
	case Symbol::Al:
		q.resize(5);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		q[3].main = 3;
		q[3].orbital = Suborbital::p;
		q[3].electron = 1;
		break;
	case Symbol::Si:
		q.resize(5);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		q[3].main = 2;
		q[3].orbital = Suborbital::s;
		q[3].electron = 1;
		q[3].main = 3;
		q[3].orbital = Suborbital::p;
		q[3].electron = 3;
		break;
	case Symbol::P:
		q.resize(5);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		q[3].main = 2;
		q[3].orbital = Suborbital::s;
		q[3].electron = 2;
		q[3].main = 3;
		q[3].orbital = Suborbital::p;
		q[3].electron = 2;
		break;
	case Symbol::S:
		q.resize(5);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		q[3].main = 3;
		q[3].orbital = Suborbital::p;
		q[3].electron = 4;
		break;
	}
	
	return true;
}


}


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
void genQuantumNumber_Ar(Symbol s, QuantumNumber& q)
{
	q[4].main = 3;
	q[4].orbital = Suborbital::p;
	q[4].electron = 6;
}
void genQuantumNumber_Ca(Symbol s, QuantumNumber& q)
{
	q[5].main = 4;
	q[5].orbital = Suborbital::s;
	q[5].electron = 2;
}
void genQuantumNumber_Zn(Symbol s, QuantumNumber& q)
{
	q[6].main = 4;
	q[6].orbital = Suborbital::d;
	q[6].electron = 10;
}
void genQuantumNumber_Kr(Symbol s, QuantumNumber& q)
{
	q[7].main = 4;
	q[7].orbital = Suborbital::p;
	q[7].electron = 6;
}

void genQuantumNumber_Sr(Symbol s, QuantumNumber& q)
{
	q[8].main = 5;
	q[8].orbital = Suborbital::s;
	q[8].electron = 2;
}
void genQuantumNumber_Cd(Symbol s, QuantumNumber& q)
{
	q[9].main = 5;
	q[9].orbital = Suborbital::d;
	q[9].electron = 10;
}
void genQuantumNumber_Xe(Symbol s, QuantumNumber& q)
{
	q[10].main = 5;
	q[10].orbital = Suborbital::p;
	q[10].electron = 6;
}
//Solo para size 13
void genQuantumNumber_Ba_12(Symbol s, QuantumNumber& q)
{
	q[12].main = 6;
	q[12].orbital = Suborbital::s;
	q[12].electron = 2;
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
		q[4].main = 3;
		q[4].orbital = Suborbital::p;
		q[4].electron = 1;
		break;
	case Symbol::Si:
		q.resize(5);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		q[3].main = 3;
		q[3].orbital = Suborbital::s;
		q[3].electron = 1;
		q[4].main = 3;
		q[4].orbital = Suborbital::p;
		q[4].electron = 3;
		break;
	case Symbol::P:
		q.resize(5);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		q[3].main = 3;
		q[3].orbital = Suborbital::s;
		q[3].electron = 2;
		q[4].main = 3;
		q[4].orbital = Suborbital::p;
		q[4].electron = 3;
		break;
	case Symbol::S:
		q.resize(5);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		q[4].main = 3;
		q[4].orbital = Suborbital::p;
		q[4].electron = 4;
		break;
	case Symbol::Cl:
		q.resize(5);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		q[4].main = 3;
		q[4].orbital = Suborbital::p;
		q[4].electron = 5;
		break;
	case Symbol::Ar:
		q.resize(5);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);
		break;
		
	case Symbol::K:
		q.resize(6);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].electron = 1;
		break;
	case Symbol::Ca:
		q.resize(6);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);
		genQuantumNumber_Ca(s,q);
		break;
	case Symbol::Sc:
		q.resize(7);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);
		genQuantumNumber_Ca(s,q);		
		q[6].main = 4;
		q[6].orbital = Suborbital::d;
		q[6].electron = 1;
		break;
	case Symbol::Ti:
		q.resize(7);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);
		genQuantumNumber_Ca(s,q);	
		q[6].main = 4;
		q[6].orbital = Suborbital::d;
		q[6].electron = 2;
		break;
	case Symbol::V:
		q.resize(7);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);
		genQuantumNumber_Ca(s,q);		
		q[6].main = 4;
		q[6].orbital = Suborbital::d;
		q[6].electron = 3;
		break;
	case Symbol::Cr:
		q.resize(7);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].electron = 1;		
		q[6].main = 4;
		q[6].orbital = Suborbital::d;
		q[6].electron = 5;
		break;
	case Symbol::Mn:
		q.resize(7);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);
		genQuantumNumber_Ca(s,q);		
		q[6].main = 4;
		q[6].orbital = Suborbital::d;
		q[6].electron = 5;
		break;
	case Symbol::Fe:
		q.resize(7);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);
		genQuantumNumber_Ca(s,q);		
		q[6].main = 4;
		q[6].orbital = Suborbital::d;
		q[6].electron = 6;
		break;
	case Symbol::Co:
		q.resize(7);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);
		genQuantumNumber_Ca(s,q);		
		q[6].main = 4;
		q[6].orbital = Suborbital::d;
		q[6].electron = 7;
		break;
	case Symbol::Ni:
		q.resize(7);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);
		genQuantumNumber_Ca(s,q);		
		q[6].main = 4;
		q[6].orbital = Suborbital::d;
		q[6].electron = 8;
		break;
	case Symbol::Cu:
		q.resize(7);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		q[5].main = 4;
		q[5].orbital = Suborbital::s;
		q[5].electron = 1;		
		q[6].main = 4;
		q[6].orbital = Suborbital::d;
		q[6].electron = 10;
		break;
	case Symbol::Zn:
		q.resize(7);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		break;
	case Symbol::Ga:
		q.resize(8);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		q[7].main = 4;
		q[7].orbital = Suborbital::p;
		q[7].electron = 1;
		break;
	case Symbol::Ge:
		q.resize(8);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		q[7].main = 4;
		q[7].orbital = Suborbital::p;
		q[7].electron = 2;
		break;
	case Symbol::As:
		q.resize(8);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		q[7].main = 4;
		q[7].orbital = Suborbital::p;
		q[7].electron = 3;
		break;
	case Symbol::Se:
		q.resize(8);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		q[7].main = 4;
		q[7].orbital = Suborbital::p;
		q[7].electron = 4;
		break;
	case Symbol::Br:
		q.resize(8);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		q[7].main = 4;
		q[7].orbital = Suborbital::p;
		q[7].electron = 5;
		break;
	case Symbol::Kr:
		q.resize(8);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);
		break;
		
	case Symbol::Rb:
		q.resize(9);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);
		q[8].main = 5;
		q[8].orbital = Suborbital::s;
		q[8].electron = 1;
		break;
	case Symbol::Sr:
		q.resize(9);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);
		genQuantumNumber_Sr(s,q);
		break;
	case Symbol::Y:
		q.resize(10);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);
		genQuantumNumber_Sr(s,q);
		q[9].main = 5;
		q[9].orbital = Suborbital::d;
		q[9].electron = 1;
		break;
	case Symbol::Zr:
		q.resize(10);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);
		genQuantumNumber_Sr(s,q);
		q[9].main = 5;
		q[9].orbital = Suborbital::d;
		q[9].electron = 2;
		break;
	case Symbol::Nb:
		q.resize(10);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);
		q[8].main = 5;
		q[8].orbital = Suborbital::s;
		q[8].electron = 1;
		q[9].main = 5;
		q[9].orbital = Suborbital::d;
		q[9].electron = 4;
		break;
	case Symbol::Mo:
		q.resize(10);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);
		q[8].main = 5;
		q[8].orbital = Suborbital::s;
		q[8].electron = 1;
		q[9].main = 5;
		q[9].orbital = Suborbital::d;
		q[9].electron = 5;
		break;
	case Symbol::Tc:
		q.resize(10);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);
		genQuantumNumber_Sr(s,q);
		q[9].main = 5;
		q[9].orbital = Suborbital::d;
		q[9].electron = 5;
		break;
	case Symbol::Ru:
		q.resize(10);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		q[8].main = 5;
		q[8].orbital = Suborbital::s;
		q[8].electron = 1;
		q[9].main = 5;
		q[9].orbital = Suborbital::d;
		q[9].electron = 7;
		break;
	case Symbol::Rh:
		q.resize(10);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		q[8].main = 5;
		q[8].orbital = Suborbital::s;
		q[8].electron = 1;
		q[9].main = 5;
		q[9].orbital = Suborbital::d;
		q[9].electron = 8;
		break;
	case Symbol::Pd:
		q.resize(9);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);	
		q[8].main = 5;
		q[8].orbital = Suborbital::d;
		q[8].electron = 10;
		break;
	case Symbol::Ag:
		q.resize(10);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		q[8].main = 5;
		q[8].orbital = Suborbital::s;
		q[8].electron = 1;
		q[9].main = 5;
		q[9].orbital = Suborbital::d;
		q[9].electron = 10;
		break;
	case Symbol::Cd:
		q.resize(10);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		break;
	case Symbol::In:
		q.resize(11);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		q[10].main = 5;
		q[10].orbital = Suborbital::p;
		q[10].electron = 1;
		break;
	case Symbol::Sn:
		q.resize(11);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		q[10].main = 5;
		q[10].orbital = Suborbital::p;
		q[10].electron = 2;
		break;
	case Symbol::Sb:
		q.resize(11);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		q[10].main = 5;
		q[10].orbital = Suborbital::p;
		q[10].electron = 3;
		break;
	case Symbol::Te:
		q.resize(11);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		q[10].main = 5;
		q[10].orbital = Suborbital::p;
		q[10].electron = 4;
		break;
	case Symbol::I:
		q.resize(11);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		q[10].main = 5;
		q[10].orbital = Suborbital::p;
		q[10].electron = 5;
		break;
	case Symbol::Xe:
		q.resize(11);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		break;
				
	case Symbol::Cs:
		q.resize(12);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 6;
		q[11].orbital = Suborbital::s;
		q[11].electron = 1;
		break;		
	case Symbol::Ba:
		q.resize(12);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 6;
		q[11].orbital = Suborbital::s;
		q[11].electron = 2;
		break;
		
	case Symbol::La:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 5;
		q[11].orbital = Suborbital::d;
		q[11].electron = 1;
		q[12].main = 6;
		q[12].orbital = Suborbital::s;
		q[12].electron = 2;
		break;
	case Symbol::Ce:
		q.resize(14);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);	
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 1;		
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 1;
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 2;
		break;
	case Symbol::Pr:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 3;	
		genQuantumNumber_Ba_12(s,q);
		break;
	case Symbol::Nd:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 4;	
		genQuantumNumber_Ba_12(s,q);
		break;
	case Symbol::Pm:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 5;	
		genQuantumNumber_Ba_12(s,q);
		break;
	case Symbol::Sm:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 6;	
		genQuantumNumber_Ba_12(s,q);
		break;
	case Symbol::Eu:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 7;	
		genQuantumNumber_Ba_12(s,q);
		break;
	case Symbol::Gd:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 7;	
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 1;	
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 2;	
		break;
	case Symbol::Tb:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 9;	
		genQuantumNumber_Ba_12(s,q);
		break;
	case Symbol::Dy:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 10;	
		genQuantumNumber_Ba_12(s,q);	
		break;
	case Symbol::Ho:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 11;	
		genQuantumNumber_Ba_12(s,q);
		break;
	case Symbol::Er:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 12;	
		genQuantumNumber_Ba_12(s,q);	
		break;
	case Symbol::Tm:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 13;	
		genQuantumNumber_Ba_12(s,q);
		break;
	case Symbol::Yb:
		q.resize(13);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);		
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 14;	
		genQuantumNumber_Ba_12(s,q);
		break;
		
	case Symbol::Lu:
		q.resize(14);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);		
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 14;		
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 1;
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 2;	
		break;
	case Symbol::Hf:
		q.resize(14);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);	
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 14;		
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 2;
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 2;	
		break;
	case Symbol::Ta:
		q.resize(14);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);	
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 14;		
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 3;
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 2;	
		break;
	case Symbol::W:
		q.resize(14);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);	
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 14;		
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 4;
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 2;	
		break;
	case Symbol::Re:
		q.resize(14);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);	
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 14;		
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 5;
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 2;	
		break;
	case Symbol::Os:
		q.resize(14);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);	
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 14;		
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 6;
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 2;	
		break;
	case Symbol::Ir:
		q.resize(14);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);	
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 14;		
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 7;
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 2;	
		break;
	case Symbol::Pt:
		q.resize(14);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);	
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 14;		
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 9;
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 1;	
		break;
	case Symbol::Au:
		q.resize(14);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);	
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 14;		
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 10;
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 1;	
		break;
	case Symbol::Hg:
		q.resize(14);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);	
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 14;		
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 10;
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 2;	
		break;
	case Symbol::Tl:
		q.resize(15);
		genQuantumNumber_He(s,q);
		genQuantumNumber_Be(s,q);
		genQuantumNumber_Ne(s,q);
		genQuantumNumber_Mg(s,q);
		genQuantumNumber_Ar(s,q);		
		genQuantumNumber_Ca(s,q);		
		genQuantumNumber_Zn(s,q);
		genQuantumNumber_Kr(s,q);		
		genQuantumNumber_Sr(s,q);
		genQuantumNumber_Cd(s,q);
		genQuantumNumber_Xe(s,q);	
		q[11].main = 4;
		q[11].orbital = Suborbital::f;
		q[11].electron = 14;		
		q[12].main = 5;
		q[12].orbital = Suborbital::d;
		q[12].electron = 10;
		q[13].main = 6;
		q[13].orbital = Suborbital::s;
		q[13].electron = 2;	
		q[14].main = 6;
		q[14].orbital = Suborbital::p;
		q[14].electron = 1;	
		break;
		
	}
	
	return true;
}


}
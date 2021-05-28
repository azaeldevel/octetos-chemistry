
#include <octetos/core/Error.hh>
#include <iostream>


#include "../atom.hh"

namespace oct::chem
{

bool genQuantumNumber_s(unsigned short& rest,Orbital& o,QuantumNumber& q)
{
	//std::cout << "s " << rest << "\n";
	if(rest > 2) 
	{
		o.electron = 2;
		rest -= o.electron;
		q.push_back(o);	
		return true;
	}
	else if(rest <= 2)
	{
		o.electron = rest;
		rest -= o.electron;
		q.push_back(o);
		return false;
	}
	
	throw octetos::core::Exception("Error desconocido",__FILE__,__LINE__);
}
bool genQuantumNumber_p(unsigned short& rest,Orbital& o,QuantumNumber& q)
{
	if(rest >= 6) 
	{
		o.electron = 6;
		rest -= o.electron;
		q.push_back(o);
		return true;
	}
	else if(rest < 6) 
	{
		o.electron = rest;
		rest = 0;
		q.push_back(o);
		return false;
	}
		
	throw octetos::core::Exception("Error desconocido",__FILE__,__LINE__);
}
bool genQuantumNumber_d(unsigned short& rest,Orbital& o,QuantumNumber& q)
{
	if(rest >= 10) 
	{
		o.electron = 10;
		rest -= o.electron;
		q.push_back(o);
		return true;
	}
	else if(rest < 10) 
	{
		o.electron = rest;
		rest = 0;
		q.push_back(o);
		return false;
	}
	
	throw octetos::core::Exception("Error desconocido",__FILE__,__LINE__);
}
bool genQuantumNumber_f(unsigned short& rest,Orbital& o,QuantumNumber& q)
{
	if(rest >= 14) 
	{
		o.electron = 14;
		rest -= o.electron;
		q.push_back(o);
		return true;
	}
	else if(rest < 14) 
	{
		o.electron = rest;
		rest = 0;
		q.push_back(o);
		return false;
	}
	
	throw octetos::core::Exception("Error desconocido",__FILE__,__LINE__);
}
void Atom::genQuantumNumber(Symbol s, QuantumNumber& q)
{
	Orbital o;
	unsigned short rest = s;
	//std::cout << "symbol : " << s << "\n";
	//std::cout << "rest : " << rest << "\n";
	//std::cout << "Step 1\n";
	//1s2
	o.main = 1;
	o.orbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q)) 
	{
		q.resize(1);
		return;
	}
	//std::cout << "Step 2\n";
	//2s2
	o.main = 2;
	o.orbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q))
	{
		q.resize(2);
		return;
	}
	//std::cout << "Step 3\n";
	//2p6
	o.main = 2;
	o.orbital = Suborbital::p;
	if(not genQuantumNumber_p(rest,o,q))
	{
		q.resize(3);
		return;
	}
	//std::cout << "Step 4\n";
	//3s2
	o.main = 3;
	o.orbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q))
	{
		q.resize(4);
		return;
	}
	//std::cout << "Step 5\n";
	//3p6
	o.main = 3;
	o.orbital = Suborbital::p;
	if(not genQuantumNumber_p(rest,o,q))
	{
		q.resize(5);
		return;
	}
	
	//4s2
	o.main = 4;
	o.orbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q))
	{
		q.resize(6);
		return;
	}
	
	//3d10
	o.main = 3;
	o.orbital = Suborbital::d;
	if(not genQuantumNumber_d(rest,o,q))
	{
		q.resize(7);
		return;
	}
	
	//4p6
	o.main = 4;
	o.orbital = Suborbital::p;
	if(not genQuantumNumber_p(rest,o,q))
	{
		q.resize(8);
		return;
	}
	
	//5s2
	o.main = 5;
	o.orbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q))
	{
		q.resize(9);
		return;
	}
	
	//4d10
	o.main = 4;
	o.orbital = Suborbital::d;
	if(not genQuantumNumber_d(rest,o,q))
	{
		q.resize(10);
		return;
	}
	
	//5p6
	o.main = 5;
	o.orbital = Suborbital::p;
	if(not genQuantumNumber_p(rest,o,q))
	{
		q.resize(11);
		return;
	}
	
	//6s2
	o.main = 6;
	o.orbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q))
	{
		q.resize(12);
		return;
	}
	
	//4f14
	o.main = 4;
	o.orbital = Suborbital::f;
	if(not genQuantumNumber_f(rest,o,q)) 
	{
		q.resize(13);
		return;
	}
	//5d10
	o.main = 5;
	o.orbital = Suborbital::d;
	if(not genQuantumNumber_d(rest,o,q))
	{
		q.resize(14);
		return;
	}
	
	//6p6
	o.main = 6;
	o.orbital = Suborbital::p;
	if(not genQuantumNumber_p(rest,o,q))
	{
		q.resize(15);
		return;
	}
	
	//7s2
	o.main = 7;
	o.orbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q))
	{
		q.resize(16);
		return;
	}
	
	//5f14
	o.main = 5;
	o.orbital = Suborbital::f;
	if(not genQuantumNumber_f(rest,o,q))
	{
		q.resize(17);
		return;
	}
	//6d10
	o.main = 6;
	o.orbital = Suborbital::d;
	if(not genQuantumNumber_d(rest,o,q))
	{
		q.resize(18);
		return;
	}
	
	//7p6
	o.main = 7;
	o.orbital = Suborbital::p;
	if(not genQuantumNumber_p(rest,o,q))
	{
		q.resize(19);
		return;
	}
	
	//6f14
	o.main = 6;
	o.orbital = Suborbital::f;
	if(not genQuantumNumber_f(rest,o,q))
	{
		q.resize(20);
		return;
	}
	
	//7d10
	o.main = 7;
	o.orbital = Suborbital::d;
	if(not genQuantumNumber_d(rest,o,q))
	{
		q.resize(21);
		return;
	}
	
	//7f14
	o.main = 7;
	o.orbital = Suborbital::f;
	if(not genQuantumNumber_f(rest,o,q))
	{
		q.resize(22);
		return;
	}
}


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
void genQuantumNumber_Rn(Symbol s, QuantumNumber& q)
{
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
	q[14].electron = 6;
}
void Atom::genQuantumNumber2(Symbol s, QuantumNumber& q)
{
	switch(s)
	{
	case 0:
		break;
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
		q[12].main = 6;
		q[12].orbital = Suborbital::s;
		q[12].electron = 2;
		break;
	case Symbol::Gd:
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
	case Symbol::Pb:
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
		q[14].electron = 2;	
		break;
	case Symbol::Bi:
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
		q[14].electron = 3;	
		break;
	case Symbol::Po:
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
		q[14].electron = 4;	
		break;
	case Symbol::At:
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
		q[14].electron = 5;	
		break;
	case Symbol::Rn:
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
		genQuantumNumber_Rn(s,q);
		break;
	case Symbol::Fr:
		q.resize(16);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 7;
		q[15].orbital = Suborbital::s;
		q[15].electron = 1;	
		break;
	case Symbol::Ra:
		q.resize(16);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 7;
		q[15].orbital = Suborbital::s;
		q[15].electron = 2;	
		break;
	case Symbol::Ac:
		q.resize(17);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 6;
		q[15].orbital = Suborbital::d;
		q[15].electron = 1;	
		q[16].main = 7;
		q[16].orbital = Suborbital::s;
		q[16].electron = 2;	
		break;
	case Symbol::Th:
		q.resize(17);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 6;
		q[15].orbital = Suborbital::d;
		q[15].electron = 2;	
		q[16].main = 7;
		q[16].orbital = Suborbital::s;
		q[16].electron = 2;	
		break;
	case Symbol::Pa:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 2;
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 1;	
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;
	case Symbol::U:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 3;
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 1;	
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;
	case Symbol::Np:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 4;
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 1;	
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;
	case Symbol::Pu:
		q.resize(17);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 6;	
		q[16].main = 7;
		q[16].orbital = Suborbital::s;
		q[16].electron = 2;	
		break;
	case Symbol::Am:
		q.resize(17);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 7;	
		q[16].main = 7;
		q[16].orbital = Suborbital::s;
		q[16].electron = 2;	
		break;
	case Symbol::Cm:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 7;
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 1;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;
	case Symbol::Bk:
		q.resize(17);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 9;	
		q[16].main = 7;
		q[16].orbital = Suborbital::s;
		q[16].electron = 2;	
		break;
	case Symbol::Cf:
		q.resize(17);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 10;	
		q[16].main = 7;
		q[16].orbital = Suborbital::s;
		q[16].electron = 2;	
		break;
	case Symbol::Es:
		q.resize(17);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 11;	
		q[16].main = 7;
		q[16].orbital = Suborbital::s;
		q[16].electron = 2;	
		break;
	case Symbol::Fm:
		q.resize(17);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 12;	
		q[16].main = 7;
		q[16].orbital = Suborbital::s;
		q[16].electron = 2;	
		break;
	case Symbol::Md:
		q.resize(17);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 13;	
		q[16].main = 7;
		q[16].orbital = Suborbital::s;
		q[16].electron = 2;	
		break;
	case Symbol::No:
		q.resize(17);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 7;
		q[16].orbital = Suborbital::s;
		q[16].electron = 2;	
		break;
		
	case Symbol::Lr:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 1;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;
	case Symbol::Rf:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 2;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;
	case Symbol::Db:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 3;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;
	case Symbol::Sg:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 4;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;
	case Symbol::Bh:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 5;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;
	case Symbol::Hs:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 6;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;	
	case Symbol::Mt:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 7;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;
	case Symbol::Ds:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 8;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;
	case Symbol::Rg:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 10;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 1;	
		break;
	case Symbol::Cn:
		q.resize(18);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 10;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;	
		break;
	case Symbol::Nh:
		q.resize(19);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 10;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;		
		q[18].main = 7;
		q[18].orbital = Suborbital::p;
		q[18].electron = 1;	
		break;
	case Symbol::Fl:
		q.resize(19);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 10;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;		
		q[18].main = 7;
		q[18].orbital = Suborbital::p;
		q[18].electron = 2;	
		break;
	case Symbol::Mc:
		q.resize(19);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 10;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;		
		q[18].main = 7;
		q[18].orbital = Suborbital::p;
		q[18].electron = 3;	
		break;
	case Symbol::Lv:
		q.resize(19);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 10;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;		
		q[18].main = 7;
		q[18].orbital = Suborbital::p;
		q[18].electron = 4;	
		break;
	case Symbol::Ts:
		q.resize(19);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 10;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;		
		q[18].main = 7;
		q[18].orbital = Suborbital::p;
		q[18].electron = 5;	
		break;
	case Symbol::Og:
		q.resize(19);
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
		genQuantumNumber_Rn(s,q);
		q[15].main = 5;
		q[15].orbital = Suborbital::f;
		q[15].electron = 14;	
		q[16].main = 6;
		q[16].orbital = Suborbital::d;
		q[16].electron = 10;		
		q[17].main = 7;
		q[17].orbital = Suborbital::s;
		q[17].electron = 2;		
		q[18].main = 7;
		q[18].orbital = Suborbital::p;
		q[18].electron = 6;	
		break;
	default:
		std::string msg = "El elemento con numero atomico '";
		msg += std::to_string(s) + "' no exite en la tabla perica(de la tierra!)";
		throw octetos::core::Exception(msg,__FILE__,__LINE__);	
	}
}


}


#include <octetos/core/Error.hh>

#include "../atom.hh"

namespace oct::chem
{

//https://www.quimicas.net/2015/07/tabla-de-valencias.html
bool genValencias_1(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{		
	case phy::Symbol::H:
		v.push_back(-1);
		v.push_back(1);
		v.resize(2);
		return true;
	case phy::Symbol::Li:
	case phy::Symbol::Na:
	case phy::Symbol::K:
	case phy::Symbol::Rb:
	case phy::Symbol::Cs:
	case phy::Symbol::Fr:
	case phy::Symbol::Ag:
		v.push_back(1);
		v.resize(1);
		return true;
	default :
		return false;
	}
	return true;
}
bool genValencias_2(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{				
	case phy::Symbol::Be:
	case phy::Symbol::Mg:
	case phy::Symbol::Ca:
	case phy::Symbol::Sr:
	case phy::Symbol::Ba:
	case phy::Symbol::Ra:
		v.push_back(2);
		v.resize(1);
		return true;		
	default :
		return false;
	}
}
bool genValencias_3(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{				
	case phy::Symbol::Sc:
	case phy::Symbol::Y:
		v.push_back(3);
		v.resize(1);
		return true;		
	default :
		return false;
	}	
}
bool genValencias_4(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{				
	case phy::Symbol::Ti:
	case phy::Symbol::Zr:
	case phy::Symbol::Rf:
		v.push_back(4);
		v.resize(1);
		return true;	
	case phy::Symbol::Hf:
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.resize(3);
		return true;			
	default :
		return false;
	}	
}
bool genValencias_5(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{				
	case phy::Symbol::V:		
	case phy::Symbol::Nb:
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);
		v.resize(4);
		return true;
	case phy::Symbol::Ta:
	case phy::Symbol::Db:
		v.push_back(5);
		v.resize(1);
		return true;				
	default :
		return false;
	}	
}
bool genValencias_6(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{	
	case phy::Symbol::Cr:	
		v.push_back(2);
		v.push_back(3);
		v.push_back(6);
		v.resize(3);
		return true;	
	case phy::Symbol::Mo:
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);
		v.push_back(6);
		v.resize(5);
		return true;	
	case phy::Symbol::W:		
		v.push_back(4);
		v.push_back(6);
		v.resize(2);
		return true;				
	default :
		return false;
	}	
}
bool genValencias_7(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{	
	case phy::Symbol::Mn:		
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(6);
		v.push_back(7);
		v.resize(5);	
		return true;	
	case phy::Symbol::Tc:	
		v.push_back(4);	
		v.push_back(7);
		v.resize(2);
		return true;		
	case phy::Symbol::Re:	
		v.push_back(4);
		v.resize(1);
		return true;		
	case phy::Symbol::Bh:	
		v.push_back(7);
		v.resize(1);
		return true;			
	default :
		return false;
	}	
}
bool genValencias_8(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{	
	case phy::Symbol::Fe:
		v.push_back(2);
		v.push_back(3);
		v.resize(2);
		return true;	
	case phy::Symbol::Ru:		
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(6);
		v.push_back(8);
		v.resize(5);	
		return true;	
	case phy::Symbol::Os:	
		v.push_back(4);
		v.resize(1);
		return true;
	case phy::Symbol::Hs:
		return true;		
	default :
		return false;
	}	
}
bool genValencias_9(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{		
	case phy::Symbol::Co:
		v.push_back(2);
		v.push_back(3);
		v.resize(2);
		return true;	
	case phy::Symbol::Rh:	
		v.push_back(3);
		v.resize(1);
		return true;	
	case phy::Symbol::Ir:	
		v.push_back(3);
		v.push_back(4);
		v.resize(2);
		return true;	
	case phy::Symbol::Mt:
		return true;		
	default :
		return false;
	}	
}
bool genValencias_10(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{
	case phy::Symbol::Ni:
		v.push_back(2);
		v.push_back(3);
		v.resize(2);
		return true;	
	case phy::Symbol::Pd:	
		v.push_back(1);
		v.push_back(2);
		v.push_back(4);
		v.push_back(6);
		v.resize(4);
		return true;	
	case phy::Symbol::Pt:	
		v.push_back(2);
		v.push_back(4);
		v.resize(2);
		return true;
	case phy::Symbol::Ds:
		return true;		
	default :
		return false;
	}	
}
bool genValencias_11(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{
	case phy::Symbol::Cu:	
	case phy::Symbol::Ag:	
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.resize(4);
		return true;	
	case phy::Symbol::Au:	
		v.push_back(1);
		v.push_back(3);
		v.resize(2);
		return true;
	case phy::Symbol::Rg:
		return true;		
	default :
		return false;
	}	
}
bool genValencias_12(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{
	case phy::Symbol::Cd:	
	case phy::Symbol::Hg:	
		v.push_back(1);
		v.push_back(2);
		v.resize(2);
		return true;	
	case phy::Symbol::Zn:	
		v.push_back(2	);
		v.resize(1);
		return true;
	case phy::Symbol::Cn:
		return true;		
	default :
		return false;
	}	
}
bool genValencias_13(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{
	case phy::Symbol::B:	
	case phy::Symbol::Al:
	case phy::Symbol::Ga:
	case phy::Symbol::In:	
		v.push_back(3);
		v.resize(1);
		return true;	
	case phy::Symbol::Ti:	
		v.push_back(3);
		v.push_back(1);
		v.resize(2);
		return true;
	case phy::Symbol::Nh:
		return true;		
	default :
		return false;
	}	
}
bool genValencias_14(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{
	case phy::Symbol::C:	
	case phy::Symbol::Ge:
	case phy::Symbol::Sn:
	case phy::Symbol::Pb:	
		v.push_back(2);
		v.push_back(4);
		v.resize(2);
		return true;	
	case phy::Symbol::Si:	
		v.push_back(2);
		v.resize(1);
		return true;
	case phy::Symbol::Fl:
		return true;		
	default :
		return false;
	}	
}
bool genValencias_15(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{
	case phy::Symbol::N:		
		v.push_back(-3);
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.resize(5);
		return true;
	case phy::Symbol::As:	
	case phy::Symbol::Sb:
	case phy::Symbol::Bi:	
		v.push_back(-3);
		v.push_back(3);
		v.push_back(5);
		v.resize(3);
		return true;	
	case phy::Symbol::P:		
		v.push_back(-3);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);
		v.resize(3);
		return true;
	case phy::Symbol::Mc:
		return true;		
	default :
		return false;
	}	
}
bool genValencias_16(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{
	case phy::Symbol::O:		
		v.push_back(-2);
		v.push_back(-1);
		v.resize(2);
		return true;
	case phy::Symbol::S:	
	case phy::Symbol::Se:
	case phy::Symbol::Te:	
		v.push_back(-2);
		v.push_back(2);
		v.push_back(4);
		v.push_back(6);
		v.resize(4);
		return true;	
	case phy::Symbol::Po:
		v.push_back(-2);
		v.push_back(2);
		v.push_back(4);
		v.resize(3);
		return true;
	case phy::Symbol::Lv:
		return true;		
	default :
		return false;
	}	
}
bool genValencias_17(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{
	case phy::Symbol::F:		
		v.push_back(-1);
		v.resize(1);
		return true;
	case phy::Symbol::Cl:	
	case phy::Symbol::Br:
	case phy::Symbol::I:	
		v.push_back(-1);
		v.push_back(1);
		v.push_back(3);
		v.push_back(5);
		v.resize(4);
		return true;	
	case phy::Symbol::At:
		v.push_back(-1);
		v.push_back(1);
		v.resize(2);
		return true;
	case phy::Symbol::Ts:
		return true;		
	default :
		return false;
	}	
}	
bool genValencias_18(phy::Symbol s,phy::Valencias& v)
{
	switch(s)
	{
	case phy::Symbol::He:	
	case phy::Symbol::Ne:	
	case phy::Symbol::Ar:
	case phy::Symbol::Kr:
	case phy::Symbol::Xe:
	case phy::Symbol::Rn:
		v.clear();
		return true;
	case phy::Symbol::Ts:
		return true;		
	default :
		return false;
	}	
}
bool Atom::genValencias(phy::Symbol s,phy::Valencias& v)
{
	if(genValencias_1(s,v)) return true;
	
	if(genValencias_2(s,v)) return true;
	
	if(genValencias_3(s,v)) return true;
	
	if(genValencias_4(s,v)) return true;
	
	if(genValencias_4(s,v)) return true;
	
	if(genValencias_5(s,v)) return true;
	
	if(genValencias_6(s,v)) return true;
	
	if(genValencias_7(s,v)) return true;
	
	if(genValencias_8(s,v)) return true;
	
	if(genValencias_9(s,v)) return true;
	
	if(genValencias_10(s,v)) return true;
	
	if(genValencias_11(s,v)) return true;
	
	if(genValencias_12(s,v)) return true;
	
	if(genValencias_13(s,v)) return true;
	
	if(genValencias_14(s,v)) return true;
	
	if(genValencias_15(s,v)) return true;
	
	if(genValencias_16(s,v)) return true;
	
	if(genValencias_17(s,v)) return true;
	
	if(genValencias_18(s,v)) return true;
	
	return false;
}



}



#include <octetos/core/Error.hh>

#include "../atom.hh"

namespace oct::chem
{

//https://www.quimicas.net/2015/07/tabla-de-valencias.html
bool genValencias_1(Symbol s,Valencia& v)
{
	switch(s)
	{		
	case Symbol::H:
		v.push_back(-1);
		v.push_back(1);
		v.resize(2);
		return true;
	case Symbol::Li:
	case Symbol::Na:
	case Symbol::K:
	case Symbol::Rb:
	case Symbol::Cs:
	case Symbol::Fr:
	case Symbol::Ag:
		v.push_back(1);
		v.resize(1);
		return true;
	default :
		return false;
	}
	return true;
}
bool genValencias_2(Symbol s,Valencia& v)
{
	switch(s)
	{				
	case Symbol::Be:
	case Symbol::Mg:
	case Symbol::Ca:
	case Symbol::Sr:
	case Symbol::Ba:
	case Symbol::Ra:
		v.push_back(2);
		v.resize(1);
		return true;		
	default :
		return false;
	}
}
bool genValencias_3(Symbol s,Valencia& v)
{
	switch(s)
	{				
	case Symbol::Sc:
	case Symbol::Y:
		v.push_back(3);
		v.resize(1);
		return true;		
	default :
		return false;
	}	
}
bool genValencias_4(Symbol s,Valencia& v)
{
	switch(s)
	{				
	case Symbol::Ti:
	case Symbol::Zr:
	case Symbol::Rf:
		v.push_back(4);
		v.resize(1);
		return true;	
	case Symbol::Hf:
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.resize(3);
		return true;			
	default :
		return false;
	}	
}
bool genValencias_5(Symbol s,Valencia& v)
{
	switch(s)
	{				
	case Symbol::V:		
	case Symbol::Nb:
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);
		v.resize(4);
		return true;
	case Symbol::Ta:
	case Symbol::Db:
		v.push_back(5);
		v.resize(1);
		return true;				
	default :
		return false;
	}	
}
bool genValencias_6(Symbol s,Valencia& v)
{
	switch(s)
	{	
	case Symbol::Cr:	
		v.push_back(2);
		v.push_back(3);
		v.push_back(6);
		v.resize(3);
		return true;	
	case Symbol::Mo:
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);
		v.push_back(6);
		v.resize(5);
		return true;	
	case Symbol::W:		
		v.push_back(4);
		v.push_back(6);
		v.resize(2);
		return true;				
	default :
		return false;
	}	
}
bool genValencias_7(Symbol s,Valencia& v)
{
	switch(s)
	{	
	case Symbol::Mn:		
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(6);
		v.push_back(7);
		v.resize(5);	
		return true;	
	case Symbol::Tc:	
		v.push_back(4);	
		v.push_back(7);
		v.resize(2);
		return true;		
	case Symbol::Re:	
		v.push_back(4);
		v.resize(1);
		return true;		
	case Symbol::Bh:	
		v.push_back(7);
		v.resize(1);
		return true;			
	default :
		return false;
	}	
}
bool genValencias_8(Symbol s,Valencia& v)
{
	switch(s)
	{	
	case Symbol::Fe:
		v.push_back(2);
		v.push_back(3);
		v.resize(2);
		return true;	
	case Symbol::Ru:		
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(6);
		v.push_back(8);
		v.resize(5);	
		return true;	
	case Symbol::Os:	
		v.push_back(4);
		v.resize(1);
		return true;
	case Symbol::Hs:
		{
			std::string msg = "Valencia desconocida para '";
			msg += Atom::genNames(s);
			msg += "'";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}
bool genValencias_9(Symbol s,Valencia& v)
{
	switch(s)
	{		
	case Symbol::Co:
		v.push_back(2);
		v.push_back(3);
		v.resize(2);
		return true;	
	case Symbol::Rh:	
		v.push_back(3);
		v.resize(1);
		return true;	
	case Symbol::Ir:	
		v.push_back(3);
		v.push_back(4);
		v.resize(2);
		return true;	
	case Symbol::Mt:
		{
			std::string msg = "Valencia desconocida para '";
			msg += Atom::genNames(s);
			msg += "'";
		throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}
bool genValencias_10(Symbol s,Valencia& v)
{
	switch(s)
	{
	case Symbol::Ni:
		v.push_back(2);
		v.push_back(3);
		v.resize(2);
		return true;	
	case Symbol::Pd:	
		v.push_back(1);
		v.push_back(2);
		v.push_back(4);
		v.push_back(6);
		v.resize(4);
		return true;	
	case Symbol::Pt:	
		v.push_back(2);
		v.push_back(4);
		v.resize(2);
		return true;
	case Symbol::Ds:
		{
			std::string msg = "Valencia desconocida para '";
			msg += Atom::genNames(s);
			msg += "'";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}
bool genValencias_11(Symbol s,Valencia& v)
{
	switch(s)
	{
	case Symbol::Cu:	
	case Symbol::Ag:	
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.resize(4);
		return true;	
	case Symbol::Au:	
		v.push_back(1);
		v.push_back(3);
		v.resize(2);
		return true;
	case Symbol::Rg:
		{
			std::string msg = "Valencia desconocida para '";
			msg += Atom::genNames(s);
			msg += "'";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}
bool genValencias_12(Symbol s,Valencia& v)
{
	switch(s)
	{
	case Symbol::Cd:	
	case Symbol::Hg:	
		v.push_back(1);
		v.push_back(2);
		v.resize(2);
		return true;	
	case Symbol::Zn:	
		v.push_back(2	);
		v.resize(1);
		return true;
	case Symbol::Cn:
		{
			std::string msg = "Valencia desconocida para '";
			msg += Atom::genNames(s);
			msg += "'";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}
bool genValencias_13(Symbol s,Valencia& v)
{
	switch(s)
	{
	case Symbol::B:	
	case Symbol::Al:
	case Symbol::Ga:
	case Symbol::In:	
		v.push_back(3);
		v.resize(1);
		return true;	
	case Symbol::Ti:	
		v.push_back(3);
		v.push_back(1);
		v.resize(2);
		return true;
	case Symbol::Nh:
		{
			std::string msg = "Valencia desconocida para '";
			msg += Atom::genNames(s);
			msg += "'";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}
bool genValencias_14(Symbol s,Valencia& v)
{
	switch(s)
	{
	case Symbol::C:	
	case Symbol::Ge:
	case Symbol::Sn:
	case Symbol::Pb:	
		v.push_back(2);
		v.push_back(4);
		v.resize(2);
		return true;	
	case Symbol::Si:	
		v.push_back(2);
		v.resize(1);
		return true;
	case Symbol::Fl:
		{
			std::string msg = "Valencia desconocida para '";
			msg += Atom::genNames(s);
			msg += "'";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}
bool genValencias_15(Symbol s,Valencia& v)
{
	switch(s)
	{
	case Symbol::N:		
		v.push_back(-3);
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.resize(5);
		return true;
	case Symbol::As:	
	case Symbol::Sb:
	case Symbol::Bi:	
		v.push_back(-3);
		v.push_back(3);
		v.push_back(5);
		v.resize(3);
		return true;	
	case Symbol::P:		
		v.push_back(-3);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);
		v.resize(3);
		return true;
	case Symbol::Mc:
		{
			std::string msg = "Valencia desconocida para '";
			msg += Atom::genNames(s);
			msg += "'";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}
bool genValencias_16(Symbol s,Valencia& v)
{
	switch(s)
	{
	case Symbol::O:		
		v.push_back(-2);
		v.push_back(-1);
		v.resize(2);
		return true;
	case Symbol::S:	
	case Symbol::Se:
	case Symbol::Te:	
		v.push_back(-2);
		v.push_back(2);
		v.push_back(4);
		v.push_back(6);
		v.resize(4);
		return true;	
	case Symbol::Po:
		v.push_back(-2);
		v.push_back(2);
		v.push_back(4);
		v.resize(3);
		return true;
	case Symbol::Lv:
		{
			std::string msg = "Valencia desconocida para '";
			msg += Atom::genNames(s);
			msg += "'";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}
bool genValencias_17(Symbol s,Valencia& v)
{
	switch(s)
	{
	case Symbol::F:		
		v.push_back(-1);
		v.resize(1);
		return true;
	case Symbol::Cl:	
	case Symbol::Br:
	case Symbol::I:	
		v.push_back(-1);
		v.push_back(1);
		v.push_back(3);
		v.push_back(5);
		v.resize(4);
		return true;	
	case Symbol::At:
		v.push_back(-1);
		v.push_back(1);
		v.resize(2);
		return true;
	case Symbol::Ts:
		{
			std::string msg = "Valencia desconocida para '";
			msg += Atom::genNames(s);
			msg += "'";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}	
bool genValencias_18(Symbol s,Valencia& v)
{
	switch(s)
	{
	case Symbol::He:	
	case Symbol::Ne:	
	case Symbol::Ar:
	case Symbol::Kr:
	case Symbol::Xe:
	case Symbol::Rn:
		v.clear();
		return true;
	case Symbol::Ts:
		{
			std::string msg = "Valencia desconocida para '";
			msg += Atom::genNames(s);
			msg += "'";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}
bool Atom::genValencias(Symbol s,Valencia& v)
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

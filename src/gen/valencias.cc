

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
			std::string msg "Valencia desconocida para '";
			msg += genNames(s);
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
			std::string msg "Valencia desconocida para '";
			msg += genNames(s);
			msg += "'";
		throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}
bool genValencias_8(Symbol s,Valencia& v)
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
			std::string msg "Valencia desconocida para '";
			msg += genNames(s);
			msg += "'";
		throw octetos::core::Exception(msg,__FILE__,__LINE__);	
		}		
	default :
		return false;
	}	
}

bool Atom::genValencias(Symbol s,Valencia& v)
{
	
}



}


#include <octetos/core/Error.hh>

#include "../atom.hh"

namespace oct::chem
{
const char* Atom::genStrSymbol(Symbol s)
{
	switch(s)
	{
	case 0:
		return NULL;
		break;
	case Symbol::H:
		return "H";
	case Symbol::He:
		return "He";
	case Symbol::Li:
		return "Li";
	case Symbol::Be:
		return "Be";
	case Symbol::B:
		return "B";
	case Symbol::C:
		return "C";
	case Symbol::N:
		return "N";
	case Symbol::O:
		return "O";
	case Symbol::F:
		return "F";
	case Symbol::Ne:
		return "Ne";
		
	case Symbol::Na:
		return "Na";
	case Symbol::Mg:
		return "Mg";
		
		
	case Symbol::Al:
		return "Al";
	case Symbol::Si:
		return "Si";
	case Symbol::P:
		return "P";
	case Symbol::S:
		return "S";
	case Symbol::Cl:
		return "Cl";
	case Symbol::Ar:
		return "Ar";
		
	case Symbol::K:
		return "K";
	case Symbol::Ca:
		return "Ca";
	case Symbol::Sc:
		return "Sc";
	case Symbol::Ti:
		return "Ti";
	case Symbol::V:
		return "V";
	case Symbol::Cr:
		return "Cr";
	case Symbol::Mn:
		return "Mn";
	case Symbol::Fe:
		return "Fe";
	case Symbol::Co:
		return "Co";
	case Symbol::Ni:
		return "Ni";
	case Symbol::Cu:
		return "Cu";
	case Symbol::Zn:
		return "Zn";
	case Symbol::Ga:
		return "Ga";
	case Symbol::Ge:
		return "Ge";
	case Symbol::As:
		return "As";
	case Symbol::Se:
		return "Se";
	case Symbol::Br:
		return "Br";
	case Symbol::Kr:
		return "Kr";
		
	case Symbol::Rb:
		return "";
	case Symbol::Sr:
		return "";
	case Symbol::Y:
		return "";
	case Symbol::Zr:
		return "";
	case Symbol::Nb:
		return "";
	case Symbol::Mo:
		return "";
	case Symbol::Tc:
		return "";
	case Symbol::Ru:
		return "";
	case Symbol::Rh:
		return "";
	case Symbol::Pd:
		return "";
	case Symbol::Ag:
		return "";
	case Symbol::Cd:
		return "";
	case Symbol::In:
		return "";
	case Symbol::Sn:
		return "";
	case Symbol::Sb:
		return "";
	case Symbol::Te:
		return "";
	case Symbol::I:
		return "";
	case Symbol::Xe:
		return "";
				
	case Symbol::Cs:
		return "";		
	case Symbol::Ba:
		return "";
		
	case Symbol::La:
		return "";
	case Symbol::Ce:
		return "";
	case Symbol::Pr:
		return "";
	case Symbol::Nd:
		return "";
	case Symbol::Pm:
		return "";
	case Symbol::Sm:
		return "";
	case Symbol::Eu:
		return "";
	case Symbol::Gd:
		return "";
	case Symbol::Tb:
		return "";
	case Symbol::Dy:	
		return "";
	case Symbol::Ho:
		return "";
	case Symbol::Er:	
		return "";
	case Symbol::Tm:
		return "";
	case Symbol::Yb:
		return "";
		
	case Symbol::Lu:
		return "";
	case Symbol::Hf:	
		return "";
	case Symbol::Ta:	
		return "";
	case Symbol::W:	
		return "";
	case Symbol::Re:
		return "";
	case Symbol::Os:
		return "";
	case Symbol::Ir:
		return "";
	case Symbol::Pt:
		break;
	case Symbol::Au:
		break;
	case Symbol::Hg:
		break;
	case Symbol::Tl:
		break;
	case Symbol::Pb:	
		break;
	case Symbol::Bi:
		break;
	case Symbol::Po:
		break;
	case Symbol::At:
		break;
	case Symbol::Rn:
		break;
	case Symbol::Fr:	
		break;
	case Symbol::Ra:	
		break;
	case Symbol::Ac:	
		break;
	case Symbol::Th:
		break;
	case Symbol::Pa:
		break;
	case Symbol::U:	
		break;
	case Symbol::Np:	
		break;
	case Symbol::Pu:
		break;
	case Symbol::Am:	
		break;
	case Symbol::Cm:
		break;
	case Symbol::Bk:
		break;
	case Symbol::Cf:	
		break;
	case Symbol::Es:
		break;
	case Symbol::Fm:	
		break;
	case Symbol::Md:
		break;
	case Symbol::No:
		break;
		
	case Symbol::Lr:
		break;
	case Symbol::Rf:
		break;
	case Symbol::Db:
		break;
	case Symbol::Sg:	
		break;
	case Symbol::Bh:
		break;
	case Symbol::Hs:
		break;	
	case Symbol::Mt:	
		break;
	case Symbol::Ds:
		break;
	case Symbol::Rg:	
		break;
	case Symbol::Cn:
		break;
	case Symbol::Nh:	
		break;
	case Symbol::Fl:
		break;
	case Symbol::Mc:	
		break;
	case Symbol::Lv:	
		break;
	case Symbol::Ts:
		break;
	case Symbol::Og:
		break;
	default:
		std::string msg = "El elemento con numero atomico '";
		msg += std::to_string(s) + "' no exite en la tabla perica(de la tierra!)";
		throw octetos::core::Exception(msg,__FILE__,__LINE__);	
	}
	return NULL;
}
}

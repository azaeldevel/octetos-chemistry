
#include <octetos/core/Error.hh>

#include "../atom.hh"

namespace oct::chem
{
const char* Atom::genNames(Symbol s)
{
	switch(s)
	{
	case Symbol::H:
		return "Hidrogeno";
	case Symbol::He:
		return "Helio";
	case Symbol::Li:
		return "Litio";
	case Symbol::Be:
		return "Berilio";
	case Symbol::B:
		return "Boro";
	case Symbol::C:
		return "Carbono";
	case Symbol::N:
		return "Nitrogeno";
	case Symbol::O:
		return "Oxigeno";
	case Symbol::F:
		return "Fluor";
	case Symbol::Ne:
		return "Neon";
		
	case Symbol::Na:
		return "Sodio";
	case Symbol::Mg:
		return "Magnesio";
		
		
	case Symbol::Al:
		return "Aluminio";
	case Symbol::Si:
		return "Silicio";
	case Symbol::P:
		return "Fosforo";
	case Symbol::S:
		return "Azifre";
	case Symbol::Cl:
		return "Cloro";
	case Symbol::Ar:
		return "Argon";
		
	case Symbol::K:
		return "Potasio";
	case Symbol::Ca:
		return "Calcio";
	case Symbol::Sc:
		return "Escandio";
	case Symbol::Ti:
		return "Titanio";
	case Symbol::V:
		return "Vanadio";
	case Symbol::Cr:
		return "Cromo";
	case Symbol::Mn:
		return "Magnesio";
	case Symbol::Fe:
		return "Hierro";
	case Symbol::Co:
		return "Cobalto";
	case Symbol::Ni:
		return "Niquel";
	case Symbol::Cu:
		return "Cobre";
	case Symbol::Zn:
		return "Zinc";
	case Symbol::Ga:
		return "Galio";
	case Symbol::Ge:
		return "Germanio";
	case Symbol::As:
		return "Arsenico";
	case Symbol::Se:
		return "Selenio";
	case Symbol::Br:
		return "Bromo";
	case Symbol::Kr:
		return "Kripton";
		
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

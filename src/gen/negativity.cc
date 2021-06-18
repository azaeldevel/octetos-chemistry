
#include <octetos/core/Error.hh>

#include "../atom.hh"

namespace oct::chem
{
//https://www.quimica.es/enciclopedia/Electronegatividad.html
////https://www.ecured.cu/Reactividad
float Atom::genNegativityNumber(phy::Symbol s)
{
	switch(s)
	{
	case phy::Symbol::None:
		return 0.0;
		
	case phy::Symbol::H:
		return 2.10;
	case phy::Symbol::He:
		return 0.00;
		
	case phy::Symbol::Li:
		return 0.98;
	case phy::Symbol::Be:
		return 1.57;
	case phy::Symbol::B:
		return 2.04;
	case phy::Symbol::C:
		return 2.55;
	case phy::Symbol::N:
		return 3.04;
	case phy::Symbol::O:
		return 3.44;
	case phy::Symbol::F:
		return 4.00;
	case phy::Symbol::Ne:
		return 0.00;
		
	case phy::Symbol::Na:
		return 0.93;
	case phy::Symbol::Mg:
		return 1.31;		
	case phy::Symbol::Al:
		return 1.61;
	case phy::Symbol::Si:
		return 1.90;
	case phy::Symbol::P:
		return 2.19;
	case phy:: Symbol::S:
		return 2.58;
	case phy::Symbol::Cl:
		return 3.16;
	case phy::Symbol::Ar:
		return 0.0;
		
	case phy::Symbol::K:
		return 0.82;
	case phy::Symbol::Ca:
		return 1.00;
	case phy::Symbol::Sc:
		return 1.36;
	case phy::Symbol::Ti:
		return 1.54;
	case phy::Symbol::V:
		return 1.63;
	case phy::Symbol::Cr:
		return 1.66;
	case phy::Symbol::Mn:
		return 1.55;
	case phy::Symbol::Fe:
		return 1.83;
	case phy::Symbol::Co:
		return 1.88;
	case phy::Symbol::Ni:
		return 1.91;
	case phy::Symbol::Cu:
		return 1.90;
	case phy::Symbol::Zn:
		return 1.65;
	case phy::Symbol::Ga:
		return 1.81;
	case phy::Symbol::Ge:
		return 2.01;
	case phy::Symbol::As:
		return 2.18;
	case phy::Symbol::Se:
		return 2.55;
	case phy::Symbol::Br:
		return 2.96;
	case phy::Symbol::Kr:
		return 3.0;
		
	case phy::Symbol::Rb:
		return 0.82;
	case phy::Symbol::Sr:
		return 0.95;
	case phy::Symbol::Y:
		return 0.0;
	case phy::Symbol::Zr:
		return 1.22;
	case phy::Symbol::Nb:
		return 1.60;
	case phy::Symbol::Mo:
		return 2.16;
	case phy::Symbol::Tc:
		return 1.90;
	case phy::Symbol::Ru:
		return 2.20;
	case phy::Symbol::Rh:
		return 2.28;
	case phy::Symbol::Pd:
		return 2.20;
	case phy::Symbol::Ag:
		return 1.93;
	case phy::Symbol::Cd:
		return 1.69;
	case phy::Symbol::In:
		return 1.78;
	case phy::Symbol::Sn:
		return 1.96;
	case phy::Symbol::Sb:
		return 2.05;
	case phy::Symbol::Te:
		return 2.10;
	case phy::Symbol::I:
		return 2.66;
	case phy::Symbol::Xe:
		return 2.60;
				
	case phy::Symbol::Cs:
		return 0.79;		
	case phy::Symbol::Ba:
		return 0.89;
		
	case phy::Symbol::La:
		return 1.10;
	case phy::Symbol::Ce:
		return 1.12;
	case phy::Symbol::Pr:
		return 1.13;
	case phy::Symbol::Nd:
		return 1.14;
	case phy::Symbol::Pm:
		return 1.13;
	case phy::Symbol::Sm:
		return 1.17;
	case phy::Symbol::Eu:
		return 1.20;
	case phy::Symbol::Gd:
		return 1.20;
	case phy::Symbol::Tb:
		return 1.10;
	case phy::Symbol::Dy:	
		return 1.22;
	case phy::Symbol::Ho:
		return 1.23;
	case phy::Symbol::Er:	
		return 1.24;
	case phy::Symbol::Tm:
		return 1.25;
	case phy::Symbol::Yb:
		return 1.10;		
	case phy::Symbol::Lu:
		return 1.27;
		
	case phy::Symbol::Hf:	
		return 1.30;
	case phy::Symbol::Ta:	
		return 1.50;
	case phy::Symbol::W:	
		return 2.36;
	case phy::Symbol::Re:
		return 1.90;
	case phy::Symbol::Os:
		return 2.20;
	case phy::Symbol::Ir:
		return 2.20;
	case phy::Symbol::Pt:		
		return 2.28;
	case phy::Symbol::Au:
		return 2.54;
	case phy::Symbol::Hg:
		return 2.00;
	case phy::Symbol::Tl:
		return 1.62;
	case phy::Symbol::Pb:	
		return 2.33;
	case phy::Symbol::Bi:
		return 2.02;
	case phy::Symbol::Po:
		return 2.00;
	case phy::Symbol::At:
		return 2.00;
	case phy::Symbol::Rn:
		return 0.0;
		
	case phy::Symbol::Fr:	
		return 0.70;
	case phy::Symbol::Ra:	
		return 0.90;
		
	case phy::Symbol::Ac:	
		return 1.10;
	case phy::Symbol::Th:
		return 1.30;
	case phy::Symbol::Pa:
		return 1.50;
	case phy::Symbol::U:	
		return 1.38;
	case phy::Symbol::Np:	
		return 1.36;
	case phy::Symbol::Pu:
		return 1.28;
	case phy::Symbol::Am:	
		return 1.13;
	case phy::Symbol::Cm:
		return 1.28;
	case phy::Symbol::Bk:
		return 1.30;
	case phy::Symbol::Cf:	
		return 1.30;
	case phy::Symbol::Es:
		return 1.30;
	case phy::Symbol::Fm:	
		return 1.30;
	case phy::Symbol::Md:
		return 1.30;
	case phy::Symbol::No:
		return 1.30;
	case phy::Symbol::Lr:
		return 0.0;
		
	case phy::Symbol::Rf:
		return 0.0;
	case phy::Symbol::Db:
		return 0.0;
	case phy::Symbol::Sg:	
		return 0.0;
	case phy::Symbol::Bh:
		return 0.0;
	case phy::Symbol::Hs:
		return 0.0;	
	case phy::Symbol::Mt:	
		return 0.0;
	case phy::Symbol::Ds:
		return 0.0;
	case phy::Symbol::Rg:	
		return 0.0;
	case phy::Symbol::Cn:
		return 0.0;
	case phy::Symbol::Nh:	
		return 0.0;
	case phy::Symbol::Fl:
		return 0.0;
	case phy::Symbol::Mc:	
		return 0.0;
	case phy::Symbol::Lv:	
		return 0.0;
	case phy::Symbol::Ts:
		return 0.0;
	case phy::Symbol::Og:
		return 0.0;
	default:
		std::string msg = "El elemento con numero atomico '";
		msg += std::to_string(s) + "' no exite en la tabla perica(de la tierra!)";
		throw octetos::core::Exception(msg,__FILE__,__LINE__);	
	}
	
	return 0.00;
}
}

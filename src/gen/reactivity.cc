
#include <octetos/core/Error.hh>

#include "../atom.hh"

namespace oct::chem
{
//https://es.khanacademy.org/science/ap-chemistry/chemical-reactions-ap/types-of-chemical-reactions-ap/a/single-replacement-reactions
float Atom::genNegativityNumber(Symbol s)
{
	switch(s)
	{
	case Symbol::None:
		return 0.0;
		
	case Symbol::H:
		return 2.10;
	case Symbol::He:
		return 0.00;
		
	case Symbol::Li:
		return 0.98;
	case Symbol::Be:
		return 1.57;
	case Symbol::B:
		return 2.04;
	case Symbol::C:
		return 2.55;
	case Symbol::N:
		return 3.04;
	case Symbol::O:
		return 3.44;
	case Symbol::F:
		return 4.00;
	case Symbol::Ne:
		return 0.00;
		
	case Symbol::Na:
		return 0.93;
	case Symbol::Mg:
		return 1.31;		
	case Symbol::Al:
		return 1.61;
	case Symbol::Si:
		return 1.90;
	case Symbol::P:
		return 2.19;
	case Symbol::S:
		return 2.58;
	case Symbol::Cl:
		return 3.16;
	case Symbol::Ar:
		return 0.0;
		
	case Symbol::K:
		return 0.82;
	case Symbol::Ca:
		return 1.00;
	case Symbol::Sc:
		return 1.36;
	case Symbol::Ti:
		return 1.54;
	case Symbol::V:
		return 1.63;
	case Symbol::Cr:
		return 1.66;
	case Symbol::Mn:
		return 1.55;
	case Symbol::Fe:
		return 1.83;
	case Symbol::Co:
		return 1.88;
	case Symbol::Ni:
		return 1.91;
	case Symbol::Cu:
		return 1.90;
	case Symbol::Zn:
		return 1.65;
	case Symbol::Ga:
		return 1.81;
	case Symbol::Ge:
		return 2.01;
	case Symbol::As:
		return 2.18;
	case Symbol::Se:
		return 2.55;
	case Symbol::Br:
		return 2.96;
	case Symbol::Kr:
		return 3.0;
		
	case Symbol::Rb:
		return 0.82;
	case Symbol::Sr:
		return 0.95;
	case Symbol::Y:
		return 0.0;
	case Symbol::Zr:
		return 1.22;
	case Symbol::Nb:
		return 1.60;
	case Symbol::Mo:
		return 2.16;
	case Symbol::Tc:
		return 1.90;
	case Symbol::Ru:
		return 2.20;
	case Symbol::Rh:
		return 2.28;
	case Symbol::Pd:
		return 2.20;
	case Symbol::Ag:
		return 1.93;
	case Symbol::Cd:
		return 1.69;
	case Symbol::In:
		return 1.78;
	case Symbol::Sn:
		return 1.96;
	case Symbol::Sb:
		return 2.05;
	case Symbol::Te:
		return 2.10;
	case Symbol::I:
		return 2.66;
	case Symbol::Xe:
		return 2.60;
				
	case Symbol::Cs:
		return 0.79;		
	case Symbol::Ba:
		return 0.89;
		
	case Symbol::La:
		return 1.10;
	case Symbol::Ce:
		return 1.12;
	case Symbol::Pr:
		return 1.13;
	case Symbol::Nd:
		return 1.14;
	case Symbol::Pm:
		return 1.13;
	case Symbol::Sm:
		return 1.17;
	case Symbol::Eu:
		return 1.20;
	case Symbol::Gd:
		return 1.20;
	case Symbol::Tb:
		return 1.10;
	case Symbol::Dy:	
		return 1.22;
	case Symbol::Ho:
		return 1.23;
	case Symbol::Er:	
		return 1.24;
	case Symbol::Tm:
		return 1.25;
	case Symbol::Yb:
		return 1.10;		
	case Symbol::Lu:
		return 1.27;
		
	case Symbol::Hf:	
		return 1.30;
	case Symbol::Ta:	
		return 1.50;
	case Symbol::W:	
		return 2.36;
	case Symbol::Re:
		return 1.90;
	case Symbol::Os:
		return 2.20;
	case Symbol::Ir:
		return 2.20;
	case Symbol::Pt:		
		return 2.28;
	case Symbol::Au:
		return 2.54;
	case Symbol::Hg:
		return 2.00;
	case Symbol::Tl:
		return 1.62;
	case Symbol::Pb:	
		return 2.33;
	case Symbol::Bi:
		return 2.02;
	case Symbol::Po:
		return 2.00;
	case Symbol::At:
		return 2.00;
	case Symbol::Rn:
		return 0.0;
		
	case Symbol::Fr:	
		return 0.70;
	case Symbol::Ra:	
		return 0.90;
		
	case Symbol::Ac:	
		return 1.10;
	case Symbol::Th:
		return 1.30;
	case Symbol::Pa:
		return 1.50;
	case Symbol::U:	
		return 1.38;
	case Symbol::Np:	
		return 1.36;
	case Symbol::Pu:
		return 1.28;
	case Symbol::Am:	
		return 1.13;
	case Symbol::Cm:
		return 1.28;
	case Symbol::Bk:
		return 1.30;
	case Symbol::Cf:	
		return 1.30;
	case Symbol::Es:
		return 1.30;
	case Symbol::Fm:	
		return 1.30;
	case Symbol::Md:
		return 1.30;
	case Symbol::No:
		return 1.30;
	case Symbol::Lr:
		return 0.0;
		
	case Symbol::Rf:
		return 0.0;
	case Symbol::Db:
		return 0.0;
	case Symbol::Sg:	
		return 0.0;
	case Symbol::Bh:
		return 0.0;
	case Symbol::Hs:
		return 0.0;	
	case Symbol::Mt:	
		return 0.0;
	case Symbol::Ds:
		return 0.0;
	case Symbol::Rg:	
		return 0.0;
	case Symbol::Cn:
		return 0.0;
	case Symbol::Nh:	
		return 0.0;
	case Symbol::Fl:
		return 0.0;
	case Symbol::Mc:	
		return 0.0;
	case Symbol::Lv:	
		return 0.0;
	case Symbol::Ts:
		return 0.0;
	case Symbol::Og:
		return 0.0;
	default:
		std::string msg = "El elemento con numero atomico '";
		msg += std::to_string(s) + "' no exite en la tabla perica(de la tierra!)";
		throw octetos::core::Exception(msg,__FILE__,__LINE__);	
	}
	
	return 0.00;
}
}

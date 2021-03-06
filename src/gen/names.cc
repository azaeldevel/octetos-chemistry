
#include <octetos/core/Error.hh>

#include "../atom.hh"

namespace oct::chem
{
const char* Atom::genNames(phy::Symbol s)
{
	switch(s)
	{
	case Symbol::None:
		return "";
		break;
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
		return "Rubidio";
	case Symbol::Sr:
		return "Estroncio";
	case Symbol::Y:
		return "Itri";
	case Symbol::Zr:
		return "Zirconio";
	case Symbol::Nb:
		return "Niobio";
	case Symbol::Mo:
		return "Molibdeno";
	case Symbol::Tc:
		return "Tecnicio";
	case Symbol::Ru:
		return "Rutenio";
	case Symbol::Rh:
		return "Rodio";
	case Symbol::Pd:
		return "Paladio";
	case Symbol::Ag:
		return "Plata";
	case Symbol::Cd:
		return "Cadmio";
	case Symbol::In:
		return "Indio";
	case Symbol::Sn:
		return "Estano";
	case Symbol::Sb:
		return "Antimonio";
	case Symbol::Te:
		return "Teluro";
	case Symbol::I:
		return "Yodo";
	case Symbol::Xe:
		return "Xeon";
				
	case Symbol::Cs:
		return "Cesio";		
	case Symbol::Ba:
		return "Bario";
		
	case Symbol::La:
		return "Lantano";
	case Symbol::Ce:
		return "Cerio";
	case Symbol::Pr:
		return "Praseodimio";
	case Symbol::Nd:
		return "Neodimio";
	case Symbol::Pm:
		return "Prometio";
	case Symbol::Sm:
		return "Samario";
	case Symbol::Eu:
		return "Europio";
	case Symbol::Gd:
		return "Gadolinio";
	case Symbol::Tb:
		return "Terbio";
	case Symbol::Dy:	
		return "Disprosio";
	case Symbol::Ho:
		return "Holmio";
	case Symbol::Er:	
		return "Erbio";
	case Symbol::Tm:
		return "Tulio";
	case Symbol::Yb:
		return "Iterbio";
		
	case Symbol::Lu:
		return "Lutecio";
	case Symbol::Hf:	
		return "Hafnio";
	case Symbol::Ta:	
		return "Tantalio";
	case Symbol::W:	
		return "Wolframio";
	case Symbol::Re:
		return "Renio";
	case Symbol::Os:
		return "Osmio";
	case Symbol::Ir:
		return "Irdio";
	case Symbol::Pt:		
		return "Platino";
	case Symbol::Au:
		return "Oro";
	case Symbol::Hg:
		return "Mercurio";
	case Symbol::Tl:
		return "Talio";
	case Symbol::Pb:	
		return "Plomo";
	case Symbol::Bi:
		return "Bismuto";
	case Symbol::Po:
		return "Polonio";
	case Symbol::At:
		return "Astato";
	case Symbol::Rn:
		return "Radon";
	case Symbol::Fr:	
		return "Francio";
	case Symbol::Ra:	
		return "Radio";
	case Symbol::Ac:	
		return "Actinio";
	case Symbol::Th:
		return "Torio";
	case Symbol::Pa:
		return "Proctantinio";
	case Symbol::U:	
		return "Uranio";
	case Symbol::Np:	
		return "Netunio";
	case Symbol::Pu:
		return "Plutonio";
	case Symbol::Am:	
		return "Americio";
	case Symbol::Cm:
		return "Curio";
	case Symbol::Bk:
		return "Berkelio";
	case Symbol::Cf:	
		return "Californio";
	case Symbol::Es:
		return "Einstenio";
	case Symbol::Fm:	
		return "Fermio";
	case Symbol::Md:
		return "Mendelevio";
	case Symbol::No:
		return "Nobelio";
		
	case Symbol::Lr:
		return "Laurencio";
	case Symbol::Rf:
		return "Rutherfordio";
	case Symbol::Db:
		return "Dubnio";
	case Symbol::Sg:	
		return "Seaborgio";
	case Symbol::Bh:
		return "Bohrio";
	case Symbol::Hs:
		return "Hassio";	
	case Symbol::Mt:	
		return "Meitnerio";
	case Symbol::Ds:
		return "Darmstatio";
	case Symbol::Rg:	
		return "Roentgenio";
	case Symbol::Cn:
		return "Copernicio";
	case Symbol::Nh:	
		return "Nihonio";
	case Symbol::Fl:
		return "Flerovio";
	case Symbol::Mc:	
		return "Moscovio";
	case Symbol::Lv:	
		return "Livermorio";
	case Symbol::Ts:
		return "Teneso";
	case Symbol::Og:
		return "Oganes??n";
	default:
		std::string msg = "El elemento con numero atomico '";
		msg += std::to_string(s) + "' no exite en la tabla perica(de la tierra!)";
		throw octetos::core::Exception(msg,__FILE__,__LINE__);	
	}
	return NULL;
}
}

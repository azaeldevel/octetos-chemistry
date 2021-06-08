

#include <octetos/core/Error.hh>

#include "../atom.hh"

namespace oct::chem
{
	
	bool Atom::genIsMetal(phy::Symbol s)
	{
		if(s == phy::Symbol::Li) return true;
		if(s == phy::Symbol::Be) return true;
		if(s == phy::Symbol::Na) return true;
		if(s == phy::Symbol::Mg) return true;
		if(s == phy::Symbol::Al) return true;
		if(s >= phy::Symbol::K and s <= phy::Symbol::Ga) return true;
		if(s >= phy::Symbol::Rb and s <= phy::Symbol::Sn) return true;
		if(s >= phy::Symbol::Cs and s <= phy::Symbol::Bi) return true;
		if(s >= phy::Symbol::Fr and s <= phy::Symbol::Cn) return true;
		
		return false;
	}
	
	bool Atom::genIsNoMetal(phy::Symbol s)
	{
		if(s == phy::Symbol::H) return true;
		if(s == phy::Symbol::He) return true;
		if(s >= phy::Symbol::B and s <= phy::Symbol::Ne) return true;
		if(s >= phy::Symbol::Si and s <= phy::Symbol::Ar) return true;
		if(s >= phy::Symbol::Ge and s <= phy::Symbol::Kr) return true;
		if(s >= phy::Symbol::Sb and s <= phy::Symbol::Xe) return true;
		if(s >= phy::Symbol::Po and s <= phy::Symbol::Rn) return true;
		
		return false;
	}
	bool Atom::genIsGasNoble(phy::Symbol s)
	{
		switch(s)
		{
		case phy::Symbol::He:
		case phy::Symbol::Ne:
		case phy::Symbol::Ar:
		case phy::Symbol::Kr:
		case phy::Symbol::Xe:
		case phy::Symbol::Rn:
			return true;
		default:
			return false;
		}
	}
}
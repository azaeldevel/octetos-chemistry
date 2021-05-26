

#include <octetos/core/Error.hh>

#include "../atom.hh"

namespace oct::chem
{
	
	bool Atom::genIsMetal(Symbol s)
	{
		if(s == Symbol::Li) return true;
		if(s == Symbol::Be) return true;
		if(s == Symbol::Na) return true;
		if(s == Symbol::Mg) return true;
		if(s == Symbol::Al) return true;
		if(s >= Symbol::K and s <= Symbol::Ga) return true;
		if(s >= Symbol::Rb and s <= Symbol::Sn) return true;
		if(s >= Symbol::Cs and s <= Symbol::Bi) return true;
		if(s >= Symbol::Fr and s <= Symbol::Lv) return true;
		
		return false;
	}
	
	bool Atom::genIsNoMetal(Symbol s)
	{
		if(s == Symbol::H) return true;
		if(s == Symbol::He) return true;
		if(s <= Symbol::B and s <= Symbol::Ne) return true;
		if(s <= Symbol::Si and s <= Symbol::Ar) return true;
		if(s <= Symbol::Ge and s <= Symbol::Kr) return true;
		if(s <= Symbol::Sb and s <= Symbol::Xe) return true;
		if(s <= Symbol::Po and s <= Symbol::Rn) return true;
		if(s == Symbol::Ts) return true;
		if(s == Symbol::Og) return true;
		
		return false;
	}
}
#include <octetos/core//Error.hh>

#include "Molecule.hh"

namespace oct::chem
{

	void Molecule::reactionIonic(const Atom& a, const Atom& b)
	{
		if(a.isMetal() == b.isMetal())
		{
			throw octetos::core::Exception("reactionIonic deve recibir un reactivo metalico y uno no metalico.",__FILE__,__LINE__);
		}
		
		resize(2);
		if(a.isMetal()) 
		{
			at(0).atom = a;
			at(1).atom = b;
		}
		else
		{
			at(0).atom = b;
			at(1).atom = a;		
		}
		if(a.getElectronValencia() == b.getElectronValencia())
		{
			at(0).amount = 1;
			at(1).amount = 1;
		}
		else
		{
			at(0).amount = at(1).atom.getElectronValencia();
			at(1).amount = at(0).atom.getElectronValencia();
		}
	}
	
	void Molecule::reactionCovalen(const Atom& a, const Atom& b)
	{
	
	}
	
	void Molecule::reactionMetalic(const Atom& a, const Atom& b)
	{
	
	}
	
	Molecule::Molecule(const Atom& a, const Atom& b)
	{
		reaction(a,b);
	}
	void Molecule::reaction(const Atom& a, const Atom& b)
	{
		if(a.isMetal() and b.isNoMetal()) reactionIonic(a,b);
		else if(b.isMetal() and a.isNoMetal()) reactionIonic(a,b);
		else if(a.isNoMetal() and b.isNoMetal()) reactionCovalen(a,b);
		else if(a.isMetal() and b.isMetal()) reactionMetalic(a,b);				
	}
	void Molecule::printFormuleText(std::ostream& o)const
	{
		for(const Combination& c : *this)
		{
			o << std::string(c.atom.getStringSymbol());
			o << std::to_string(c.amount);
		}
	}
	
}
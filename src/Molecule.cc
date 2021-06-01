#include <octetos/core//Error.hh>

#include "Molecule.hh"

namespace oct::chem
{

	unsigned short Molecule::reactionIonic(const Atom& a,const Atom& b, std::list<Molecule*>& lsm)
	{
		if(not a.isMetal())
		{
			throw octetos::core::Exception("El primer elemento deve ser un metal.",__FILE__,__LINE__);
		}
		if(not b.isMetal())
		{
			throw octetos::core::Exception("El segundo elemento deve ser un no-metal.",__FILE__,__LINE__);
		}
		if(b.isGasNoble())
		{
			std::string msg = a.getName();
			msg += " no es reactivo(Gas Noble).";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);
		}
		
		unsigned short count = 0;
		for(valencia vcation : a.getValencias())
		{
			if(vcation > 0)
			{
				for(valencia vanion : b.getValencias())
				{
					if(vanion < 0)
					{
						short module = vcation % abs(vanion);
						if(module == 0)
						{
							Molecule* mnew = new Molecule();
							Combination cma;
							cma.atom = a;
							cma.amount = abs(vanion);
							Combination cmb;
							cmb.atom = b;
							cmb.amount = vcation;
							count++;
							lsm.push_back(mnew);
						}
					}
				}
			}
		}
		
		return count;
	}
	

	
	Molecule::Molecule()
	{
		
	}
	void Molecule::reaction(const Atom& a, const Atom& b)
	{
		//reactionIonic(a,b,*this);
	}
	void Molecule::printFormuleText(std::ostream& o)const
	{
		for(const Combination& c : *this)
		{
			o << std::string(c.atom.getStringSymbol());
			if(c.amount > 1) o << std::to_string(c.amount);
		}
	}
	
}
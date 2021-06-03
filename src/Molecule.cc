#include <octetos/core/Error.hh>

#include "Molecule.hh"

namespace oct::chem
{

	unsigned short Molecule::reactionIonic(const Atom& a,const Atom& b, std::list<Molecule*>& lsm)
	{
		if(not a.isMetal())
		{
			throw octetos::core::Exception("El primer elemento deve ser un metal.",__FILE__,__LINE__);
		}
		if(not b.isNoMetal())
		{
			throw octetos::core::Exception("El segundo elemento deve ser un no-metal.",__FILE__,__LINE__);
		}
		if(b.isGasNoble())
		{
			std::string msg = b.getName();
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
						Molecule* mnew = new Molecule(2);
						mnew->link = Link::IONIC;
						if(module == 0)
						{
							mnew->at(0).atom = a;
							mnew->at(0).amount = abs(vanion);
							mnew->at(1).atom = b;
							mnew->at(1).amount = vcation;
							count++;
							lsm.push_back(mnew);
						}
						if(vcation / abs(vanion) == 1) continue;//si es la misma valencia no repetir
						module = vanion % abs(vcation);
						mnew = new Molecule(2);
						mnew->link = Link::IONIC;
						if(module == 0)
						{
							mnew->at(0).atom = a;
							mnew->at(0).amount = abs(vanion);
							mnew->at(1).atom = b;
							mnew->at(1).amount = vcation;
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
	Molecule::Molecule(unsigned short init) : std::vector<Combination>(init)
	{
		
	}
	
	Link Molecule::getLink()const
	{
		return link;
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
	
	void Molecule::operator >> (std::ostream& o)
	{
		for(const Combination& c : *this)
		{
			o << std::string(c.atom.getStringSymbol());
			if(c.amount > 1) o << std::to_string(c.amount);
		}		
	}
	
	void Molecule::operator >> (std::string& o)
	{
		for(const Combination& c : *this)
		{
			o += std::string(c.atom.getStringSymbol());
			if(c.amount > 1) o += std::to_string(c.amount);
		}		
	}
		
}
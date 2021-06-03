#include <octetos/core/Error.hh>
#include <iostream>


#include "Molecule.hh"

namespace oct::chem
{

	const char* describe(Bond b)
	{
		switch(b)
		{
		case Bond::IONIC:
			return "Ionico";
		case Bond::COVALENTPOLAR:
			return "Covalente Polar";
		case Bond::COVALENTNOTPOLAR:
			return "Covalente no Polar";
		default:
			return "";
		}
	}










	//metal + no metal
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
		
		return reactionDo(a,b,lsm,Bond::IONIC);
	}
	unsigned short Molecule::reactionCovalentPolar(const Atom& a,const Atom& b, std::list<Molecule*>& lsm)
	{
		if(a.isNoMetal() and a.getSymbol() == b.getSymbol()) //no metal + no metal
		{
			
		}
		else if(a.isNoMetal() and b.isMetal()) //distinfos no metall
		{
		
		}
		else if(a.getSymbol() == Symbol::H and b.isNoMetal()) //no metal + H
		{
			
		}
		else
		{
			std::string msg = "Los reactivos ";
			msg += a.getName();
			msg += " y ";
			msg += b.getName();
			msg += " no son compatibles cun una enlaze covalente.";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);
		}
		
		return reactionDo(a,b,lsm,Bond::COVALENTPOLAR);
	}
	unsigned short Molecule::reactionCovalentNotPolar(const Atom& a,const Atom& b, std::list<Molecule*>& lsm)
	{
	
		if(a.isNoMetal() and a.getSymbol() == b.getSymbol()) //no metal + no metal
		{
			
		}
		else if(a.isNoMetal() and b.isMetal()) //distinfos no metall
		{
		
		}
		else if(a.getSymbol() == Symbol::H and b.isNoMetal()) //no metal + H
		{
			
		}
		else
		{
			throw octetos::core::Exception("Los reactivos no son complatibles un un enlace colante",__FILE__,__LINE__);
		}
		
		return reactionDo(a,b,lsm,Bond::COVALENTNOTPOLAR);
	}
	unsigned short Molecule::reactionDo(const Atom& a,const Atom& b, std::list<Molecule*>& lsm,Bond bond)
	{		
		if(a.getNegativityNumber() > b.getNegativityNumber())
		{
			std::string msg = a.getName();
			msg += " deve ser menos electronegativo que ";
			msg += b.getName();
			throw octetos::core::Exception(msg,__FILE__,__LINE__);
		}
		
		unsigned short count = 0;
		for(valencia vcation : a.getValencias())
		{
			if(vcation > 0)
			{
				for(valencia vanion : b.getValencias())
				{
					//verificacion de tipo de enlace
					float diff = abs(a.getNegativityNumber() - b.getNegativityNumber());
					if(diff < 0.4)
					{
						std::string msg = "No se puede realizar un enlace ";
						msg += describe(bond);
						msg += " con ";
						msg += a.getName();
						msg += " y ";
						msg += b.getName();
						if(bond != Bond::COVALENTNOTPOLAR) throw octetos::core::Exception(msg,__FILE__,__LINE__);
					}
					else if(0.4 >= diff and diff <= 1.7) 
					{
						std::string msg = "No se puede realizar un enlace ";
						msg += describe(bond);
						msg += " con ";
						msg += a.getName();
						msg += " y ";
						msg += b.getName();
						if(bond != Bond::COVALENTPOLAR) throw octetos::core::Exception(msg,__FILE__,__LINE__);						
					}
					else if(diff > 1.7)
					{
						std::string msg = "No se puede realizar un enlace ";
						msg += describe(bond);
						msg += " con ";
						msg += a.getName();
						msg += " y ";
						msg += b.getName();
						if(bond != Bond::IONIC) throw octetos::core::Exception(msg,__FILE__,__LINE__);					
					}
			
					if(vanion < 0)
					{
						short module = vcation % abs(vanion);
						Molecule* mnew = new Molecule(2);
						mnew->bond = bond;
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
						mnew->bond = bond;
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
	
	Bond Molecule::getBond()const
	{
		return bond;
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
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
	unsigned short Molecule::reactionIonic(const Atom& a,const Atom& b,List& lsm)
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
	unsigned short Molecule::reactionCovalentPolar(const Atom& a,const Atom& b,List& lsm)
	{
		if(a.isNoMetal() and a.getSymbol() == b.getSymbol()) //no metal + no metal
		{
			
		}
		else if(a.isNoMetal() and b.isNoMetal()) //distintos no metall
		{
		
		}
		else if(a.getSymbol() == phy::Symbol::H and b.isNoMetal()) //no metal + H
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
	unsigned short Molecule::reactionCovalentNotPolar(const Atom& a,const Atom& b,List& lsm)
	{
	
		if(a.isNoMetal() and a.getSymbol() == b.getSymbol()) //no metal + no metal
		{
			
		}
		else if(a.isNoMetal() and b.isNoMetal()) //distinfos no metall
		{
		
		}
		else if(a.getSymbol() == phy::Symbol::H and b.isNoMetal()) //no metal + H
		{
			
		}
		else
		{
			std::string msg = "Los reactivos ";
			msg += a.getName();
			msg += ", ";
			msg += b.getName();
			msg += " no son compatible scon un enlace covalente no polar";
			throw octetos::core::Exception(msg,__FILE__,__LINE__);
		}
		
		return reactionDo(a,b,lsm,Bond::COVALENTNOTPOLAR);
	}
	unsigned short Molecule::reactionDo(const Atom& a,const Atom& b, List& lsm,Bond bond)
	{		
		if(a.getNegativityNumber() > b.getNegativityNumber())
		{
			std::string msg = a.getName();
			msg += " deve ser menos electronegativo que ";
			msg += b.getName();
			throw octetos::core::Exception(msg,__FILE__,__LINE__);
		}
		
		unsigned short count = 0;
		for(phy::valencia vcation : a.getValencias())
		{
			std::cout << "Step 1\n";
			if(vcation > 0)
			{
				std::cout << "Step 1.1\n";
				for(phy::valencia vanion : b.getValencias())
				{
					if(vanion < 0)
					{
					std::cout << "Step 1.1.1\n";
					//verificacion de tipo de enlace
					float diff = std::abs(b.getNegativityNumber() - a.getNegativityNumber());	
					std::cout << "Step 1.1.2\n";				
					if(diff < 0.4)
					{
						std::string msg = "No se puede realizar un enlace ";
						msg += describe(bond);
						msg += " con ";
						msg += a.getName();
						msg += "(";
						msg += std::to_string(a.getNegativityNumber());
						msg += ")";
						msg += " y ";
						msg += b.getName();
						msg += "(";
						msg += std::to_string(b.getNegativityNumber());
						msg += ")";
						msg += ", ya que la electronegatividad es ";
						msg += std::to_string(diff);
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
			
					std::cout << "Step 1.1.3\n";					
											
						unsigned short avanion = std::abs(vanion);
						unsigned short div = vcation / abs(vanion);
						unsigned short module1 = vcation % avanion;
						unsigned short module2 = avanion % vcation;
						//bool ox = (b.getSymbol() == Symbol::O and vanion == -1) true : false;
						List::iterator it;
						std::cout << "Step 1.1.3.1 '" << a.getSymbol() << "'\n";
						Molecule* mnew = new Molecule(2);
						mnew->bond = bond;
						std::cout << "Step 1.1.3.2\n";
						if(bond == Bond::COVALENTNOTPOLAR and a.getSymbol() == b.getSymbol())
						{
							std::cout << "Step 1.1.3.1.1\n";
							mnew->at(0).atom = a;
							mnew->at(0).amount = vcation;//TODO: Que pasa con distintas valecias?
							mnew->resize(1);
							count++;std::string strmol;
							(*mnew) >> strmol;
							it = lsm.find(strmol);
							if(it == lsm.end())
							{
								std::cout << "Step 1.1.3.1.2\n";
								lsm.insert(Element(strmol,mnew));
							}
							else
							{
								delete mnew;
							}
							continue;
						}

						std::cout << "Step 1.1.3.3\n";
						mnew->at(0).atom = a;
						std::cout << "Step 1.1.3.4\n";
						mnew->at(1).atom = b;
						if( module1 == 0 and div == 1)
						{
							mnew->at(0).amount = 1;
							mnew->at(1).amount = 1;							
						}
						else if( module1 == 0 and avanion == 2 * vcation)
						{
							mnew->at(0).amount = avanion/2;
							mnew->at(1).amount = vcation/2;							
						}
						else if( module1 == 0 and avanion == 3 * vcation)
						{
							mnew->at(0).amount = avanion/3;
							mnew->at(1).amount = vcation/3;							
						}
						else
						{
							mnew->at(0).amount = avanion;
							mnew->at(1).amount = vcation;
						}
						count++;
						std::string strmol;
						(*mnew) >> strmol;
						it = lsm.find(strmol);
						if(it == lsm.end())
						{							
							lsm.insert(Element(strmol,mnew));
						}
						else
						{
							delete mnew;
						}

						/*if(module1 == 0 and div == 1) continue;//si es la misma valencia no repetir
						//module = vanion % abs(vcation);
						mnew = new Molecule(2);
						mnew->bond = bond;
						//if(module == 0)
						{
							mnew->at(0).atom = a;
							mnew->at(1).atom = b;
							mnew->at(0).amount = avanion;
							mnew->at(1).amount = vcation;
							count++;
							lsm.push_back(mnew);
						}*/
					}
					
					std::cout << "Step 1.1.4\n";
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

#ifndef OCTETOS_CHEMISTRY_ATOM_HH
#define OCTETOS_CHEMISTRY_ATOM_HH


#include <octetos/physical/Atom.hh>
#include <vector>



namespace oct::chem
{


class Atom : public oct::phy::Atom
{
public:
	Atom();
	Atom(phy::Symbol);
	Atom(phy::AtomicNumber);

	//const phy::Valencias& getValencias()const;
	float getNegativityNumber()const;//escala de pauling
	//const phy::QuantumNumber& getQuantumNumber();

	void set(phy::Symbol);
	void set(phy::AtomicNumber);

	bool isMetal()const;
	bool isNoMetal()const;
	bool isGasNoble()const;
	
	static void genQuantumNumber(phy::Symbol,phy::QuantumNumber&);
	static bool genIsMetal(phy::Symbol);
	static bool genIsNoMetal(phy::Symbol);
	static bool genIsGasNoble(phy::Symbol);
	static bool genValencias(phy::Symbol,phy::Valencias&);
	static float genNegativityNumber(phy::Symbol);

protected:
};

class Table : public std::vector<Atom*>
{
public:
	Table();
	~Table();
};
class Metales : public std::vector<Atom*>
{
public:
	Metales(Table&);
};
class NoMetales : public std::vector<Atom*>
{
public:
	NoMetales(Table&);
};

}

#endif
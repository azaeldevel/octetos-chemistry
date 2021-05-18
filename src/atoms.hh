
#ifndef OCTETOS_CHEMISTRY_ATOM_HH
#define OCTETOS_CHEMISTRY_ATOM_HH


#include <string>
#include <vector>



namespace oct::chemistry
{

typedef unsigned short AtomicNumber;
enum Symbol
{
	None,
	H,
	He,
	Li,
	Be,
	B,
	C,
	O,
	N,
	F,
	Ne,
	Na,
	Mg,
	Al,
	Si,
	P,
	S,
	Cl,
	Ar,
	K,
	Ca,
	Sc,
	Ti,
	V,
	Cr,
	Mn,
	Fe,
	Co,
	Ni,
	Cu,
	Zn,
	Ga,
	Ge,
	As,
	Se,
	Br,
	Kr,
	Rb,
	Sr,
	Y,
	Zr,
	Nb,
	Mo,
	Tc,
	Ru,
	Rh,
	Pd,
	Ag,
	Cd,
	In,
	Sn,
	Sb,
	Te,
	I,
	Xe,
	Cs,
	Ba,
	La,
	Ce,
	Pr,
	Nd,
	Pm,
	Sm,
	Eu,
	Gd,
	Tb,
	Dy,
	Ho,
	Er,
	Tm,
	Yb,
	Lu,
	Hf,
	Ta,
	W,
	Re,
	Os,
	Ir,
	Pt,
	Au,
	Hg,
	Tl,
	Pb,
	Bi,
	Po,
	At,
	Rn
};
enum Sublevel
{
	s,
	p,
	d,
	f,
	g,
	h
};
struct LevelAtomic
{
	Sublevel sublevel;
	unsigned short numer;
};

class Atom
{
public:
	Atom(Symbol);
	Atom(AtomicNumber);

	AtomicNumber getAtomicNumber()const;
	Symbol getSymbol()const;
	const char* getName(Symbol);
	const char* getStringSymbol(Symbol);
	const std::vector<LevelAtomic>& getorbital();
	
	//numeros cuanticos
	unsigned short getN()const;
	void* getL()const;
	float getS()const;

	static AtomicNumber genAtomicNumber(Symbol);
	static Symbol genSymbol(AtomicNumber);
	static const char* genName(Symbol);
	static const char* genStringSymbol(Symbol);
	static bool genOrbitals(std::vector<LevelAtomic>&);

private:
	//pameter load
	Symbol symbol;
	AtomicNumber atomicnumber;
	//automict load	
	const char* name;
	const char* strSymbol;
	LevelAtomic lastOrbital;
	//demand load
	std::vector<LevelAtomic> orbitals;
};

}

#endif

#ifndef OCTETOS_CHEMISTRY_ATOM_HH
#define OCTETOS_CHEMISTRY_ATOM_HH


#include <string>
#include <vector>



namespace oct::chem
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
	N,
	O,
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
	Rn,
	Fr,
	Ra,
	Ac,
	Th,
	Pa,
	U,
	Np,
	Pu,
	Am,
	Cm,
	Bk,
	Cf,
	Es,
	Fm,
	Md,
	No
};
enum Suborbital
{
	s,
	p,
	d,
	f
};

struct Orbital
{
	unsigned short main;
	Suborbital orbital;//tipode orbital
	unsigned short electron;//electrones en el orbital
};

struct QuantumNumber : std::vector<Orbital>
{
	operator std::string() const;
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
	const QuantumNumber& getQuantumNumber();
	
	static AtomicNumber genAtomicNumber(Symbol);
	static Symbol genSymbol(AtomicNumber);
	static const char* genName(Symbol);
	static const char* genStringSymbol(Symbol);
	static bool genQuantumNumber(Symbol,QuantumNumber&);

private:
	//pameter load
	Symbol symbol;
	//automict load	
	const char* name;
	const char* strSymbol;
	//demand load
	QuantumNumber qnumber;
};

}

#endif
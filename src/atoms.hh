
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
enum Orbital
{
	s,
	p,
	d,
	f
};

struct QuantumNumber
{
	unsigned short main;
	Orbital orbital;//tipode orbital
	unsigned short amount;//electrones en el orbital
	
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
	const std::vector<QuantumNumber>& getQuantumNumber();
	
	static AtomicNumber genAtomicNumber(Symbol);
	static Symbol genSymbol(AtomicNumber);
	static const char* genName(Symbol);
	static const char* genStringSymbol(Symbol);
	static bool genOrbitals(Symbol,std::vector<QuantumNumber>&);

private:
	//pameter load
	Symbol symbol;
	//automict load	
	const char* name;
	const char* strSymbol;
	//demand load
	std::vector<QuantumNumber> qnumber;
};

}

#endif


#ifndef OCTETOS_CHEMISTRY_MOLECULE_HH
#define OCTETOS_CHEMISTRY_MOLECULE_HH

#include <list>


#include "atom.hh"


namespace oct::chem
{
	enum Bond
	{
		IONIC,
		COVALENT
	};
	struct Combination
	{
		Atom atom;
		unsigned short amount;
	};
	class Molecule : public std::vector<Combination>
	{
	public:
		Molecule();
		Molecule(unsigned short initAtoms);
		Bond getBond()const;

		void reaction(const Atom& a, const Atom& b);
		void printFormuleText(std::ostream&)const;

		void operator >> (std::ostream&);
		void operator >> (std::string&);

		static unsigned short reactionIonic(const Atom& a, const Atom& b,std::list<Molecule*>& lsm);
		static unsigned short reactionCovalent(const Atom& a, const Atom& b,std::list<Molecule*>& lsm);
	private:
		Bond bond;

	};

}

#endif

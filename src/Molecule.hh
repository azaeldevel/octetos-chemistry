

#ifndef OCTETOS_CHEMISTRY_MOLECULE_HH
#define OCTETOS_CHEMISTRY_MOLECULE_HH

#include <list>


#include "atom.hh"


namespace oct::chem
{
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

		void reaction(const Atom& a, const Atom& b);
		void printFormuleText(std::ostream&)const;

		static unsigned short reactionIonic(const Atom& a, const Atom& b,std::list<Molecule*>& lsm);
	private:
		void reactionCovalen(const Atom& a, const Atom& b);
		void reactionMetalic(const Atom& a, const Atom& b);
	};

}

#endif



#ifndef OCTETOS_CHEMISTRY_MOLECULE_HH
#define OCTETOS_CHEMISTRY_MOLECULE_HH

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
		Molecule(const Atom& a, const Atom& b);

		void reaction(const Atom& a, const Atom& b);
		void printFormuleText(std::ostream&)const;

	private:
		void reactionIonic(const Atom& a, const Atom& b);
		void reactionCovalen(const Atom& a, const Atom& b);
		void reactionMetalic(const Atom& a, const Atom& b);
	};

}

#endif

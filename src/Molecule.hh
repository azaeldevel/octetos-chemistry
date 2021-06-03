

#ifndef OCTETOS_CHEMISTRY_MOLECULE_HH
#define OCTETOS_CHEMISTRY_MOLECULE_HH

#include <list>


#include "atom.hh"


namespace oct::chem
{
	enum Link
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
		Link getLink()const;

		void reaction(const Atom& a, const Atom& b);
		void printFormuleText(std::ostream&)const;

		void operator >> (std::ostream&);
		void operator >> (std::string&);

		static unsigned short reactionIonic(const Atom& a, const Atom& b,std::list<Molecule*>& lsm);
	private:
		void reactionCovalen(const Atom& a, const Atom& b);
		void reactionMetalic(const Atom& a, const Atom& b);
		Link link;

	};

}

#endif

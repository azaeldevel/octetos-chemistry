

#ifndef OCTETOS_CHEMISTRY_MOLECULE_HH
#define OCTETOS_CHEMISTRY_MOLECULE_HH

#include <map>


#include "atom.hh"


namespace oct::chem
{
	enum Bond
	{
		NOTBOUND,
		IONIC,
		COVALENTPOLAR,
		COVALENTNOTPOLAR
	};

	const char* describe(Bond);
	struct Combination
	{
		Atom atom;
		unsigned short amount;
	};
	class Molecule : public std::vector<Combination>
	{
	public:
		typedef std::map<std::string,oct::chem::Molecule*> List;
		typedef std::pair<std::string,oct::chem::Molecule*> Element;
	public:
		Molecule();
		Molecule(unsigned short initAtoms);
		Bond getBond()const;


		void operator >> (std::ostream&);
		void operator >> (std::string&);

		static unsigned short reactionIonic(const Atom& a, const Atom& b,List& lsm);
		static unsigned short reactionCovalentPolar(const Atom& a, const Atom& b,List& lsm);
		static unsigned short reactionCovalentNotPolar(const Atom& a, const Atom& b,List& lsm);
		
	private:
		Bond bond;

		static unsigned short reactionDo(const Atom& a, const Atom& b,List& lsm,Bond);
	};

}

#endif

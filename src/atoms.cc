
#include "atoms.hh"

namespace oct::chem
{


Atom::Atom(Symbol s) : symbol(s)
{

}
Atom::Atom(AtomicNumber n) : symbol((Symbol)n)
{

}


}
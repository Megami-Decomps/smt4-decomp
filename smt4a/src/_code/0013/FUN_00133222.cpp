#include "stl/AsdAllocator.h"
#include <vector>
#include "stl/MacroMax.h"

/* A 24-byte element of one of the engine's vectors. */
struct Elem24 {
    u32 words[6];
};

typedef std::vector<Elem24, AsdAllocator<Elem24> > Elem24Vector;

/* std::vector<Elem24>::_C_insert_aux(position, value): inserts one element, growing the storage when it is full. */
template void Elem24Vector::_C_insert_aux(Elem24Vector::iterator, const Elem24 &);

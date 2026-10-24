/* NON_MATCHING: retail keeps size/capacity/new_capacity/max/uninitialized_copy/destroy as calls; armcc inlines them here (unit also needs its mangled name) */
#include "stl/AsdAllocator.h"
#include <vector>

/* A 40-byte element of one of the engine's vectors. */
struct Elem40 {
    u32 words[10];
};

typedef std::vector<Elem40, AsdAllocator<Elem40> > Elem40Vector;

/* std::vector<Elem40>::operator=: reuses the storage when the source fits, otherwise reallocates. */
template Elem40Vector &Elem40Vector::operator=(const Elem40Vector &);

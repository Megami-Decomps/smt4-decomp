/* NON_MATCHING: retail keeps size/capacity/new_capacity/max/uninitialized_copy/copy as calls; armcc inlines them here (unit also needs its mangled name) */
#include "stl/AsdAllocator.h"
#include <vector>

/* A 12-byte element of one of the engine's vectors. */
struct Elem12 {
    u32 words[3];
};

typedef std::vector<Elem12, AsdAllocator<Elem12> > Elem12Vector;

/* std::vector<Elem12>::operator=: reuses the storage when the source fits, otherwise reallocates. */
template Elem12Vector &Elem12Vector::operator=(const Elem12Vector &);

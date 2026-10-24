/* NON_MATCHING: retail keeps size/capacity/new_capacity/max/uninitialized_copy/copy as calls; armcc inlines them here (unit also needs its mangled name _ZNSt6vectorIPv12AsdAllocatorIS0_EEaSERKS3_) */
#include "stl/AsdAllocator.h"
#include <vector>
#include "stl/MacroMax.h"

typedef std::vector<void *, AsdAllocator<void *> > PointerVector;

/* std::vector<void *>::operator=: reuses the storage when the source fits, otherwise reallocates. */
template PointerVector &PointerVector::operator=(const PointerVector &);

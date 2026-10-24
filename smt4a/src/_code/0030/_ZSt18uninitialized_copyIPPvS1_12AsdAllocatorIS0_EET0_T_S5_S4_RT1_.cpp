#include "stl/AsdAllocator.h"
#include <vector>

template class std::vector<void *, AsdAllocator<void *> >;

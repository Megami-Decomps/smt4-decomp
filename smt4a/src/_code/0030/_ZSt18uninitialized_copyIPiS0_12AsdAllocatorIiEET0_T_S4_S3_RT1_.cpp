#include "stl/AsdAllocator.h"
#include <vector>

template class std::vector<int, AsdAllocator<int> >;

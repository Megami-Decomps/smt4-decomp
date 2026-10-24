/* std::remove_copy instantiation for int (Rogue Wave STL). */
#include "common.h"
#include <algorithm>

template int *std::remove_copy(int *, int *, int *, const int &);

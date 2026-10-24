#ifndef STL_OUTOFLINEMAX_H
#define STL_OUTOFLINEMAX_H

#include "common.h"
#include <algorithm>

namespace std {
/* The game's library keeps std::max<unsigned int> out of line (retail calls one shared copy), unlike this compiler's inline header definition. */
template <>
const u32 &max<u32>(const u32 &, const u32 &);
}

#endif

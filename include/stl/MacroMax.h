#ifndef STL_MACROMAX_H
#define STL_MACROMAX_H

#include <algorithm>

/* Some of the game's translation units see `max` as a function-like macro when the STL's .cc files are read:
 * retail's inline vector growth re-evaluates both operands instead of calling std::max. Include after the STL headers. */
#define max(a, b) (((a) > (b)) ? (a) : (b))

#endif

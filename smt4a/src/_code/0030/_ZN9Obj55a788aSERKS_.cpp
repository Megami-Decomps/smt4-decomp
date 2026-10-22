/* NON_MATCHING: the out-of-line descriptor operation preserves this in r4 rather than retail's caller-saved r3. */
#include "classes/Obj55a788.h"

extern "C" void FUN_0011fdd8(Obj55a788 *destination, const Obj55a788 *source);

/* Applies the descriptor's existing value-copy operation. */
Obj55a788 &Obj55a788::operator=(const Obj55a788 &other)
{
    FUN_0011fdd8(this, &other);
    return *this;
}

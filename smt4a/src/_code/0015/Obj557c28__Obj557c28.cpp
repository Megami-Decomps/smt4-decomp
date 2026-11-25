#include "classes/Obj557c28.h"

extern "C" Obj557c28 *DAT_0056fcbc;

/* Initializes the binding caches; the first instance reserves the shared default shader slots. */
Obj557c28::Obj557c28() : state()
{
    if (DAT_0056fcbc == NULL) {
        first.firstSlot = 0x56;
        first.secondSlot = 0x59;
        second.firstSlot = 0x5a;
        second.secondSlot = 0x5c;
        DAT_0056fcbc = this;
    }
}

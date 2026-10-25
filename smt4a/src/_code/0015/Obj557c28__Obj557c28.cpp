/* NON_MATCHING: native model-command owner construction has not yet been matched. */
#include "classes/Obj557c28.h"

extern "C" Obj557c28 *DAT_0056fcbc;

// Initialize binding caches; the first instance reserves the shared default shader slots.
Obj557c28::Obj557c28() : unk9c(0), unkA0(0), unkA4(0), listA(NULL), listB(NULL)
{
    first.first = 0;
    first.mode = 2;
    first.firstSlot = 0xff;
    first.secondSlot = 0xff;
    first.value = 0;
    second.first = 0;
    second.mode = 2;
    second.firstSlot = 0xff;
    second.secondSlot = 0xff;
    second.value = 0;
    if (DAT_0056fcbc == NULL) {
        first.firstSlot = 0x56;
        first.secondSlot = 0x59;
        second.firstSlot = 0x5a;
        second.secondSlot = 0x5c;
        DAT_0056fcbc = this;
    }
}

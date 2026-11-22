/* NON_MATCHING: the stores match (the binding caches construct themselves); remaining: retail holds the vtable in r1 and
 * the zero in r2 (built: r2/r1, the first zero store ahead of the vtable's) and loads DAT_0056fcbc's address before the
 * second cache's stores. */
#include "classes/Obj557c28.h"

extern "C" Obj557c28 *DAT_0056fcbc;

/* Initializes the binding caches; the first instance reserves the shared default shader slots. */
Obj557c28::Obj557c28() : unk9c(0), unkA0(0), unkA4(0), listA(NULL), listB(NULL)
{
    if (DAT_0056fcbc == NULL) {
        first.firstSlot = 0x56;
        first.secondSlot = 0x59;
        second.firstSlot = 0x5a;
        second.secondSlot = 0x5c;
        DAT_0056fcbc = this;
    }
}

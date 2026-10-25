#include "classes/WindowStatus.h"
#include "shard/FUN_00233fcc.h"
#include <new>

extern "C" void *asdOperatorNew(u32);

/* Construct the requested concrete status operation. */
extern "C" Obj42217c *FUN_00233fcc(u32 unused, u32 kind)
{
    /* Two concrete classes keep an opaque trailing word beyond their shared prefixes. */
    switch (kind) {
    case 0:
        return new (asdOperatorNew(sizeof(Obj422278))) Obj422278;
    case 1:
        return new (asdOperatorNew(0x1C)) Obj422248;
    case 2:
        return new (asdOperatorNew(sizeof(Obj4221fc))) Obj4221fc;
    case 3:
        return new (asdOperatorNew(sizeof(Obj4221bc))) Obj4221bc;
    case 4:
        return new (asdOperatorNew(sizeof(Obj422230))) Obj422230;
    case 5:
        return new (asdOperatorNew(sizeof(Obj4221e4))) Obj4221e4;
    case 6:
        return new (asdOperatorNew(0x1C)) Obj422290;
    case 7:
        return new (asdOperatorNew(sizeof(Obj422260))) Obj422260;
    default:
        return NULL;
    }
}

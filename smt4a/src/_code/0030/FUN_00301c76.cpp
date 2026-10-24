#include "common.h"

extern "C" {

u8 *_ZN16Obj55a87cPayloadC1ERKS_(u8 *dest, u8 *source);

/* Copy constructor: copies the leading byte and the derived part at 8; returns the address that part's constructor hands back minus 8. */
u8 *FUN_00301c76(u8 *dest, u8 *source)
{
    u8 *part;

    *dest = *source;
    part = _ZN16Obj55a87cPayloadC1ERKS_(dest + 8, source + 8);
    return part - 8;
}

} /* extern "C" */

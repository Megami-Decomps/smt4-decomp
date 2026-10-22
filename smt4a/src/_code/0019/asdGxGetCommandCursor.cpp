#include "common.h"


extern "C" {
/* Reads or updates the current object state. */
void gxGetCommandListParameter(u32 parameter, u32 *value);
u32 asdGxGetCommandCursor(void)
{
    u32 cursor;
    gxGetCommandListParameter(0x208, &cursor);
    return cursor;
}
}

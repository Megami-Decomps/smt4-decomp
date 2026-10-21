#include "common.h"

namespace { struct CursorState { u32 begin; u32 count; }; }

extern "C" {
/* Reads or updates the requested state. */
extern CursorState DAT_004729e0;
void FUN_002bc7f4(u32 parameter, u32 *value);
void cursorResetFromParam(void)
{
    u32 cursor;
    FUN_002bc7f4(0x208, &cursor);
    DAT_004729e0.begin = cursor;
    DAT_004729e0.count = 0;
}
}

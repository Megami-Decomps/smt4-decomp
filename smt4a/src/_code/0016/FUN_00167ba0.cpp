#include "common.h"

namespace { struct CursorState { u32 begin; u32 count; }; }

extern "C" {
/* Reads or updates the requested state. */
extern CursorState DAT_005b3fe4;
void FUN_0017d920(u32 parameter, u32 *value);
void FUN_00167ba0(void)
{
    u32 cursor;
    FUN_0017d920(0x208, &cursor);
    DAT_005b3fe4.begin = cursor;
    DAT_005b3fe4.count = 0;
}
}

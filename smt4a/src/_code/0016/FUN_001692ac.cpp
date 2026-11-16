#include "common.h"


extern "C" {
/* Packs `value` (shifted up by 4, bit 0 set unless it is 1) with the 0xf00 bits and, when `enabled`, 0x1000. */
u32 FUN_001692ac(u32 value, bool enabled)
{
    u32 notOne = 1;
    if (value == 1) {
        notOne = 0;
    }
    return (notOne | (value << 4)) | (enabled ? 0x1000 : 0) | 0xf00;
}
}

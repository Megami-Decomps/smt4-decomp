/* NON_MATCHING: compiler fuses the status tests into a mask; retail retains individual short-circuit tests. */
#include "common.h"

extern "C" {
// Report whether any of the selected status bits is present.
s32 FUN_004c1480(u32 flags)
{
    if ((flags & 0x2) != 0 || (flags & 0x20) != 0 ||
        (flags & 0x40) != 0 || (flags & 0x80) != 0 ||
        (flags & 0x100) != 0 || (flags & 0x200) != 0 ||
        (flags & 0x400) != 0 || (flags & 0x8) != 0 ||
        (flags & 0x800) != 0 || (flags & 0x1000) != 0 ||
        (flags & 0x2000) != 0) {
        return 1;
    }
    return 0;
}
}

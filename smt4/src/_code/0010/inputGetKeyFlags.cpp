#include "common.h"

extern "C" {

typedef struct KeyTable {
    /* 0x0 */ const u8 *flags;
} KeyTable;

KeyTable *FUN_002c6a50(void);

/* Built with --cpu=5TE -Ospace (see flags_Match4.txt). Derives a key's combined flag word from its raw table byte (the table has 256 entries; others give 0):
 * the extra bits 0x400-0x1000 and 0x80 are computed from the raw bits, 0x20 is cleared when 0x80 isn't set. */
u32 inputGetKeyFlags(u32 key)
{
    u32 flags;

    if (key > 0xFF) {
        return 0;
    }
    flags = FUN_002c6a50()->flags[key];
    if ((flags & 0x98) != 0 && (flags & 0x01) == 0) {
        flags |= 0x400;
    }
    if ((flags & 0x420) != 0) {
        flags |= 0x800;
    }
    if ((flags & 0xBA) != 0) {
        flags |= 0x100;
    }
    if ((flags & 0xBE) != 0) {
        flags |= 0x200;
    }
    if ((flags & 0x20) != 0 && (flags & 0x80) == 0) {
        flags |= 0x80;
    } else {
        flags &= ~0x20;
    }
    if (((flags & 0x01) != 0 && (flags & 0x40) == 0) || key == 9) {
        flags |= 0x1000;
    }
    return flags;
}

} /* extern "C" */

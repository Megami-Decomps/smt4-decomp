#include "common.h"

struct EligibleEntry {
    /* 0x000 */ u8 unk000[0x60];
    /* 0x060 */ u16 status;
    /* 0x062 */ u8 unk062[0xce];
    /* 0x130 */ u32 flags;
};

// Require a present entry with none of the six excluded status bits.
extern "C" u32 FUN_003e4d98(const EligibleEntry* entry)
{
    if (entry == NULL || (entry->flags & 1) == 0)
        return 0;
    u16 status = entry->status;
    if ((status & 2) != 0)
        return 0;
    if ((status & 0x400) != 0)
        return 0;
    if ((status & 4) != 0)
        return 0;
    if ((status & 0x40) != 0)
        return 0;
    if ((status & 0x80) != 0)
        return 0;
    if ((status & 0x100) != 0)
        return 0;
    return 1;
}

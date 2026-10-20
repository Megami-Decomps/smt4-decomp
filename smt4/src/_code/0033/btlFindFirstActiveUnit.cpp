#include "common.h"

extern "C" {

typedef struct BtlUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x284];
} BtlUnit;

typedef struct BtlMain {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BtlUnit *units;
} BtlMain;

/* First active, present, visible unit among units 4-0x35, or NULL. */
BtlUnit *btlFindFirstActiveUnit(BtlMain *btl)
{
    int i = 4;
    BtlUnit *unit;
    u32 flags;

    while (1) {
        unit = btl->units + i;
        flags = unit->flags;
        if ((((flags & 1) != 0) && ((flags & 0x40) == 0)) && ((flags & 0x10) != 0)) {
            break;
        }
        i = i + 1;
        if (i >= 0x36) {
            return NULL;
        }
    }
    return unit;
}

} /* extern "C" */

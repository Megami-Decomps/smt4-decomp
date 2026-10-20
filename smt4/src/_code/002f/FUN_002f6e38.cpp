#include "common.h"

extern "C" {

int scrSetResult(int result);
extern int FUN_00247004(void *unit);
extern u8 *btlGetMainState(void);

typedef struct BtlUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x284];
} BtlUnit;

/* Script command: result 1 when any of the 0x6D units is active (0x10), present (1), not hidden (0x40) and accepted by FUN_00247004. */
u32 FUN_002f6e38(void)
{
    int i = 0;
    u8 *btl;
    BtlUnit *unit;
    u32 flags;

    while (1) {
        btl = btlGetMainState();
        unit = *(BtlUnit **)(btl + 0x1fc0) + i;
        flags = unit->flags;
        if ((((flags & 0x10) != 0 && (flags & 1) != 0) && ((flags & 0x40) == 0)) &&
            (FUN_00247004(unit) != 0)) {
            break;
        }
        i = i + 1;
        if (i >= 0x6d) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */

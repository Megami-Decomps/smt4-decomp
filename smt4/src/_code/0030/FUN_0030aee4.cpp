/* NON_MATCHING: register choice only: retail loads the unit id into r1 (the flags register), this build reuses r0 */
#include "common.h"

extern "C" {

typedef struct Unit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0xCA];
    /* 0x0CE */ u16 id;
    /* 0x0D0 */ u8 unk0d0[0x1B8];
} Unit; /* 0x288 */

typedef struct BtlMainState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ Unit *units;
} BtlMainState;

extern BtlMainState *btlGetMainState(void);
extern u32 scrGetArg(u32 index);
extern s32 FUN_00247004(void);
extern void scrSetResult(s32 value);

/* Script command: pushes whether an active, visible unit with the id given as argument 0 exists and FUN_00247004 holds; returns 1. */
u32 FUN_0030aee4(void)
{
    u32 id = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        Unit *unit = &btlGetMainState()->units[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 && unit->id == id &&
            FUN_00247004() != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */

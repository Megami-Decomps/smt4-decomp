/* NON_MATCHING: retail returns 1 before the read-modify-write and keeps the flag address in r1. */
#include "common.h"

struct BattleFlags {
    /* 0x0000 */ u8 unk0000[0x44a0];
    /* 0x44A0 */ u32 flags;
};

extern "C" {

BattleFlags *btlGetMainState(void);

/* Script command: sets bit 17 of the battle's flag word at 0x44A0. */
u32 FUN_00323398(void)
{
    u32 *flags = &btlGetMainState()->flags;

    *flags |= 0x20000;
    return 1;
}

} /* extern "C" */

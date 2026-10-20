/* NON_MATCHING: register choice only: retail materialises the constant 1 once in r7 (shift base, then reused as the return value `mov r0, r7`); the build uses r1 for the shift and `mov r0, #1` for the returns. */
#include "common.h"

extern "C" {

typedef struct BtlUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0xCA];
    /* 0x0CE */ u16 id;
    /* 0x0D0 */ u8 unk0D0[0xF6];
    /* 0x1C6 */ u16 mask;
    /* 0x1C8 */ u8 unk1C8[0xC0];
} BtlUnit;                              /* 0x288 bytes */

typedef struct BtlMain {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BtlUnit *units;
} BtlMain;

extern BtlMain *btlGetMainState(void);
extern u32 scrGetArg(u32 index);
extern int scrSetResult(int value);

/* Script command: pushes whether a live unit with id argument 0 has bit argument 1 set in its mask. */
u32 FUN_002fede0(void)
{
    u32 id = scrGetArg(0);
    u32 bit = scrGetArg(1);
    int i;

    for (i = 0; i < 109; i++) {
        BtlUnit *unit = &btlGetMainState()->units[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0
            && unit->id == id && (unit->mask & (1 << bit)) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */

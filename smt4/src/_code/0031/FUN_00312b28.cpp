#include "common.h"

extern "C" {

typedef struct BtlMainState {
    /* 0x0000 */ u8 unk0000[0xF2];
    /* 0x00F2 */ u16 devilId;
    /* 0x00F4 */ u8 unk00f4[0x43AC];
    /* 0x44A0 */ u32 flags;
} BtlMainState;

extern BtlMainState *btlGetMainState(void);
extern void *devilGetRecord(u32 id);
extern void FUN_00295228(u32 id, s32 arg);

/* Script command: when the battle is not flagged 2 and its devil has a record, calls FUN_00295228 for it with 3; returns 1. */
u32 FUN_00312b28(void)
{
    BtlMainState *state = btlGetMainState();

    if ((state->flags & 2) == 0) {
        u32 devilId = state->devilId;

        if (devilId != 0 && devilGetRecord(devilId) != NULL) {
            FUN_00295228(devilId, 3);
        }
    }
    return 1;
}

} /* extern "C" */

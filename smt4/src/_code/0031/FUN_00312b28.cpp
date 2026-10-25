#include "common.h"
#include "battle/BtlMainAccess.h"

extern "C" {

extern void *devilGetRecord(u32 id);
extern void devilCreateRaceEffect(u32 id, s32 arg);

/* Script command: when the battle is not flagged 2 and its devil has a record, calls devilCreateRaceEffect for it with 3; returns 1. */
u32 FUN_00312b28(void)
{
    BtlMainState *state = btlGetMainState();

    if ((state->battleFlags & 2) == 0) {
        u32 devilId = state->devil.devilId;

        if (devilId != 0 && devilGetRecord(devilId) != NULL) {
            devilCreateRaceEffect(devilId, 3);
        }
    }
    return 1;
}

} /* extern "C" */

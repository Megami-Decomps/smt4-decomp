/* NON_MATCHING: loop, roster flag test and the always-1 result match retail; retail also copies the unused second argument (r1) into r6 before the loop, which only shifts register numbers. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {

/* Scans the roster records past the fixed party slots for the active flag; the result is 1 either way. */
u32 FUN_004f90e0(u32 unused, u32 ignored)
{
    u32 result = 1;
    for (s32 i = 0; i < 109; i++) {
        if (i >= 4) {
            if ((btlGetMainState()->roster[i].liveFlags.unk50 & 1) != 0) {
                result = 1;
            }
        }
    }
    return result;
}

} /* extern "C" */

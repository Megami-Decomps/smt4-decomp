#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/btlRosterGroupAllInactive.h"

extern "C" {

// Return 1 when no roster record of the given group (0-3) is active and eligible.
u32 btlRosterGroupAllInactive(BtlMainStateA *state, s32 group)
{
    s32 first = 0;
    s32 count = 0;
    if (group == 0) {
        count = 4;
    } else if (group == 1) {
        first = 4;
        count = 50;
    } else if (group == 2) {
        first = 54;
        count = 1;
    } else if (group == 3) {
        first = 67;
        count = 42;
    }
    for (s32 i = first; i < first + count; i++) {
        BattleRosterRecordA *record = &state->roster[i];
        if ((record->liveFlags.unk50 & 1) && (record->liveFlags.unk50 & 0x80) &&
            !(record->liveFlags.unk50 & 2) && !(record->liveFlags.unk58 & 4)) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */

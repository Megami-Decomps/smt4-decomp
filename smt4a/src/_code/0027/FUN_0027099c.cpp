/* NON_MATCHING: armcc folds the zero percentage into the comparisons and needs three saved registers fewer; retail keeps percent, count, total and the index in r4-r7. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
BtlMainStateA *btlGetMainState();
void *FUN_001568f8(BtlMainStateA *battle, s32 group);

/* Rates the share of live, flagged roster records against the battle's total: 5 when there is no
 * battle or group or the share is at least 70%, 4 from 40%, else 3. */
u32 FUN_0027099c(void)
{
    if (btlGetMainState() != NULL) {
        s16 group = btlGetMainState()->motionGroup.group;

        if (FUN_001568f8(btlGetMainState(), group) != NULL) {
            s32 percent = 0;
            s16 total = btlGetMainState()->unk1EC0;
            s32 count = 0;

            for (s32 i = 0; i < 109; i++) {
                BattleRosterRecordA *record = &btlGetMainState()->roster[i];
                u32 flags = record->liveFlags.unk50;
                if ((flags & 1) != 0 && (flags & 2) != 0 && (flags & 0x10) != 0 &&
                    (record->liveFlags.unk10C & 2) == 0) {
                    count++;
                }
            }
            if (total != 0) {
                percent = count * 100 / total;
                if (percent >= 70) {
                    return 5;
                }
            }
            if (percent < 40) {
                return 3;
            }
            return 4;
        }
    }
    return 5;
}

} /* extern "C" */

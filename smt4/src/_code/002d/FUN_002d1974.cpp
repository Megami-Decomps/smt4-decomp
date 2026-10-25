/* NON_MATCHING: candidate status addressing folds the reserved-slot offset, changing saved registers and peeled-loop allocation. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
BtlMainState *btlGetMainState(void);

u32 FUN_002d1974(const BtlActionRecord *current, u32 directions)
{
    if ((directions & 0x60000) == 0)
        return 0;
    if ((current->status & 0x10) == 0) {
        BtlMainState *battle = btlGetMainState();
        BtlActionRecord *candidates[50];
        memClear(candidates, sizeof(candidates));
        u32 count = 0;
        BtlActionRecord *records = battle->actions;
        // The first four action slots precede the fifty ordinary participants.
        for (s32 index = 0; index < 50; ++index) {
            BtlActionRecord *candidate = &records[index + 4];
            u32 status = candidate->status;
            if ((status & 1) && (status & 2) && (status & 0x80) && !(status & 0x10) &&
                candidate->memberId != current->memberId)
                candidates[count++] = candidate;
        }
        if (directions & 0x20000) {
            for (s32 index = 0; index < count; ++index) {
                if (current->geometry.position[0] > candidates[index]->geometry.position[0])
                    return 1;
            }
        } else if (directions & 0x40000) {
            for (s32 index = 0; index < count; ++index) {
                if (current->geometry.position[0] < candidates[index]->geometry.position[0])
                    return 1;
            }
        }
    }
    return 0;
}
}

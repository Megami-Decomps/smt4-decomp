/* NON_MATCHING: frame and saved registers now match (117/117 rows, 1104 slot offset kept in r7); retail loads battle->actions before the search loop and the candidate address is scheduled one instruction earlier, and the later compare loops use different scratch registers. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

u32 FUN_002d1974(const BtlActionRecord *current, u32 directions)
{
    if ((directions & 0x60000) == 0)
        return 0;
    if ((current->status & 0x10) == 0) {
        BtlMainState *battle = btlGetMainState();
        BtlActionRecord *candidates[50];
        memClear(candidates, sizeof(candidates));
        u32 count = 0;
        // The first four action slots precede the fifty ordinary participants.
        s32 index = 0;
        while (index < 50) {
            BtlActionRecord *candidate = &battle->actions[index + 4];
            u32 status = candidate->status;
            if ((status & 1) && (status & 2) && (status & 0x80) && !(status & 0x10) &&
                candidate->memberId != current->memberId)
                candidates[count++] = candidate;
            ++index;
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

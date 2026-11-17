#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {

static void getUnitGroupRange(s32 group, s32 &first, s32 &count)
{
    if (group == 0) {
        count = 4;
    } else if (group == 1) {
        first = 4;
        count = 0x32;
    } else if (group == 2) {
        first = 0x36;
        count = 1;
    } else if (group == 3) {
        first = 0x43;
        count = 0x2a;
    }
}

// Put the ready, unlocked members of the group into their normal or alternate state.
void FUN_004caca0(BtlMainStateA *battle, s32 group, s32 enableMotion, s32 keepStatus)
{
    s32 first = 0;
    s32 count = 0;
    s32 i;

    getUnitGroupRange(group, first, count);
    for (i = first; i < first + count; i++) {
        BattleRosterMotionA *motion = &battle->roster[i].motion;
        u32 flags = motion->flags;

        if ((flags & 1) != 0 && (flags & 0x80) != 0 && (flags & 2) == 0) {
            switch (motion->useAlternateState) {
            case 0:
                motion->state = 5;
                break;
            default:
                motion->state = 6;
                break;
            }
            u32 renderFlags = (motion->renderFlags & ~6) | 1;
            motion->renderFlags = renderFlags;
            if (enableMotion != 0) {
                renderFlags |= 8;
            }
            motion->stateFrame = 0;
            if (enableMotion != 0) {
                motion->renderFlags = renderFlags;
            }
            if (keepStatus == 0) {
                motion->statusFlags |= 0x200;
            }
        }
    }
}

}

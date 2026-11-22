#include "battle/btlMain.h"

extern "C" {

/* Returns the turn of battle entry `entry` counted over the occupied turn-order slots, or -1 when it has none. */
s16 btlTurnOrderRankOf(const BtlMainState *battle, s32 entry)
{
    s16 rank = -1;
    for (s32 index = 0; index < 12; ++index) {
        if (battle->turnOrder.order[index] >= 0)
            ++rank;
        if (battle->turnOrder.order[index] == entry)
            return rank;
    }
    return -1;
}

} /* extern "C" */

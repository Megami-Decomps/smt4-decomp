#include "battle/btlMain.h"

extern "C" {

/* Returns the turn of battle entry `entry` counted over the occupied turn-order slots, or -1 when it has none. */
s16 btlTurnOrderRankOf(const BtlMainStateA *battle, s16 entry)
{
    s16 found = -1;
    for (s32 i = 0; i < 12; i++) {
        if (battle->turnOrder.indices[i] >= 0) {
            found++;
        }
        if (battle->turnOrder.indices[i] == entry) {
            return found;
        }
    }
    return -1;
}

} /* extern "C" */

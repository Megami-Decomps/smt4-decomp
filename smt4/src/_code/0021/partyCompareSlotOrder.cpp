#include "gamedata/SaveSlotTableIV.h"
/* Compares signed party-slot IDs in active-party then stock order. */


extern "C" {

s32 partyCompareSlotOrder(const s8 *left, const s8 *right)
{
    s8 first = *left;
    if (first >= 0) {
        s8 second = *right;
        if (second < 0 || first == 127) {
            return 1;
        }
        if (second != 127) {
            s32 firstPosition = -1;
            s32 secondPosition = -1;
            SaveSlotTableIV *party = gameGetSlotTable();
            for (s32 i = 0; i < 3; ++i) {
                if (firstPosition < 0 && party->active[i] == first) {
                    firstPosition = i;
                }
                if (secondPosition < 0 && party->active[i] == second) {
                    secondPosition = i;
                }
            }
            for (s32 i = 0; i < 24; ++i) {
                if (firstPosition < 0 && party->stock[i] == first) {
                    firstPosition = i + 3;
                }
                if (secondPosition < 0 && party->stock[i] == second) {
                    secondPosition = i + 3;
                }
            }
            return firstPosition - secondPosition;
        }
    }
    return -1;
}
}

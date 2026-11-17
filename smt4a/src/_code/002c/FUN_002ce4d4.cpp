/* Compares two ids: by flagValueRead key (descending), then by the byte at +0x43 of their itemTableGetItemRecord records (ascending). */
#include "common.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

extern s32 flagValueRead(u16 id);

s32 FUN_002ce4d4(u16 *a, u16 *b)
{
    s32 keyA = flagValueRead(*a);
    s32 keyB = flagValueRead(*b);
    s32 diff = keyB - keyA;

    if (diff == 0) {
        ConsumableRecordA *recordA = itemTableGetItemRecord(*a);
        ConsumableRecordA *recordB = itemTableGetItemRecord(*b);

        diff = recordA->rank - recordB->rank;
    }
    return diff;
}

}

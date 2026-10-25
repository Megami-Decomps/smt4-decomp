/* NON_MATCHING: register allocation: retail keeps a/b in r5/r4, the ids in r9/r8 and the keys in r6/r7 (here r7/r6, r8/r9, r4/r5). */
#include "common.h"
#include "gamedata/EquipmentSortPower.h"

extern "C" {

extern int contentGetKindValue(u16 id);

/* Comparison of two entries: by sort key (contentGetKindValue for kinds 2, 3 and 8, else 0), then by FUN_00230f44. */
int FUN_003a0078(u16 *a, u16 *b)
{
    s32 diff;
    u16 idA = *a;
    s16 idB = *b;
    s32 keyB = 0;
    s32 keyA = 0;
    s32 kind;

    kind = contentGetEntryKind(idA);
    if (kind == 2 || kind == 3 || kind == 8) {
        keyA = contentGetKindValue(idA);
    }
    kind = contentGetEntryKind(idB);
    if (kind == 2 || kind == 3 || kind == 8) {
        keyB = contentGetKindValue(idB);
    }
    diff = keyA - keyB;
    if (diff == 0) {
        diff = FUN_00230f44(a) - FUN_00230f44(b);
    }
    return diff;
}

}

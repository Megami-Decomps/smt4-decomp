/* NON_MATCHING: only the two ids swap callee-saved registers (retail keeps idA in r9 and idB in r8). */
#include "common.h"
#include "gamedata/EquipmentSortPower.h"

extern "C" {

extern int contentGetKindValue(u16 id);

/* Orders two entries by their FUN_00230f44 key. */
static s32 compareOrder(u16 *a, u16 *b)
{
    s32 orderA = FUN_00230f44(a);
    s32 orderB = FUN_00230f44(b);
    return orderA - orderB;
}

/* Comparison of two entries: by sort key (contentGetKindValue for kinds 2, 3 and 8, else 0), then by FUN_00230f44. */
int FUN_003a0078(u16 *a, u16 *b)
{
    s32 diff;
    u16 idA = *a;
    u16 idB = *b;
    s32 keyA = 0;
    s32 keyB = 0;
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
        diff = compareOrder(a, b);
    }
    return diff;
}

}

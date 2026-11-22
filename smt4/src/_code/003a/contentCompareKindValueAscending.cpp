#include "common.h"
#include "gamedata/EquipmentSortPower.h"

extern "C" {

extern int contentGetKindValue(u16 id);

/* Orders two entries by their aocEntryGetSortOrder key. */
static s32 compareOrder(u16 *a, u16 *b)
{
    s32 orderA = aocEntryGetSortOrder(a);
    s32 orderB = aocEntryGetSortOrder(b);
    return orderA - orderB;
}

/* Comparison of two entries: by sort key (contentGetKindValue for kinds 2, 3 and 8, else 0), then by aocEntryGetSortOrder. */
int contentCompareKindValueAscending(u16 *a, u16 *b)
{
    s32 diff;
    u16 idA = *a;
    u16 idB = *b;
    s32 keyA = 0;
    s32 keyB = 0;
    switch (contentGetEntryKind(idA)) {
    case 2: case 3: case 8:
        keyA = contentGetKindValue(idA);
        break;
    }
    switch (contentGetEntryKind(idB)) {
    case 2: case 3: case 8:
        keyB = contentGetKindValue(idB);
        break;
    }
    diff = keyA - keyB;
    if (diff == 0) {
        diff = compareOrder(a, b);
    }
    return diff;
}

}

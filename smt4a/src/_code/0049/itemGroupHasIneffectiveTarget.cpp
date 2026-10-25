#include "common.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

typedef struct ItemSlotTable {
    /* 0x0000 */ u8 unk0000[0x1C88];
    /* 0x1C88 */ s8 party[0x18]; // unit indices, negative when empty
    /* 0x1CA0 */ s8 reserve[3]; // unit indices, negative when empty
} ItemSlotTable;

s32 btlItemComputeValues(s32 unit, u32 item, s32 *first, s32 *second);
s32 gameSlotTableFindFree(void);

/* Whether using the item on the target group (0/1: party, 2/3: reserve; 0/2/3 also check the user)
 * has no effect on someone. */
s32 itemGroupHasIneffectiveTarget(s32 target, u32 item)
{
    s32 first;
    s32 second;
    s32 count;
    s8 *units;
    s32 i;

    if ((target == 0 || target == 2 || target == 3) && !btlItemComputeValues(-1, item, &first, &second)) {
        return 1;
    }
    switch (target) {
    case 0:
    case 1:
        count = gameSlotTableFindFree();
        units = gameGetSlotTable()->party;
        break;
    case 2:
    case 3:
        count = 3;
        units = gameGetSlotTable()->reserve;
        break;
    default:
        return 0;
    }
    for (i = 0; i < count; i++) {
        if (units[i] >= 0 && !btlItemComputeValues(units[i], item, &first, &second)) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */

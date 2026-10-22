#include "common.h"

namespace {
struct SlotTableMembers {
    /* 0x0000 */ u8 unk0000[0x90f0];
    /* 0x90F0 */ s8 party[0x18];
    /* 0x9108 */ s8 reserve[3];
};
}

extern "C" {

s32 btlItemComputeValues(s32 unit, u32 item, s32 *first, s32 *second);
s32 gameCountUnits(void);
SlotTableMembers *gameGetSlotTable(void);

/* Whether the item has no effect on some member of the group (0/1: party, 2/3: reserve; 0, 2 and 3 also test the player). */
s32 btlItemUselessOnGroupMember(s32 group, u32 item)
{
    s32 first;
    s32 second;
    s32 count;
    s8 *members;

    if (group == 0 || group == 2 || group == 3) {
        if (btlItemComputeValues(-1, item, &first, &second) == 0) {
            return 1;
        }
    }
    switch (group) {
    case 0:
    case 1:
        count = gameCountUnits();
        members = gameGetSlotTable()->party;
        break;
    case 2:
    case 3:
        count = 3;
        members = gameGetSlotTable()->reserve;
        break;
    default:
        return 0;
    }
    for (s32 i = 0; i < count; ++i) {
        if (members[i] >= 0 && btlItemComputeValues(members[i], item, &first, &second) == 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */

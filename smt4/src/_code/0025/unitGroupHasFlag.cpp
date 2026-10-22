#include "common.h"

struct UnitFlagsRecord {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u16 flags;
};

struct PlayerFlagsData {
    /* 0x00 */ u8 unk00[0x72];
    /* 0x72 */ u16 flags;
};

/* The save's slot table: party slots at 0x90F0, the three side slots at 0x9108 (-1 = empty). */
struct UnitSlotTable {
    /* 0x0000 */ u8 unk0000[0x90f0];
    /* 0x90F0 */ s8 party[0x18];
    /* 0x9108 */ s8 side[3];
};

extern "C" {

PlayerFlagsData *gameGetPlayerData(void);
s32 gameCountUnits(void);
UnitSlotTable *gameGetSlotTable(void);
UnitFlagsRecord *gameGetUnitRecord(s32 slot);

/* Whether flag bit is set on the player (groups 0, 2, 3) or on any unit of the group's slots. */
u32 unitGroupHasFlag(s32 group, u32 bit)
{
    u32 mask = 1 << bit;
    if ((group == 0 || group == 2 || group == 3) && (gameGetPlayerData()->flags & mask)) {
        return 1;
    }
    s32 count;
    const s8 *slots;
    switch (group) {
    case 0:
    case 1:
        count = gameCountUnits();
        slots = gameGetSlotTable()->party;
        break;
    case 2:
    case 3:
        count = 3;
        slots = gameGetSlotTable()->side;
        break;
    default:
        return 0;
    }
    for (s32 i = 0; i < count; ++i) {
        if (slots[i] >= 0 && (gameGetUnitRecord(slots[i])->flags & mask)) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */

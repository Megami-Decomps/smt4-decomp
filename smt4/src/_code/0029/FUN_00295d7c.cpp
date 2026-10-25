/* NON_MATCHING: retail materializes the -1 "not found" index in r6 before the search, and loads the two ids in the other order. */
#include "common.h"

extern "C" {

typedef struct SlotUnit {
    /* 0x000 */ u8 unk000[0x4A];
    /* 0x04A */ u8 id;
    /* 0x04B */ u8 unk04B[0x5B9];
} SlotUnit;

typedef struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x90];
    /* 0x0090 */ SlotUnit units[24];
    /* 0x90F0 */ u8 unk90F0[0x18];
    /* 0x9108 */ s8 party[3]; // unit indices, negative when empty
} SlotTable;

SlotTable *gameGetSlotTable(void);

/* The unit's index in the slot table, or -1. */
static __inline s32 slotTableIndexOf(SlotUnit *unit)
{
    if (unit != NULL) {
        SlotUnit *slot = gameGetSlotTable()->units;

        for (s32 i = 0; i < 24; i++, slot++) {
            if (slot == unit || slot->id == unit->id) {
                return i;
            }
        }
    }
    return -1;
}

/* Whether the unit is in one of the three party slots. */
bool FUN_00295d7c(SlotUnit *unit)
{
    s32 index = slotTableIndexOf(unit);
    s8 *party = gameGetSlotTable()->party;

    if (party[0] >= 0 && party[0] == index) {
        return true;
    }
    if (party[1] >= 0 && party[1] == index) {
        return true;
    }
    if (party[2] >= 0 && party[2] == index) {
        return true;
    }
    return false;
}

} /* extern "C" */

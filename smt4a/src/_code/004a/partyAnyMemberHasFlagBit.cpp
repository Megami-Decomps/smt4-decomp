#include "common.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

typedef struct PlayerFlagData {
    /* 0x00 */ u8 unk00[0x5e];
    /* 0x5E */ u16 flags;
} PlayerFlagData;

typedef struct SlotFlagRecord {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 flags;
} SlotFlagRecord;

typedef struct PartySlotTable {
    /* 0x0000 */ u8 unk0000[0x1c88];
    /* 0x1C88 */ s8 party[0x18];   /* slot index of each party member, negative when empty */
    /* 0x1CA0 */ s8 reserve[3];    /* slot index of each reserve member */
} PartySlotTable;

PlayerFlagData *gameGetPlayerData(void);
SlotFlagRecord *gameGetSlotRecord(s32 slotIndex);
s32 gameSlotTableFindFree(void);

/* Whether bit `bit` is set in the mask of the player (modes 0, 2, 3), the party (modes 0, 1) or the
 * reserve (modes 2, 3). */
s32 partyAnyMemberHasFlagBit(u32 mode, u32 bit)
{
    u32 mask = 1 << bit;
    s32 count;
    s8 *slots;

    if ((mode == 0 || mode == 2 || mode == 3) && (gameGetPlayerData()->flags & mask)) {
        return 1;
    }
    switch (mode) {
    case 0:
    case 1:
        count = gameSlotTableFindFree();
        slots = gameGetSlotTable()->party;
        break;
    case 2:
    case 3:
        count = 3;
        slots = gameGetSlotTable()->reserve;
        break;
    default:
        return 0;
    }
    for (s32 i = 0; i < count; i++) {
        if (slots[i] >= 0 && (gameGetSlotRecord(slots[i])->flags & mask)) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */

#include "common.h"

extern "C" {

typedef struct PartySlotTable {
    /* 0x0000 */ u8 unk0000[0x90f0];
    /* 0x90F0 */ s8 party[0x18];   /* slot index of each party member, negative when empty */
    /* 0x9108 */ s8 reserve[3];    /* slot index of each reserve member */
} PartySlotTable;

s32 FUN_002621b4(s32 id, s32 slot, s32 arg, s32 *out);
PartySlotTable *gameGetSlotTable(void);
s32 gameCountUnits(void);

/* Whether FUN_002621b4 accepts (returns 0) `id` for the player (modes 0, 2, 3), a party member
 * (modes 0, 1) or a reserve member (modes 2, 3). */
s32 FUN_003a65f4(u32 mode, s32 id, s32 arg)
{
    s32 result;
    s32 count;
    s8 *slots;

    if ((mode == 0 || mode == 2 || mode == 3) && FUN_002621b4(id, -1, arg, &result) == 0) {
        return 1;
    }
    switch (mode) {
    case 0:
    case 1:
        count = gameCountUnits();
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
        if (slots[i] >= 0 && FUN_002621b4(id, slots[i], arg, &result) == 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */

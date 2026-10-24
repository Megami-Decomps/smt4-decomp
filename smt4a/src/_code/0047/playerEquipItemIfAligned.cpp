#include "common.h"

extern "C" {

typedef struct EquipItemData {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u8 slot; // equipment slot kind, 2..8
    /* 0x23 */ u8 unk23[0xD];
    /* 0x30 */ u8 alignments; // bit 0: class 4, bit 1: class 1, bit 2: class 5
} EquipItemData;

typedef struct PlayerEquipment {
    /* 0x00 */ u16 slot2;
    /* 0x02 */ u16 slot3;
    /* 0x04 */ u16 slot8;
    /* 0x06 */ u16 slot4;
    /* 0x08 */ u16 slot5;
    /* 0x0A */ u16 slot6;
    /* 0x0C */ u16 slot7;
} PlayerEquipment;

s32 playerAlignmentClass(void);
EquipItemData *dataTable08Sub2GetRecord(u32 id);
PlayerEquipment *gameGetPlayerData(void);

/* Equips the item in its slot when the player's alignment class allows it. */
void playerEquipItemIfAligned(u32 id)
{
    s32 alignment = playerAlignmentClass();
    EquipItemData *item = dataTable08Sub2GetRecord(id);
    PlayerEquipment *equipment;

    if (item == NULL) {
        return;
    }
    if (((item->alignments & 1) && alignment == 4) || ((item->alignments & 4) && alignment == 5)
        || ((item->alignments & 2) && alignment == 1)) {
        equipment = gameGetPlayerData();
        switch (dataTable08Sub2GetRecord(id)->slot) {
        case 2:
            equipment->slot2 = id;
            break;
        case 3:
            equipment->slot3 = id;
            break;
        case 4:
            equipment->slot4 = id;
            break;
        case 5:
            equipment->slot5 = id;
            break;
        case 6:
            equipment->slot6 = id;
            break;
        case 7:
            equipment->slot7 = id;
            break;
        case 8:
            equipment->slot8 = id;
            break;
        }
    }
}

} /* extern "C" */

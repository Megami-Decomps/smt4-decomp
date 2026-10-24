/* NON_MATCHING: readable rebuild of the equipment menu's selection tracking; retail evaluates the three category tests as three separate FUN_00192718 calls and keeps the preview copy of the player data at fixed stack slots, which armcc here schedules differently. */
#include "common.h"

/* One list entry: the item id and its detail word. */
struct EquipListEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 detail;
};

/* The equipment menu's work area (only the fields the selection tracking touches). */
struct EquipMenu {
    /* 0x00000 */ u8 unk00000[0x22];
    /* 0x00022 */ u8 previewing;     /* the item's preview is up */
    /* 0x00023 */ u8 previewActive;
    /* 0x00024 */ u8 unk00024[0xB1C];
    /* 0x00B40 */ s32 tab;
    /* 0x00B44 */ u8 unk00B44[0x1C];
    /* 0x00B60 */ u8 holders[4][0x74]; /* flagged value holders, one per tab */
    /* 0x00D30 */ u8 unk00D30[0x244];
    /* 0x00F74 */ u8 lists[4][0x1002]; /* the lists of EquipListEntry */
    /* 0x04F7C */ u8 unk04F7C[0x11088];
    /* 0x16004 */ s32 previewEnabled;
    /* 0x16008 */ u32 previewedId;
    /* 0x1600C */ u8 unk1600C[0x28];
    /* 0x16034 */ u32 lastSelectedId;
};

/* The player's equipment as a 100-byte block: seven slots from offset 6. */
struct PlayerEquipmentBlock {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 slots[7];
    /* 0x14 */ u8 unk14[0x50];
};

extern "C" {
void *gameGetPlayerData(void);
s32 flaggedValueHolderGetTotal(void *holder);
u32 FUN_004d02e0(void *holder);
s32 FUN_00192718(u32 id);
void FUN_002f0384(s32 mode);
s32 objBStateAllowsAction(void);
void FUN_0038b5fc(s32 kind, u16 id);
void rt_memcpy_w(void *destination, const void *source, s32 bytes);
void FUN_003df7c4(PlayerEquipmentBlock *block);
void FUN_00372100(PlayerEquipmentBlock *block, s32 arg);

/* Tracks the selected item of the equipment menu: restarts the preview when the selection changes
 * and shows the item on the character when the preview is enabled. */
void FUN_00498de0(EquipMenu *menu)
{
    EquipListEntry *list = (EquipListEntry *)menu->lists[menu->tab];
    s32 cursor = flaggedValueHolderGetTotal(menu->holders[menu->tab]);
    u32 id = list[cursor].id;
    u32 pending = FUN_004d02e0(menu->holders[menu->tab]);
    if (!(pending == 0 && menu->lastSelectedId == id)) {
        s32 kind = FUN_00192718(id);
        if (kind == 4 || FUN_00192718(id) == 5 || FUN_00192718(id) == 6) {
            FUN_002f0384(0);
            menu->previewing = 0;
            menu->previewActive = 0;
        }
        menu->lastSelectedId = id;
    } else if (menu->previewing) {
        if (objBStateAllowsAction()) {
            FUN_002f0384(1);
            menu->previewActive = 1;
        }
    } else {
        if (id != 0) {
            if (FUN_00192718(id) == 4)
                FUN_0038b5fc(0, id);
            if (FUN_00192718(id) == 5)
                FUN_0038b5fc(1, id);
            if (FUN_00192718(id) == 6)
                FUN_0038b5fc(2, id);
        }
        menu->previewing = 1;
    }
    if (menu->previewEnabled != 0 && menu->previewedId != id) {
        menu->previewedId = id;
        PlayerEquipmentBlock preview;
        rt_memcpy_w(&preview, gameGetPlayerData(), 100);
        if (id != 0) {
            switch (FUN_00192718(id)) {
            case 2:
                preview.slots[0] = id;
                break;
            case 3:
                preview.slots[1] = id;
                break;
            case 4:
                preview.slots[3] = id;
                break;
            case 5:
                preview.slots[4] = id;
                break;
            case 6:
                preview.slots[5] = id;
                break;
            case 7:
                preview.slots[6] = id;
                break;
            case 8:
                preview.slots[2] = id;
                break;
            }
        }
        FUN_003df7c4(&preview);
        FUN_00372100(&preview, 0);
    }
}

} /* extern "C" */

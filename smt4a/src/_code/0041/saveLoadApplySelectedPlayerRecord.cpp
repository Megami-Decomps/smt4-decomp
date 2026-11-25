#include "common.h"
#include "code/Code0023.h"
#include "code/Code002c.h"
#include "gamedata/PlayerDataBlock.h"

extern "C" {

/* The player data record copied from the selected save entry (0x0E bytes). */
typedef struct SelectRecord {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 value0;
    /* 0x08 */ u16 value1;
    /* 0x0A */ u16 value2;
    /* 0x0C */ u8 unk0C[2];
} SelectRecord;

/* A selection menu: only the fields this unit touches are named. */
typedef struct SelectMenu {
    /* 0x000 */ u8 unk000[0x54];
    /* 0x054 */ SelectRecord *record;
    /* 0x058 */ u8 unk058[4];
    /* 0x05C */ u8 applied;
    /* 0x05D */ u8 unk05D[3];
    /* 0x060 */ s32 shownIndex;
    /* 0x064 */ u8 unk064[4];
    /* 0x068 */ u8 unk068;
    /* 0x069 */ u8 unk069[0x283];
    /* 0x2EC */ s8 selectable[0xC];
    /* 0x2F8 */ s32 index;
    /* 0x2FC */ u8 unk2FC[0x10];
    /* 0x30C */ u8 locked;
} SelectMenu;

void statusCameraRestore(s32 arg);
void __aeabi_memcpy4(void *dest, const void *src, u32 size);
void statusModelPreviewOutfitPart(s32 slot, u16 value);

/* When the cursor moves to a new entry, applies it to the player data if it is selectable. */
void saveLoadApplySelectedPlayerRecord(SelectMenu *menu)
{
    s32 index = menu->index;
    s32 shownIndex = menu->shownIndex;

    if (shownIndex == index || menu->locked || menu->applied) {
        return;
    }
    menu->shownIndex = index;
    if (menu->selectable[menu->shownIndex]) {
        menu->applied = 1;
        statusCameraRestore(0);
        menu->unk068 = 0;
        __aeabi_memcpy4((void *)gameGetPlayerData(), menu->record, sizeof(SelectRecord));
        statusModelPreviewOutfitPart(1, menu->record->value1);
        statusModelPreviewOutfitPart(2, menu->record->value2);
        statusModelPreviewOutfitPart(0, menu->record->value0);
        return;
    }
    FUN_0023b45c(0);
    gameGlobalsSetOverlayActive(1);
    statusCameraRestore(0);
    menu->unk068 = 0;
}

} /* extern "C" */

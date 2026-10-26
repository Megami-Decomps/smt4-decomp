/* NON_MATCHING: scheduling only: retail loads index before shownIndex and indexes selectable as [index, menu+0x2ec]; ours loads shownIndex first and adds menu+index. */
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

void FUN_002f0384(s32 arg);
void __aeabi_memcpy4(void *dest, const void *src, u32 size);
void FUN_0038b5fc(s32 slot, u16 value);
void FUN_0023b45c(s32 arg);

/* When the cursor moves to a new entry, applies it to the player data if it is selectable. */
void FUN_0041e2d8(SelectMenu *menu)
{
    s32 index = menu->index;
    s32 shownIndex = menu->shownIndex;

    if (shownIndex == index || menu->locked || menu->applied) {
        return;
    }
    const s8 *selectable = menu->selectable;
    menu->shownIndex = index;
    if (selectable[index]) {
        menu->applied = 1;
        FUN_002f0384(0);
        menu->unk068 = 0;
        __aeabi_memcpy4(reinterpret_cast<void *>(gameGetPlayerData()), menu->record, sizeof(SelectRecord));
        FUN_0038b5fc(1, menu->record->value1);
        FUN_0038b5fc(2, menu->record->value2);
        FUN_0038b5fc(0, menu->record->value0);
        return;
    }
    FUN_0023b45c(0);
    FUN_002c8538(1);
    FUN_002f0384(0);
    menu->unk068 = 0;
}

} /* extern "C" */

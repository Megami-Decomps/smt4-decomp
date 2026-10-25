#include "common.h"

extern "C" {

typedef struct ItemListEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 itemId;
    /* 0x06 */ u8 unk06[0x1A];
} ItemListEntry;

typedef struct ItemListMenu {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 state;
    /* 0x018 */ s32 timer;
    /* 0x01C */ u8 unk01C[4];
    /* 0x020 */ u8 cursor[0x840];
    /* 0x860 */ s8 mode;
    /* 0x861 */ u8 unk861[3];
    /* 0x864 */ ItemListEntry entries[1];
} ItemListMenu;

typedef struct ItemRecord {
    /* 0x00 */ u8 unk00[0xB3];
    /* 0xB3 */ u8 flags;
} ItemRecord;

s32 useCounterIsFinished(void);
void useCounterRelease(void);
s32 flaggedValueHolderGetTotal(void *cursor);
ItemRecord *FUN_00184310(u16 itemId);
void sysPlaySe(s32 se);
void FUN_003343f0(s32 value);
s32 FUN_002c7c54(void);
void itemListSelectVariant(ItemListMenu *menu, s32 a, s32 b);

/* Wait for the use counter; once it finishes, play the confirm sound and move to state 2. */
void itemListMenuWaitUseCounter(ItemListMenu *menu)
{
    if (useCounterIsFinished()) {
        useCounterRelease();
        if (menu->mode == 1) {
            sysPlaySe(0x48);
        } else if (menu->mode == 0) {
            ItemListEntry *entries = menu->entries;
            ItemRecord *item = FUN_00184310(entries[flaggedValueHolderGetTotal(menu->cursor)].itemId);

            sysPlaySe((item->flags & 2) ? 0x121 : 0x30);
        } else {
            sysPlaySe(0x48);
        }
        FUN_003343f0(0);
        menu->state = 2;
        menu->timer = 0;
    } else if (FUN_002c7c54() != 0x69) {
        itemListSelectVariant(menu, 1, 1);
    }
}

} /* extern "C" */

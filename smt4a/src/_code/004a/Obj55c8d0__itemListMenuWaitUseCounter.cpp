#include "common.h"
#include "gamedata/DevilRecordA.h"
#include "classes/Obj55c8d0.h"
#include "ui/ItemListSelection.h"

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

s32 useCounterIsFinished(void);
void useCounterRelease(void);
s32 flaggedValueHolderGetTotal(void *cursor);
void sysPlaySe(s32 se);
void gameGlobalsSetMenuOpenFlag(s32 value);
s32 useCounterGetCurrentValue(void);

/* Wait for the use counter; once it finishes, play the confirm sound and move to state 2. */
}

void Obj55c8d0::itemListMenuWaitUseCounter()
{
    ItemListMenu * menu = reinterpret_cast<ItemListMenu *>(this);
    if (useCounterIsFinished()) {
        useCounterRelease();
        if (menu->mode == 1) {
            sysPlaySe(0x48);
        } else if (menu->mode == 0) {
            ItemListEntry *entries = menu->entries;
            DevilRecordA *item = devilGetRecord(entries[flaggedValueHolderGetTotal(menu->cursor)].itemId);

            sysPlaySe((item->extraFlags & 2) ? 0x121 : 0x30);
        } else {
            sysPlaySe(0x48);
        }
        gameGlobalsSetMenuOpenFlag(0);
        menu->state = 2;
        menu->timer = 0;
    } else if (useCounterGetCurrentValue() != 0x69) {
        itemListSelectVariant(reinterpret_cast<ItemListSelectionOwner *>(menu), 1, 1);
    }
}

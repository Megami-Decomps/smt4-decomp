/* NON_MATCHING: count and item-base registers swap (r6/r7), and retail re-extends the loaded id with uxth. */
#include "gamedata/PartySlots.h"
#include "util/FUN_002a482c.h"

/* One row of the menu's devil list. */
struct DevilListItem {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1A];
};

struct DevilListMenu {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ s32 state;
    /* 0x0018 */ u8 unk0018[8];
    /* 0x0020 */ u8 range[8];
    /* 0x0028 */ u8 unk0028[0x6E];
    /* 0x0096 */ PartySlots party;
    /* 0x00C6 */ u8 unk00C6[0x79E];
    /* 0x0864 */ DevilListItem items[0x508];
    /* 0xA964 */ u8 unkA964[0x1A];
    /* 0xA97E */ u8 unkA97E;
};

extern "C" {
void menu4BUpdate(DevilListMenu *menu);
void FUN_004a580c(DevilListMenu *menu);
void FUN_004a5d5c(DevilListMenu *menu);
void words4At20Clear(PartySlots *party);
s32 rangeGetMinimumLimit(u8 *range);
void partyIdsActivateEntry(PartySlots *party, u32 id);
void FUN_004a6cfc(PartySlots *party);
u32 shopListItemGetId(const DevilListItem *item);

/* Updates the menu, then rebuilds its party list from the devils shown on the current page. */
void FUN_004a677c(DevilListMenu *menu)
{
    s32 count;

    menu->unkA97E = 0xFF;
    if (menu->state == 4) {
        menu4BUpdate(menu);
    } else {
        FUN_004a580c(menu);
    }
    FUN_004a5d5c(menu);
    words4At20Clear(&menu->party);
    count = rangeGetMinimumLimit(menu->range);
    for (s32 i = 0; i < count; i++) {
        DevilListItem *items = menu->items;

        u16 id = shopListItemGetId(&items[FUN_002a482c(menu->range) + i]);
        partyIdsActivateEntry(&menu->party, id);
    }
    FUN_004a6cfc(&menu->party);
}

} /* extern "C" */

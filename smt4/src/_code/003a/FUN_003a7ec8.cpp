/* NON_MATCHING: retail addresses the entry id as menu + index * 32 + 0x5ac (this: + 0x5a8, #4) and branches to the shared "return 0" instead of movne for a pending error. */
#include "common.h"

namespace {
struct PurchaseEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1a];
};

struct PurchaseMenu {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u8 selection[0x74];
    /* 0x0094 */ s8 level;
    /* 0x0095 */ u8 unk0095[0x510];
    /* 0x05A5 */ u8 discounted;
    /* 0x05A6 */ u8 unk05a6[2];
    /* 0x05A8 */ PurchaseEntry entries[1280];
    /* 0xA5A8 */ u8 unka5a8[8];
    /* 0xA5B0 */ u8 error;
};
}

extern "C" {

s32 FUN_0029ce60(u16 id, u8 discounted, s32 mode, bool highLevel, s32 flags);
s32 flaggedValueHolderGetTotal(void *holder);
void *devilGetRecord(u16 id);
u32 gameSlotTableGetHeader(void);
s32 partyHasStoredDemon(u16 id);
s32 FUN_0029c1fc(void);

/* Check whether the demon can be bought; on failure record why (1 money, 2 already stored, 3 not allowed, 5 no room) and return 0. */
s32 FUN_003a7ec8(PurchaseMenu *menu, u16 id)
{
    u32 price = FUN_0029ce60(id, menu->discounted, 0, menu->level >= 100, 0);
    PurchaseEntry *entry = &menu->entries[flaggedValueHolderGetTotal(menu->selection)];
    u8 error;

    if (!menu->discounted) {
        devilGetRecord(entry->id);
    }
    if (price > gameSlotTableGetHeader()) {
        error = 1;
    } else if (partyHasStoredDemon(id)) {
        error = 2;
    } else if (menu->discounted == 2) {
        error = 3;
    } else if (FUN_0029c1fc() == -1) {
        error = 5;
    } else {
        return menu->error == 0;
    }
    menu->error = error;
    return 0;
}

} /* extern "C" */

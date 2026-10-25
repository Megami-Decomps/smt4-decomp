#include "common.h"
#include "gamedata/Table04Record.h"

extern "C" {

struct DataTable04Record {
    /* 0x00 */ u8 unk00[0x39];
    /* 0x39 */ u8 flags;
    /* 0x3a */ u8 unk3a[0x86 - 0x3a];
    /* 0x86 */ u16 unk86;
};

struct MenuState {
    /* 0x000 */ u8 unk000[0x11];
    /* 0x011 */ u8 unk11;
    /* 0x012 */ u8 unk12[2];
    /* 0x014 */ u32 mode;
    /* 0x018 */ s16 itemId;
    /* 0x01a */ u8 unk1a[0x2ac - 0x1a];
    /* 0x2ac */ u32 unk2ac;
    /* 0x2b0 */ u8 active;
    /* 0x2b1 */ u8 usable;
    /* 0x2b2 */ u8 unk2b2[6];
    /* 0x2b8 */ u8 flagged;
};

extern MenuState *g_menuState;


/* Opens the item prompt for `itemId`; it is usable only if requested and the item's record allows it. */
void FUN_002e4308(s16 itemId, u8 arg, s32 usable)
{
    MenuState *menu = g_menuState;

    menu->mode = 2;
    menu->itemId = itemId;
    menu->unk11 = arg;
    menu->flagged = 0;
    if (usable != 0) {
        DataTable04Record *record = (DataTable04Record *)dataTable04FindById(itemId);
        if (record == NULL) {
            usable = 0;
        } else {
            if (record->unk86 == 0) {
                usable = 0;
            }
            if (record->flags & 0x80) {
                menu->flagged = 1;
            }
        }
    }
    menu->unk2ac = 0;
    menu->usable = usable;
    menu->active = 1;
}

} /* extern "C" */

/* NON_MATCHING: layout only: retail places one shared FUN_004a5d5c tail call right after the mode dispatch and the arms branch back to it; built emits an inline tail call in each arm */
#include "common.h"
#include "classes/Obj55c8d0.h"
#include "shard/Shard004A.h"
#include "bible/bibleAnalyze.h"

struct SelectEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 itemId;
    /* 0x06 */ u8 unk06[0x1A];
};

/* The selection state at the end of the menu: the mode and the entry table. */
struct SelectState {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ s8 mode;
    /* 0x61 */ u8 unk61[3];
    /* 0x64 */ SelectEntry entries[1];
};

struct SelectMenu;
struct SelectMenuVtable {
    void *unk00[9];
    s32 (*canConfirm)(SelectMenu *menu); /* +0x24 */
};


struct ItemRecord {
    /* 0x00 */ u8 unk00[0xB3];
    /* 0xB3 */ u8 flags; /* bit 1: plays the special confirm sound */
};

/* The selection menu, reduced to what the confirm handler touches. */
struct SelectMenu {
    /* 0x000 */ const SelectMenuVtable *vtable;
    /* 0x004 */ u8 unk004[0x10];
    /* 0x014 */ s32 confirmed;
    /* 0x018 */ s32 unk018;
    /* 0x01C */ u8 unk01C[4];
    /* 0x020 */ u8 totalHolder[0x76];
    /* 0x096 */ u8 busyFlags[0x46];
    /* 0x0DC */ u8 spriteBank[0x724];
    /* 0x800 */ SelectState state;
};

extern "C" {
s32 utilityReturnSuccess(void *flags);
void uiSpriteBankApplyPreset(void *bank, s32 preset);
void FUN_00202400(void);
ItemRecord *FUN_00184310(u32 itemId);
void sysPlaySe(u32 id);
void FUN_004a5d5c(SelectMenu *menu);

/* Confirms the current selection: plays the confirm sound for the menu's mode and hands over to the follow-up handler. */
}

void Obj55c8d0::FUN_004a4c74()
{
    SelectMenu * menu = reinterpret_cast<SelectMenu *>(this);
    if (!menu->vtable->canConfirm(menu) || utilityReturnSuccess(menu->busyFlags) != 0) {
        return;
    }
    if (menu->state.mode == 1 && !sceneTexturesAreLoaded()) {
        return;
    }
    menu->unk018 = 0;
    menu->confirmed = 1;
    uiSpriteBankApplyPreset(menu->spriteBank, 8);
    uiSpriteBankApplyPreset(menu->spriteBank, 9);
    if (menu->state.mode == 0) {
        FUN_00202400();
        if (menu->state.mode == 0) {
            SelectEntry *entries = menu->state.entries;
            s32 total = flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(menu->totalHolder));
            ItemRecord *item = FUN_00184310(entries[total].itemId);
            sysPlaySe((item->flags & 2) != 0 ? 0x121 : 0x30);
            FUN_004a5d5c(menu);
            return;
        }
    } else if (menu->state.mode != 1) {
        FUN_004a5d5c(menu);
        return;
    }
    sysPlaySe(0x48);
    FUN_004a5d5c(menu);
}

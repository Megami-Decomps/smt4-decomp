/* NON_MATCHING: page index and list-address registers R1/R2 are swapped, changing the selected-ID table address setup order; all calls and item selection behavior are recovered. */
#include "common.h"

struct SelectionList {
    u8 unk00[8]; // 0x00
    s32 count;    // 0x08
    u8 unk0c[0x68]; // 0x0c
};
struct SelectionId {
    u16 id;
    u16 unk02;
};
struct SelectionPage {
    u16 unk00;
    SelectionId items[1024]; // 0x02
};
struct SelectionOwner {
    u8 unk000[0x860]; // 0x000
    s32 page;          // 0x860
    union {
        struct {
            u8 unk864[0x1c];
            SelectionList lists[1]; // 0x880
        } menu;
        struct {
            u8 unk864[0x42e];
            SelectionPage pages[1]; // 0xc92
        } data;
    };
};

extern "C" {
s32 flaggedValueHolderGetTotal(SelectionList* list);
void FUN_0029212c(u32 id);
void FUN_0029ee6c(u32 index, u32 color);

// Renders the selected page's current item, or a dark placeholder for an empty page.
void FUN_0022fb64(SelectionOwner* owner)
{
    s32 page = owner->page;
    if (owner->menu.lists[page].count > 0) {
        SelectionId* items = owner->data.pages[page].items;
        s32 selection = flaggedValueHolderGetTotal(&owner->menu.lists[page]);
        FUN_0029212c(items[selection].id);
    } else {
        FUN_0029ee6c(0, 0x323232ff);
    }
}
}

/* NON_MATCHING: retail stores cursor/mode with a writeback str pair (no stm) and copies the zero register into the loop counter. */
#include "common.h"
#include "font/ComWin/ComWin.h"

struct PanelSlot {
    u8 unk00[0x8c];
};

struct PanelList {
    u8 unk0000[0x20];
    PanelSlot first[10];   // 0x0020, 0x8c bytes each
    PanelSlot second[10];  // 0x0598
    u8 unk0b10[0x217c - 0xb10];
    u32 cursor;            // 0x217c
    u32 mode;              // 0x2180
    u8 unk2184[8];
    s16 count;             // 0x218c
    u16 selected;          // 0x218e
};

extern "C" {


// Reset the list state and initialise both per-slot records of every slot.
void FUN_00218be0(PanelList *list)
{
    list->cursor = 0;
    list->mode = 4;
    list->selected = 0;
    for (s32 i = 0; i < list->count; i++) {
        spriteStartAnimationByIndex(&list->first[i], 8);
        spriteStartAnimationByIndex(&list->second[i], 8);
    }
}

} /* extern "C" */

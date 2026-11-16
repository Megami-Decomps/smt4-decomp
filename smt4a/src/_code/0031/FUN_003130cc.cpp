#include "common.h"
extern "C" {
/* The popup entry's selection state (entry + 0x0C). */
struct PopupEntryState {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 selected;
    /* 0x03 */ u8 unk03[3];
    /* 0x06 */ u16 kind;
};
struct PopupEntry {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ PopupEntryState state;
    /* 0x14 */ u8 unk14[0x28];
};
struct PopupWork {
    /* 0x000 */ PopupEntry entries[64];
    /* 0xF00 */ u8 unkF00[0x0C];
    /* 0xF0C */ u8 changed;
    /* 0xF0D */ u8 unkF0D[3];
    /* 0xF10 */ s32 selected;
    /* 0xF14 */ u8 unkF14[0x2C];
    /* 0xF40 */ u8 requested;
};
extern PopupWork *DAT_00581280;

/* Marks active entries of kind 16 selected (and makes the last one the current selection), the others unselected. */
void FUN_003130cc(void)
{
    for (s32 index = 0; index < 64; ++index) {
        PopupEntryState *state = &DAT_00581280->entries[index].state;
        if (state->active != 0) {
            if (state->kind == 16) {
                state->selected = 1;
                DAT_00581280->selected = index;
                DAT_00581280->requested = 1;
                DAT_00581280->changed = 1;
            } else {
                state->selected = 0;
            }
        }
    }
}
}

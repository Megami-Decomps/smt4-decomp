/* NON_MATCHING: register allocation only at the top of the loop: retail loads the count into r1 and reuses r1 for the index (r3 for the cursor), built uses r2/r3 */
#include "common.h"

extern "C" {

typedef struct ItemState {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 flags;      /* bit 0: dimmed */
} ItemState;

typedef struct Item {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ ItemState *state;
} Item;

typedef struct EntryInfo {
    /* 0x0 */ s32 type;
    /* 0x4 */ s32 unk4;
} EntryInfo; /* 0x8 */

typedef struct Menu {
    /* 0x000 */ u8 unk000[0xA30];
    /* 0xA30 */ Item *items[17];
    /* 0xA74 */ EntryInfo entries[1];
    /* 0xA7C */ u8 unkA7C[0x44];
    /* 0xAC0 */ s32 order[4];
    /* 0xAD0 */ s32 count;
    /* 0xAD4 */ s32 cursor;
    /* 0xAD8 */ u8 unkAD8[0x208];
    /* 0xCE0 */ s32 mode;
} Menu;

/* Selects the menu mode from the entry at position `index` (type 8 -> 5, type 9 -> 4), then dims
 * every item except the one under the cursor. */
void FUN_0046a278(Menu *menu, s32 index)
{
    s32 i;

    if (index != -1) {
        menu->mode = menu->entries[menu->order[index]].type;
        if (menu->entries[menu->order[index]].type == 8) {
            menu->mode = 5;
        }
        if (menu->entries[menu->order[index]].type == 9) {
            menu->mode = 4;
        }
        for (i = 0; i < menu->count; i++) {
            ItemState *state = menu->items[menu->entries[menu->order[i]].type]->state;

            if (menu->cursor == i) {
                if ((state->flags & 1) != 0) {
                    state->flags &= ~1;
                }
            } else if ((state->flags & 1) == 0) {
                state->flags |= 1;
            }
        }
    }
}

} /* extern "C" */

/* NON_MATCHING: the cursor flag is loaded with ldrb [r5, #138]; retail copies the base (mov r0, r5) and uses ldrsb r0, [r0, #138]. */
#include "common.h"

extern "C" {

typedef struct Cursor {
    /* 0x00 */ u8 unk00[0x8A];
    /* 0x8A */ s8 enabled;
} Cursor;

typedef struct Pair {
    s32 first;
    s32 second;
} Pair;

typedef struct Menu {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ Pair state;
    /* 0x1C */ u8 unk1C[0xAC];
    /* 0xC8 */ u8 layout[0x34];
    /* 0xFC */ Cursor cursor;
} Menu;

int FUN_00231184(void);
int FUN_00231240(void *layout, u32 a, u32 b);
int FUN_0029d960(Menu *menu);
int FUN_002a0cc8(int arg);
int FUN_002b8ee0(Cursor *cursor, int arg);
u32 vec2GetYInt(Cursor *cursor);
u32 vec2GetXInt(Cursor *cursor);

/* Refreshes the menu layout from its cursor; if the cursor is enabled and FUN_00231184 allows it, switches the menu to state (2, 0) and refreshes again. */
void FUN_003a7834(Menu *menu)
{
    Cursor *cursor = &menu->cursor;
    u32 width;
    u32 height;

    FUN_002b8ee0(cursor, 0);
    width = vec2GetYInt(cursor);
    height = vec2GetXInt(cursor);
    FUN_00231240(menu->layout, height, width);
    if (cursor->enabled != 0 && FUN_00231184() != 0) {
        FUN_002a0cc8(0);
        menu->state.first = 2;
        menu->state.second = 0;
        FUN_00231240(menu->layout, 0, 0);
        FUN_0029d960(menu);
    }
}

} /* extern "C" */

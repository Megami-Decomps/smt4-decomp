/* NON_MATCHING: register allocation only: retail forms the cursor address in r0 and copies it to r5 */
/* Returns the table value for the current position (resourceRunOperationIfUnblocked + FUN_002a4894 of the cursor sub-state). */
#include "common.h"

extern "C" {

typedef struct Cursor {
    u8 data[0x12A];
} Cursor; /* 0x9AC .. 0xAD6 */

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x9AC];
    /* 0x9AC */ Cursor cursor;
    /* 0xAD6 */ u16 values[1];
} Holder;

extern Holder *g_uiQuest;

extern s32 resourceRunOperationIfUnblocked(Cursor *cursor);
extern s32 FUN_002a4894(Cursor *cursor);

u16 FUN_0031f8cc(void)
{
    Holder *holder = g_uiQuest;
    Cursor *cursor = &holder->cursor;
    s32 base = resourceRunOperationIfUnblocked(cursor);
    s32 offset = FUN_002a4894(cursor);

    return holder->values[offset + base];
}

}

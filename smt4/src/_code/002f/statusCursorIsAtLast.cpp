#include "common.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"

extern "C" {

typedef struct Cursor {
    /* 0x00 */ u8 data[4];
} Cursor;

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x4D4];
    /* 0x4D4 */ Cursor cursor;
} Holder;

extern Holder *g_statusDown;

/* Returns whether the cursor's current position is the last index of its list (size - 1); false if there is no holder. */
u32 statusCursorIsAtLast(void)
{
    Holder *holder = g_statusDown;
    if (holder != NULL) {
        s32 position = FUN_0029efa8(&holder->cursor);
        Cursor *cursor = &holder->cursor;
        s32 count = FUN_0029ee54(cursor);

        if (position == count - 1) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */

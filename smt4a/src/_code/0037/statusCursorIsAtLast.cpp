/* Returns 1 if the cursor sub-state's current position is the last one of its range. */
#include "common.h"

extern "C" {

typedef struct Cursor {
    u8 data[0x50];
} Cursor;

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x5EC];
    /* 0x5EC */ Cursor cursor;
} Holder;

extern Holder *g_statusDown;

extern s32 FUN_002a4894(Cursor *cursor);
extern s32 objectApplyIfUnblocked(Cursor *cursor);

u32 statusCursorIsAtLast(void)
{
    Holder *holder = g_statusDown;
    if (holder != NULL) {
        s32 position = FUN_002a4894(&holder->cursor);
        Cursor *cursor = &holder->cursor;
        s32 count = objectApplyIfUnblocked(cursor);

        if (position == count - 1) {
            return 1;
        }
    }
    return 0;
}

}

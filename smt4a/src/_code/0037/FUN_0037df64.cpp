/* NON_MATCHING: register allocation only: retail forms the cursor address in r0 (call argument) and copies it to r4; built computes it in r4 */
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

extern Holder *DAT_00588fe8;

extern s32 FUN_002a4894(Cursor *cursor);
extern s32 FUN_002c2c68(Cursor *cursor);

u32 FUN_0037df64(void)
{
    if (DAT_00588fe8 != NULL) {
        Cursor *cursor = &DAT_00588fe8->cursor;
        s32 position = FUN_002a4894(cursor);
        s32 count = FUN_002c2c68(cursor);

        if (position == count - 1) {
            return 1;
        }
    }
    return 0;
}

}

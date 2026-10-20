/* NON_MATCHING: the pool address is loaded into r0 and the constant 1 after the global load; retail loads the pool word into r1 and materialises 1 first. */
#include "common.h"

extern "C" {

typedef struct StatusCursor {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ s32 mode;
} StatusCursor;

typedef struct StatusDown {
    /* 0x0000 */ u8 unk0000[0x24AC];
    /* 0x24AC */ StatusCursor cursor;
} StatusDown;

extern StatusDown *g_statusDown;

/* Whether the status screen is absent or its cursor is in mode 5. */
u32 FUN_003a7bac(void)
{
    StatusDown *down = g_statusDown;
    u32 result = 1;

    if (down != NULL) {
        StatusCursor *cursor = &down->cursor;

        if (cursor->mode != 5) {
            result = 0;
        }
    }
    return result;
}

}

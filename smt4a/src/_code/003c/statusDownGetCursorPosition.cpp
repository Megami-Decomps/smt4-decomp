#include "common.h"

extern "C" {

typedef struct StatusCursor {
    u8 data[0x12A];
} StatusCursor;

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x5EC];
    /* 0x5EC */ StatusCursor cursor;
} StatusDown;

extern StatusDown *g_statusDown;

extern s32 FUN_002a4894(StatusCursor *cursor);

/* Returns the status screen cursor's position, or -1 when the screen does not exist. */
s32 statusDownGetCursorPosition(void)
{
    if (g_statusDown == NULL) {
        return -1;
    }
    return FUN_002a4894(&g_statusDown->cursor);
}

} /* extern "C" */

#include "common.h"

extern "C" {

typedef struct Cursor {
    /* 0x00 */ u16 *current;
    /* 0x04 */ u16 *end;
} Cursor;

/* Appends `value` at the cursor (a 16-bit output position) unless the end has been reached. */
void cursorPushU16(u16 value, Cursor *cursor)
{
    u16 *current;
    u16 *end = cursor->end;

    current = cursor->current;
    if (current < end) {
        cursor->current = current + 1;
        *current = value;
    }
}

} /* extern "C" */

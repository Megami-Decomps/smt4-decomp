#include "common.h"

extern "C" {

typedef struct BitCursor {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 byteIndex;
    /* 0x10 */ s32 bitIndex;     /* counts down from 7 (most significant bit first) */
} BitCursor;

/* Returns the cursor's position as a bit number. */
s32 bitCursorGetPosition(BitCursor *cursor)
{
    return cursor->byteIndex * 8 + (7 - cursor->bitIndex);
}

} /* extern "C" */

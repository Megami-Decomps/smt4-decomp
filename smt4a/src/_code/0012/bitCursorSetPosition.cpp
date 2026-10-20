#include "common.h"

extern "C" {

typedef struct BitCursor {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 byteIndex;
    /* 0x10 */ u32 bitIndex;     /* counts down from 7 (most significant bit first) */
} BitCursor;

/* Positions the cursor at bit number `bitPosition` of the stream. */
void bitCursorSetPosition(BitCursor *cursor, u32 bitPosition)
{
    cursor->byteIndex = bitPosition >> 3;
    cursor->bitIndex = 7 - (bitPosition & 7);
}

} /* extern "C" */

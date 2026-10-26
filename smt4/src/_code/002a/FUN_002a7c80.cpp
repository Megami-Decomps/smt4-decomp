/* NON_MATCHING: retail loads the byte into r3 instead of reusing the source register r1. */
#include "common.h"

struct Value5 {
    /* 0x00 */ u32 word;
    /* 0x04 */ u8 byte;
};

/* Copies the five-byte value. */
extern "C" void FUN_002a7c80(Value5 *dest, const Value5 *src)
{
    dest->word = src->word;
    dest->byte = src->byte;
}

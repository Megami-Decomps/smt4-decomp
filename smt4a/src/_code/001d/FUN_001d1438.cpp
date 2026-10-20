/* NON_MATCHING: register choice only: retail uses r3 for the halfword temp (built reuses r1) */
/* Copies the 6-byte value (word plus halfword) from `src` to `dest`. */
#include "common.h"

extern "C" {

typedef struct Value6 {
    /* 0x00 */ u32 word;
    /* 0x04 */ u16 half;
} Value6;

void FUN_001d1438(Value6 *dest, const Value6 *src)
{
    dest->word = src->word;
    dest->half = src->half;
}

}

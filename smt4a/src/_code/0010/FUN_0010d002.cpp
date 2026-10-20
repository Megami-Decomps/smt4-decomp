#include "common.h"

extern "C" {

typedef struct ValuePair {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u8 valid;
} ValuePair;

/* Fills the pair from the two values and marks it valid. */
void FUN_0010d002(ValuePair *pair, u32 *first, u32 *second)
{
    pair->first = *first;
    pair->second = *second;
    pair->valid = 1;
}

} /* extern "C" */

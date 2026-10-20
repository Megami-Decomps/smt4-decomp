#include "common.h"

extern "C" {

typedef struct Range {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 first;
    /* 0x4C */ u32 second;
} Range;

/* Sets the two words at 0x48 and 0x4C (the second from `*secondRef`). */
void FUN_00111644(Range *range, u32 first, u32 *secondRef)
{
    range->first = first;
    range->second = *secondRef;
}

} /* extern "C" */

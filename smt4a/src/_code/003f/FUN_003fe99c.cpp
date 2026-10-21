/* NON_MATCHING: zero stores use r1 instead of retail's r3. */
#include "common.h"

struct FourValues {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 first;
    /* 0x18 */ u32 second;
    /* 0x1C */ u8 unk1C[8];
    /* 0x24 */ u32 third;
    /* 0x28 */ u32 fourth;
};

/* Clears the four stored values. */
extern "C" void FUN_003fe99c(FourValues *values)
{
    values->first = 0;
    values->second = 0;
    values->third = 0;
    values->fourth = 0;
}

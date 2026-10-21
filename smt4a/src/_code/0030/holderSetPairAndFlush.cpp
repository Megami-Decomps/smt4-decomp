#include "common.h"

extern "C" {

void FUN_00310f64(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 first;
    /* 0x14 */ u32 second;
} Holder;

/* Stores the two values at 0x10 and 0x14, then runs FUN_00310f64. */
void holderSetPairAndFlush(Holder *object, u32 unused, u32 first, u32 second)
{
    object->second = second;
    object->first = first;
    FUN_00310f64();
}

} /* extern "C" */

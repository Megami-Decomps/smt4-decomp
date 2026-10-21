#include "common.h"

extern "C" {

extern u8 DAT_004ead80[];
extern void FUN_00148518(void *record);
extern void FUN_002c66c4(void *array, void (*initialize)(void *), u32 stride, u32 count);

/* Initializes the static array of twelve-byte records. */
void FUN_001383f0(void)
{
    FUN_002c66c4(DAT_004ead80, FUN_00148518, 12, 128);
}

} /* extern "C" */

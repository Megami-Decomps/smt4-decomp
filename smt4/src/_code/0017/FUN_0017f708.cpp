#include "common.h"

extern "C" {

extern u8 DAT_004e5290[];
extern void FUN_003576d8(void *record);
extern void FUN_002c66c4(void *array, void (*initialize)(void *), u32 stride, u32 count);

/* Initializes the static array of four-byte records. */
void FUN_0017f708(void)
{
    FUN_002c66c4(DAT_004e5290, FUN_003576d8, 4, 3);
}

} /* extern "C" */

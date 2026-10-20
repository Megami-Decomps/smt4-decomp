#include "common.h"

extern "C" {

typedef struct Global005821c4 {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 value;
} Global005821c4;
extern Global005821c4 DAT_005821c4;

/* Stores `value` in the u32 at 0x28 of the global at 0x5821c4. */
void FUN_002ddda4(u32 value)
{
    DAT_005821c4.value = value;
}

} /* extern "C" */

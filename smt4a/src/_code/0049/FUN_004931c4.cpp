#include "shard/Shard0049.h"

extern "C" {

typedef struct WordInt {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 value;
} WordInt;

extern WordInt DAT_00587fdc;

u8 FUN_004931c4(void)
{
    return DAT_00587fdc.value > 100;
}

} /* extern "C" */

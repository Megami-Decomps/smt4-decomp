#include "common.h"

extern "C" {

typedef struct Work {
    /* 0x000 */ u8 unk000[0xE8C];
    /* 0xE8C */ u8 value;
} Work;

extern Work *DAT_0043e278;

void FUN_0024ac7c(u8 value)
{
    DAT_0043e278->value = value;
}

} /* extern "C" */

#include "common.h"

extern "C" {
extern u8 DAT_004def48[];

u8 *FUN_002bcf10(s32 index)
{
    return &DAT_004def48[index * 0x60];
}
}

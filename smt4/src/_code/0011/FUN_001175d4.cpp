#include "common.h"

extern "C" {

extern struct {
    u8 unk000[0x1E6];
    u8 unk1E6;
} DAT_004c5634;

void FUN_001175d4(u8 value)
{
    DAT_004c5634.unk1E6 = value;
}

} /* extern "C" */

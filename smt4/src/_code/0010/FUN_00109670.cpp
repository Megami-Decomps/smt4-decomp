#include "common.h"

extern "C" {

extern struct {
    u8 unk000[0x1E5];
    u8 unk1E5;
} DAT_004c5634;

void FUN_00109670(u8 value)
{
    DAT_004c5634.unk1E5 = value;
}

} /* extern "C" */

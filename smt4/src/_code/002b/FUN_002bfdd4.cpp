#include "common.h"

extern "C" {

extern struct {
    u8 unk000[0x1E4];
    u8 unk1E4;
    u8 unk1E5;
} DAT_004c5634;

u8 FUN_002bfdd4(void)
{
    return DAT_004c5634.unk1E4;
}

} /* extern "C" */

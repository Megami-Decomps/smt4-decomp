#include "common.h"

extern "C" {

extern struct {
    u8 unk000[0x240];
    u32 unk240;
} DAT_004bce8c;

u32 FUN_002ef868(void)
{
    return DAT_004bce8c.unk240;
}

} /* extern "C" */

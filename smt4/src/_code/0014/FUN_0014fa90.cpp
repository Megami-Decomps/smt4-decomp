#include "common.h"

extern "C" {

extern struct {
    u8 unk000[0x32C];
    u32 unk32C;
} DAT_004e7f64;

u32 FUN_0014fa90(void)
{
    return DAT_004e7f64.unk32C;
}

} /* extern "C" */

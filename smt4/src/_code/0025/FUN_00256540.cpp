#include "common.h"

extern "C" {

extern struct {
    u8 unk00[0x18];
    u32 unk18;
} DAT_00446db0;

u32 FUN_00256540(void)
{
    return DAT_00446db0.unk18;
}

} /* extern "C" */

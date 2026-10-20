#include "common.h"

extern "C" {

extern struct {
    u8 unk00[0x6C];
    u8 unk6C;
} DAT_004d4680;

u8 FUN_002cc22c(void)
{
    return DAT_004d4680.unk6C;
}

} /* extern "C" */

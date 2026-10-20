#include "common.h"

extern "C" {

extern struct {
    u8 unk00[0x10];
    u32 unk10;
} DAT_004651e8;

u32 FUN_001db8fc(void)
{
    return DAT_004651e8.unk10;
}

} /* extern "C" */

#include "common.h"

extern "C" {

extern struct {
    u8 unk00[3];
    u8 unk03;
} DAT_00473888;

u8 FUN_001395c4(void)
{
    return DAT_00473888.unk03;
}

} /* extern "C" */

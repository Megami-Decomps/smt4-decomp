#include "common.h"

extern "C" {

extern struct {
    u8 unk00[0xF8];
    s8 unkF8;
} DAT_0049fb1c;

s32 FUN_00287304(void)
{
    return DAT_0049fb1c.unkF8;
}

} /* extern "C" */

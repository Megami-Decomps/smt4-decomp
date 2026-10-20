#include "common.h"

extern "C" {

extern struct {
    u8 unk0;
    s8 unk1;
} DAT_0044e458;

s32 FUN_002bb274(void)
{
    return DAT_0044e458.unk1;
}

} /* extern "C" */

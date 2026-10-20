#include "common.h"

extern "C" {

extern struct {
    u8 unk0[4];
    u32 unk4;
} DAT_00472a38;

void FUN_00358d24(u32 value)
{
    DAT_00472a38.unk4 = value;
}

} /* extern "C" */

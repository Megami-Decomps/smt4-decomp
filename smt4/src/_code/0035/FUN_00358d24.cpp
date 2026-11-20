#include "common.h"

extern "C" {

extern struct {
    u8 unk0[4];
    u32 unk4;
} g_handlerRefForward;

void FUN_00358d24(u32 value)
{
    g_handlerRefForward.unk4 = value;
}

} /* extern "C" */

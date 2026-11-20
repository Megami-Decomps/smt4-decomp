#include "common.h"

extern "C" {

extern struct {
    u8 unk00[0x10];
    u32 unk10;
} g_processResultState;

u32 FUN_001db8fc(void)
{
    return g_processResultState.unk10;
}

} /* extern "C" */

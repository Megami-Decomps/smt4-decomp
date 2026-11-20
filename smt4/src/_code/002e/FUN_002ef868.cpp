#include "common.h"

extern "C" {

extern struct {
    u8 unk000[0x240];
    u32 unk240;
} g_asdMdlBankSet;

u32 FUN_002ef868(void)
{
    return g_asdMdlBankSet.unk240;
}

} /* extern "C" */

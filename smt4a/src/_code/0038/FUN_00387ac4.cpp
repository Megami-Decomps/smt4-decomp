#include "shard/Shard0038.h"

extern "C" {

extern ScreenRef g_buttonHelp;

void FUN_00387ac4(u8 value)
{
    g_buttonHelp.instance->unk5EA = value;
}

} /* extern "C" */

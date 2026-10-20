#include "shard/Shard0034.h"

extern "C" {

extern ScreenRef g_buttonHelp;

void FUN_00342334(u8 value)
{
    g_buttonHelp.instance->unk5E0 = value;
}

} /* extern "C" */

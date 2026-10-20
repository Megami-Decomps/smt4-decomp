#include "shard/Shard0031.h"

extern "C" {

extern ScreenRef g_buttonHelp;

void FUN_00318df4(u8 value)
{
    g_buttonHelp.instance->unk67C = value;
}

} /* extern "C" */

#include "shard/Shard0034.h"

extern "C" {

extern ScreenRef g_buttonHelp;

void FUN_003423cc(u16 value)
{
    if (g_buttonHelp.instance != NULL) {
        g_buttonHelp.instance->unk5E6 = value;
    }
}

} /* extern "C" */

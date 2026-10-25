#include "ui/ButtonHelp.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

void FUN_00290d5c(u8 value)
{
    if (g_buttonHelp.work != NULL) {
        g_buttonHelp.work->unk4C9 = value;
    }
}

} /* extern "C" */

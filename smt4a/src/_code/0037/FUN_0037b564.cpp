#include "ui/ButtonHelp.h"
#include "shard/Shard0037.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

u8 FUN_0037b564(void)
{
    return g_buttonHelp.work->unk5E4;
}

} /* extern "C" */

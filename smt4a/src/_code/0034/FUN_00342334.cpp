#include "ui/ButtonHelp.h"
#include "shard/Shard0034.h"
#include "event/eventCommand.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

void FUN_00342334(u8 value)
{
    g_buttonHelp.work->unk5E0 = value;
}

} /* extern "C" */

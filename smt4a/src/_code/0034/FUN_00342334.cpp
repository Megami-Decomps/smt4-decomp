#include "ui/ButtonHelpGlobal.h"
#include "shard/Shard0034.h"
#include "event/eventCommand.h"

extern "C" {

void FUN_00342334(u8 value)
{
    g_buttonHelp.work->drawEnabled = value;
}

} /* extern "C" */

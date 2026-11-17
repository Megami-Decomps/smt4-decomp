#include "ui/ButtonHelpGlobal.h"
#include "shard/Shard0038.h"

extern "C" {

void buttonHelpSetMode(u8 value)
{
    g_buttonHelp.work->mode = value;
}

} /* extern "C" */

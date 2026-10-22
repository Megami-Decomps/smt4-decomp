#include "ui/ButtonHelp.h"
#include "shard/Shard0038.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

void buttonHelpSetMode(u8 value)
{
    g_buttonHelp.work->mode = value;
}

} /* extern "C" */

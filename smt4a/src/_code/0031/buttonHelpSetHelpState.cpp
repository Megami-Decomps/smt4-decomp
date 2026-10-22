#include "ui/ButtonHelp.h"
#include "shard/Shard0031.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

void buttonHelpSetHelpState(u8 value)
{
    g_buttonHelp.work->helpState = value;
}

} /* extern "C" */

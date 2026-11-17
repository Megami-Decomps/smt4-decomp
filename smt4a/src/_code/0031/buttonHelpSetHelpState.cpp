#include "ui/ButtonHelpGlobal.h"
#include "shard/Shard0031.h"

extern "C" {

void buttonHelpSetHelpState(u8 value)
{
    g_buttonHelp.work->helpState = value;
}

} /* extern "C" */

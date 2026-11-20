#include "ui/ButtonHelpGlobal.h"
#include "shard/Shard0038.h"

extern "C" {

void buttonHelpSetTextVisible(u8 value)
{
    g_buttonHelp.work->textVisible = value;
}

} /* extern "C" */

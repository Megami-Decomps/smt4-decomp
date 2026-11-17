#include "ui/ButtonHelpGlobal.h"
#include "shard/Shard0034.h"

extern "C" {

void buttonHelpSetSelectedId(u16 value)
{
    if (g_buttonHelp.work != NULL) {
        g_buttonHelp.work->selectedId = value;
    }
}

} /* extern "C" */

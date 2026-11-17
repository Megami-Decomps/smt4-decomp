#include "ui/ButtonHelpGlobal.h"
#include "bible/bibleLegionDraw.h"

extern "C" {

/* Returns the button help's previous preset, or 0 when there is no button help. */
u8 buttonHelpGetMode(void)
{
    if (g_buttonHelp.work == NULL) {
        return 0;
    }
    return g_buttonHelp.work->previousPreset;
}

} /* extern "C" */

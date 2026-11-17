#include "ui/ButtonHelpGlobal.h"

extern "C" {

/* The button help's current preset, or 0 without a button help. */
u16 ifTouchGetButtonHelpValue(void)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    if (work != NULL) {
        return work->preset;
    }
    return 0;
}
}

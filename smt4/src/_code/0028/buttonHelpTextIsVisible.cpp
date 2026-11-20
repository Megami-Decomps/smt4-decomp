#include "ui/ButtonHelpGlobal.h"

extern "C" {

/* Reads the current signed status byte. */
s32 buttonHelpTextIsVisible(void)
{
    return g_buttonHelp.work->textVisible;
}
}

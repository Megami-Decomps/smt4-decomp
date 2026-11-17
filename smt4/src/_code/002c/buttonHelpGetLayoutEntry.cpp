#include "ui/ButtonHelpGlobal.h"

extern "C" {

/* Address of help text line `index`. */
int buttonHelpGetLayoutEntry(int index)
{
    ButtonHelpWork *work = g_buttonHelp.work;

    return (int)&work->text.lines[index];
}

} /* extern "C" */

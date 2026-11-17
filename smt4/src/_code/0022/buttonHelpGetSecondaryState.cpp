#include "ui/ButtonHelpGlobal.h"
extern "C" {
/* Read whether the help line shows the directory text. */
s8 buttonHelpGetSecondaryState(void) { return g_buttonHelp.work->text.useDirectoryText; }
}

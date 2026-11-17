#include "ui/ButtonHelpGlobal.h"
/* Reads the button-help panel state. */
extern "C" s32 buttonHelpGetPanelState(void) { return g_buttonHelp.work->text.useDirectoryText; }

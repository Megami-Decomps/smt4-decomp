#include "ui/ButtonHelpGlobal.h"
/* Reads the button-help panel state. */
extern "C" s32 buttonHelpGetPanelMode(void) { return g_buttonHelp.work->textVisible; }

#include "ui/ButtonHelp.h"
extern "C" ButtonHelpGlobalsA g_buttonHelp;
/* Reads the button-help panel state. */
extern "C" s32 buttonHelpGetPanelMode(void) { return g_buttonHelp.work->mode; }

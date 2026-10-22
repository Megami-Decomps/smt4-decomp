#include "ui/ButtonHelp.h"
extern "C" ButtonHelpGlobalsA g_buttonHelp;
/* Reads the button-help panel state. */
extern "C" s32 FUN_00318dc4(void) { return g_buttonHelp.work->panelState; }

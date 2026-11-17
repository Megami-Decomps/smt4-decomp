#include "ui/ButtonHelpGlobal.h"
extern "C" {
/* Read the signed button-help panel state byte. */
s8 buttonHelpGetState(void) { return g_buttonHelp.work->panelState; }
}

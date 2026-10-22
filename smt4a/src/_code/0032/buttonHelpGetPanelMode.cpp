#include "shard/W5_W5Match6_UiState.h"
/* Reads the button-help panel state. */
extern "C" s32 buttonHelpGetPanelMode(void) { return g_buttonHelp.work->panel.mode; }

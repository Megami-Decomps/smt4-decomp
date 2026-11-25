#ifndef SMT4_STATUS_STATUS_MENU_MODE_H
#define SMT4_STATUS_STATUS_MENU_MODE_H

#include "common.h"

/* Selects the status menu mode and resets tab transitions when leaving either fusion mode. */
extern "C" void menuSetModeAndResetTransitions(u8 mode);
/* Starts applying the selected mode and tab to the status screen. */
extern "C" void statusDownRestoreTabForMode();

#endif

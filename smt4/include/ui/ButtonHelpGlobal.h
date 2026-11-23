/* IV's g_buttonHelp (ui/ButtonHelp.h has both games' layouts; Apocalypse's extern is its own ButtonHelpGlobal.h). */
#ifndef UI_BUTTONHELPGLOBAL_H
#define UI_BUTTONHELPGLOBAL_H
#include "ui/ButtonHelp.h"

extern "C" ButtonHelpGlobals g_buttonHelp;
/* The slot selections queued while the slot animations run (-1: none), defined with buttonHelpSetSlot. */
extern "C" s32 g_buttonHelpQueuedKinds[6]; /* kinds */
extern "C" s32 g_buttonHelpQueuedValues[6]; /* values */

#endif

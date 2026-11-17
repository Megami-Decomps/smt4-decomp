#include "Terminal/tmnlMain.h"
#include "Terminal/TerminalGlobals.h"

extern "C" {

extern TerminalGlobals g_tmnl;

/* Returns whether the terminal has a saved selection. */
u8 tmnlHasSelection(void)
{
    if (g_tmnl.selection < 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

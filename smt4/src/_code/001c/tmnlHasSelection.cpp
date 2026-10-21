#include "Terminal/tmnlMain.h"

struct TerminalGlobals {
    /* 0x00 */ TmnlWork *work;
    /* 0x04 */ s32 selection;
};

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

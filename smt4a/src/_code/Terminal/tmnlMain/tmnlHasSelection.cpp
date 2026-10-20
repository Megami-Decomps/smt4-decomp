/* Returns nonzero when the terminal has a saved selection (the value is not -1). */
#include "common.h"
#include "Terminal/tmnlMain.h"

extern "C" {

extern TmnlGlobalsA g_tmnl;

u8 tmnlHasSelection(void)
{
    if (g_tmnl.selection < 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

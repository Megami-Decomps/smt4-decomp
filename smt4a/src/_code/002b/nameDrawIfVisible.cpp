#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern NameCallbackGlobals g_name;
void FUN_00485718(void *drawing);

/* Draw the name entry when its visibility flag is one. */
s32 nameDrawIfVisible(void)
{
    if (g_name.work->visible == 1) {
        FUN_00485718(g_name.work->drawing);
    }
    return 0;
}

}

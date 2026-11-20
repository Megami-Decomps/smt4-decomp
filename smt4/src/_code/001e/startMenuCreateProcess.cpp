#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
s32 sequenceSelectorHandleInput(u32 handle);
extern s32 g_startMenuProcessGroup;        /* process group the start menu runs in */
extern void (*g_startMenuPostHook)();  /* optional hook run after the menu starts */

// Start the menu process, then invoke the optional start callback.
void startMenuCreateProcess()
{
    s32 *group = &g_startMenuProcessGroup;

    asdProcessCreateSimple((const s8*)"StartMenu", *group, 0, 0, sequenceSelectorHandleInput, NULL, 0);
    if (g_startMenuPostHook != NULL) {
        g_startMenuPostHook();
    }
}
}

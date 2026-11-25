#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "title/SequenceSelector.h"

extern "C" {
extern void (*g_startMenuPostHook)();  /* optional hook run after the menu starts */

/* Starts the menu process, then invokes its optional start callback. */
void startMenuCreateProcess()
{
    s32 *group = &g_startMenuProcessGroup.processGroup;

    asdProcessCreateSimple((const s8*)"StartMenu", *group, 0, 0, sequenceSelectorHandleInput, NULL, 0);
    if (g_startMenuPostHook != NULL) {
        g_startMenuPostHook();
    }
}
}

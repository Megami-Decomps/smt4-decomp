#include "title/titleMain.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

extern TitleMain *g_titleMain;

/* Request closure of the title work and tell the debug hook about its active subobject. */
s32 FUN_0021f468(u32 handle)
{
    TitleMain *title = g_titleMain;
    title->freeOnEnd = 1;
    void *target = title;
    if (title->trace.usesSubobject != 0)
        target = title->trace.subobject;
    asdDebugHookPtr(target);
    return 0;
}

} /* extern "C" */

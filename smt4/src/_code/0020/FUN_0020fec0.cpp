#include "title/titleMain.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {
extern TitleMain *g_titleMain;

s32 FUN_0020fec0(u32 handle)
{
    TitleMain *title = g_titleMain;
    title->freeOnEnd = 1;
    void *target = title;
    if (title->trace.usesSubobject != 0)
        target = title->trace.subobject;
    asdDebugHookPtr(target);
    return 0;
}
}

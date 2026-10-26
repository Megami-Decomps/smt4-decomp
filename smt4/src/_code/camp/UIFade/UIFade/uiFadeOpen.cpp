/* Opens the fade overlay: the first open creates its task and draw tasks; every open counts. */
#include "common.h"
#include "camp/UIFade/UIFade.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

typedef void (*VoidFunc)(void);

u32 taskCreateDraw(const char *name, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6, u32 parent);
void uiFadeUpdateAlpha(void);
void uiFadeJobDraw(void);

extern UIFadeGlobals g_uiFade;

void uiFadeOpen(void)
{
    UIFadeWork *fade;

    if (g_uiFade.users <= 0) {
        if (g_uiFade.work == NULL) {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\UIFade\\UIFade.cpp", 120);
            g_uiFade.work = (UIFadeWork *)asdMemAlloc(0x100, 0x100, 0, 0x14, 1);
        }
        fade = g_uiFade.work;
        fade->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("UIFade Calc"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(uiFadeUpdateAlpha), 0, 0);
        taskCreateDraw("UIFade DrawLeft", 0x7c, 0, 0, uiFadeJobDraw, 0, 0, fade->task);
        taskCreateDraw("UIFade DrawRight", 0xda, 0, 0, uiFadeJobDraw, 0, 0, fade->task);
    }
    fade = g_uiFade.work;
    fade->mode = 0;
    fade->visible = 1;
    g_uiFade.users++;
}

} /* extern "C" */

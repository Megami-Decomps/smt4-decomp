/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Opens the fade overlay: the first open creates its task and draw tasks; every open counts. */
#include "common.h"
#include "camp/UIFade/UIFade.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

typedef void (*VoidFunc)(void);

u32 taskCreateDraw(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6, u32 parent);
void *asdMemoryAllocTracked(int heap, int align, int arg2, int size, int arg4);
void LAB_0020a134(void);
void LAB_0022e98c(void);
void LAB_002c8714(void);
void LAB_002c8724(void);
void LAB_002c8734(void);

extern UIFadeGlobals g_uiFade;

void uiFadeOpen(void)
{
    UIFadeWork *fade;

    if (g_uiFade.users <= 0) {
        if (g_uiFade.work == NULL) {
            g_uiFade.work = (UIFadeWork *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x14, 1);
        }
        fade = g_uiFade.work;
        fade->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>(LAB_002c8714), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(LAB_0020a134), 0, 0);
        taskCreateDraw(LAB_002c8724, 0x80, 0, 0, LAB_0022e98c, 0, 0, fade->task);
        taskCreateDraw(LAB_002c8734, 0xdc, 0, 0, LAB_0022e98c, 0, 0, fade->task);
    }
    fade = g_uiFade.work;
    fade->mode = 0;
    fade->visible = 1;
    g_uiFade.users++;
}

} /* extern "C" */

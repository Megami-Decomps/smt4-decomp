/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Opens the fade overlay: the first open creates its task and draw tasks; every open counts. */
#include "common.h"
#include "camp/UIFade/UIFade.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

typedef void (*VoidFunc)(void);

u32 taskCreateDraw(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6, u32 parent);
void *asdMemAlloc(int heap, int align, int arg2, int size, int arg4);
void LAB_001908e8(void);
void LAB_001a6d6c(void);
void LAB_002035dc(void);
void LAB_002035ec(void);
void LAB_002035fc(void);

extern UIFadeGlobals g_uiFade;

void uiFadeOpen(void)
{
    UIFadeWork *fade;

    if (g_uiFade.users <= 0) {
        if (g_uiFade.work == NULL) {
            g_uiFade.work = (UIFadeWork *)asdMemAlloc(0x100, 0x100, 0, 0x14, 1);
        }
        fade = g_uiFade.work;
        fade->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>(LAB_002035dc), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(LAB_001908e8), 0, 0);
        taskCreateDraw(LAB_002035ec, 0x7c, 0, 0, LAB_001a6d6c, 0, 0, fade->task);
        taskCreateDraw(LAB_002035fc, 0xda, 0, 0, LAB_001a6d6c, 0, 0, fade->task);
    }
    fade = g_uiFade.work;
    fade->mode = 0;
    fade->visible = 1;
    g_uiFade.users++;
}

} /* extern "C" */

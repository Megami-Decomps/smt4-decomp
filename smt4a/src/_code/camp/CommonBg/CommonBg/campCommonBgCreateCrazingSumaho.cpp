/* NON_MATCHING: allocation debug trace recovered; native work zero/scale initialization grouping differs. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"

union CommonBgFlags { u32 raw; struct { u8 first, second, unk02[2]; } bytes; };
struct CrazingBackgroundWork {
    u32 process;
    CommonBgFlags appearance;
    u32 unk08;
    f32 x, y, scaleX, scaleY;
    CommonBgFlags visibility;
};
struct CommonBgCreateGlobals { u8 unk00[2]; u8 references; u8 unk03[9]; CrazingBackgroundWork *work; };
extern "C" {
extern CommonBgCreateGlobals g_commonBg;
extern const char DAT_0052c828[];
extern const char DAT_0052c810[];
extern const char DAT_0052c7d8[];
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 pool, u32 size, u32 flags);
s32 FUN_0039a7ac(u32 process);
s32 FUN_003bab24(u32 process);
u32 asdProcessCreateSimple(const char *name, s32 group, u32 flags, AsdProcFunc start, AsdProcUpdateFunc update, AsdProcFunc end, void *work);
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, AsdProcFunc start, AsdProcUpdateFunc update, AsdProcFunc end, void *work, u32 parent);

// Acquire the phone background, creating its calculation and draw processes on the first reference.
void campCommonBgCreateCrazingSumaho()
{
    if (g_commonBg.references == 0) {
        if (!g_commonBg.work) {
            asdDebugTrace(DAT_0052c7d8, 0x72a);
            g_commonBg.work = (CrazingBackgroundWork *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(CrazingBackgroundWork), 1);
        }
        CrazingBackgroundWork *work = g_commonBg.work;
        *work = CrazingBackgroundWork();
        work->process = asdProcessCreateSimple(DAT_0052c828, 4, 0, NULL, FUN_0039a7ac, NULL, NULL);
        taskCreateDraw(DAT_0052c810, 238, 0, NULL, FUN_003bab24, NULL, NULL, work->process);
        work->x = 0.0f;
        work->y = 0.0f;
        work->scaleX = 0.8f;
        work->scaleY = 0.8f;
        work->appearance.bytes.first = 0;
        work->appearance.bytes.second = 0;
        work->visibility.bytes.first = 0;
        work->visibility.bytes.second = 0;
    }
    ++g_commonBg.references;
}
}

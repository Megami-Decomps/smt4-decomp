/* NON_MATCHING: retail formats through a post-incremented work pointer and interleaves the inline labels with its literal pool; this reconstruction schedules stores and literals differently. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct DebugBackgroundWork {
    u32 process; // 0x00
    u8 visible; // 0x04
    u8 unk05[3];
    u32 texture; // 0x08
    u32 frame; // 0x0c
    char buildLabel[0xf0]; // 0x10
};
extern "C" {
extern DebugBackgroundWork *DAT_0044e2e8;
extern const char DAT_00407dfa[];
void *asdMemAlloc(u32 bytes, u32 alignment, u32 flags, u32 heap, u32 option);
void textFormatBuffer(char *output, const char *format, ...);
void titleDbgBgDestroy();
void FUN_001251d8();
void FUN_00125e64();
u32 asdProcessCreateSimple(const char *name, u32 group, void (*start)(), void (*update)(), void (*auxiliary)(), void (*end)(), u32 flags);
u32 taskCreateDraw(const char *name, u32 priority, void (*update)(), void (*phase0)(), void (*draw)(), void (*end)(), u32 flags, u32 process);
}

// Allocate the debug background and register its process and drawing task.
extern "C" void FUN_0011817c()
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\title\\titleDbgBg.cpp", 56);
    DebugBackgroundWork *work = static_cast<DebugBackgroundWork *>(asdMemAlloc(0x100, 0x100, 0, 0x90, 1));
    DAT_0044e2e8 = work;
    work->texture = 0;
    work->frame = 0;
    textFormatBuffer(work->buildLabel, "%s %s", DAT_00407dfa - 12, DAT_00407dfa);
    work->visible = 0;
    work->process = asdProcessCreateSimple("TBG C", 2, NULL, NULL, FUN_001251d8, titleDbgBgDestroy, 0);
    taskCreateDraw("TBG U", 0x73, NULL, NULL, FUN_00125e64, NULL, 0, work->process);
}

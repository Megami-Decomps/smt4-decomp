/* NON_MATCHING: allocation publication and 0x90-byte work extent recovered; process packet cursor uses r0 rather than retail ip. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

struct DebugBackgroundWork {
    u32 process; // 0x00
    u8 visible; // 0x04
    u8 unk05[3];
    u32 texture; // 0x08
    u32 frame; // 0x0c
    char buildLabel[0x80]; // 0x10
};
typedef char DebugBackgroundWorkSizeCheck[sizeof(DebugBackgroundWork) == 0x90 ? 1 : -1];
extern "C" {
extern DebugBackgroundWork *DAT_0044e2e8;
extern const char DAT_00407dfa[];
void textFormatBuffer(char *output, const char *format, ...);
void titleDbgBgDestroy();
void FUN_001251d8();
void FUN_00125e64();
u32 asdProcessCreateSimple(const char *name, s32 group, s32 priority, s32 flags,
                          void (*update)(), void (*destroy)(), void *data);
u32 taskCreateDraw(const char *name, s32 group, s32 priority, s32 flags,
                   void (*draw)(), void (*destroy)(), void *data, u32 parent);
}

// Allocate the debug background and register its process and drawing task.
extern "C" void FUN_0011817c()
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\title\\titleDbgBg.cpp", 56);
    DAT_0044e2e8 = static_cast<DebugBackgroundWork *>(asdMemAlloc(0x100, 0x100, 0, 0x90, 1));
    DebugBackgroundWork *work = DAT_0044e2e8;
    work->texture = 0;
    work->frame = 0;
    textFormatBuffer(work->buildLabel, "%s %s", DAT_00407dfa - 12, DAT_00407dfa);
    work->visible = 0;
    work->process = asdProcessCreateSimple("TBG C", 2, 0, 0, FUN_001251d8, titleDbgBgDestroy, NULL);
    taskCreateDraw("TBG U", 0x73, 0, 0, FUN_00125e64, NULL, NULL, work->process);
}

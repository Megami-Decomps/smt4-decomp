#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"

/* The label the debug background shows and its frame. */
struct DebugBackgroundLabel {
    u32 frame; // 0x00
    char text[0x80]; // 0x04
};

struct DebugBackgroundWork {
    u32 process; // 0x00
    u8 visible; // 0x04
    u8 unk05[3];
    u32 texture; // 0x08
    DebugBackgroundLabel label; // 0x0c
};
typedef char DebugBackgroundWorkSizeCheck[sizeof(DebugBackgroundWork) == 0x90 ? 1 : -1];
extern "C" {
extern DebugBackgroundWork *DAT_0044e2e8;
void titleDbgBgDestroy();
void FUN_001251d8();
void FUN_00125e64();
u32 taskCreateDraw(const char *name, s32 group, s32 priority, s32 flags,
                   void (*draw)(), void (*destroy)(), void *data, u32 parent);
}

/* The build's __DATE__ and __TIME__. */
static const char s_buildDate[] = "Jun 10 2013";
static const char s_buildTime[] = "14:15:50";

// Allocate the debug background and register its process and drawing task.
extern "C" void titleDbgBgCreate()
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\title\\titleDbgBg.cpp", 56);
    DAT_0044e2e8 = static_cast<DebugBackgroundWork *>(asdMemAlloc(0x100, 0x100, 0, 0x90, 1));
    DAT_0044e2e8->texture = 0;
    DebugBackgroundWork *work = DAT_0044e2e8;
    DebugBackgroundLabel *label = &DAT_0044e2e8->label;
    label->frame = 0;
    textFormatBuffer(label->text, "%s %s", s_buildDate, s_buildTime);
    work->visible = 0;
    work->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("TBG C"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_001251d8), reinterpret_cast<AsdProcFunc>(titleDbgBgDestroy), NULL);
    taskCreateDraw("TBG U", 0x73, 0, 0, FUN_00125e64, NULL, NULL, work->process);
}

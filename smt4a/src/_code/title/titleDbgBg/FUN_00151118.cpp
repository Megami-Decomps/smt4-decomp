/* NON_MATCHING: Debug title background allocation/jobs are reconstructed; allocation-result and callback-pointer register allocation/pool ordering differ. */
#include <stddef.h>
#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct TitleDebugBackground {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 freeOnEnd;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 state;
    /* 0x0C */ u32 mode;
    /* 0x10 */ char display[0x80];
};
struct BuildStamp {
    char date[12];
    char time[9];
};
extern "C" {
extern TitleDebugBackground *DAT_00589168;
extern const char DAT_00536c58[];
void *asdMemoryAllocTracked(u32 kind, u32 alignment, u32 flags, u32 size, s32 tracked);
void textFormatBuffer(char *destination, const char *format, ...);
void taskRunInitializationState();
void titleDbgBgFree();
u32 titleDbgBgDraw();
u32 asdProcessCreateSimple(const char *name, u32 priority, u32 arg2, u32 arg3,
                           void (*start)(), void (*finish)(), u32 arg6);
u32 taskCreateDraw(const char *name, u32 priority, u32 arg2, u32 arg3,
                    u32 (*draw)(), u32 arg5, u32 arg6, u32 owner);
}

/* Create the debug title background and its update/draw jobs. */
extern "C" void FUN_00151118()
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\title\\titleDbgBg.cpp", 75);
    TitleDebugBackground *background = static_cast<TitleDebugBackground *>(
        asdMemoryAllocTracked(256, 256, 0, sizeof(TitleDebugBackground), 1));
    DAT_00589168 = background;
    background->state = 0;
    background->mode = 0;
    const BuildStamp *stamp = reinterpret_cast<const BuildStamp *>(
        DAT_00536c58 - offsetof(BuildStamp, time));
    textFormatBuffer(background->display, "%s %s", stamp->date, stamp->time);
    background->freeOnEnd = 0;
    background->job = asdProcessCreateSimple("TBG C", 4, 0, 0,
                                            taskRunInitializationState, titleDbgBgFree, 0);
    taskCreateDraw("TBG U", 0x75, 0, 0, titleDbgBgDraw, 0, 0, background->job);
}

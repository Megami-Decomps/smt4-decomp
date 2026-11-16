#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"

/* The text the debug background shows and how. */
struct TitleDebugText {
    /* 0x00 */ u32 mode;
    /* 0x04 */ char display[0x80];
};

struct TitleDebugBackground {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 freeOnEnd;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 state;
    /* 0x0C */ TitleDebugText text;
};
extern "C" {
extern TitleDebugBackground *g_titleDbgBg;
void taskRunInitializationState();
void titleDbgBgFree();
u32 titleDbgBgDraw();
u32 taskCreateDraw(const char *name, u32 priority, u32 arg2, u32 arg3,
                    u32 (*draw)(), u32 arg5, u32 arg6, u32 owner);
}

/* The build's __DATE__ and __TIME__. */
static const char s_buildDate[] = "May 11 2016";
static const char s_buildTime[] = "15:06:54";

/* Create the debug title background and its update/draw jobs. */
extern "C" void titleDbgBgCreate()
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\title\\titleDbgBg.cpp", 75);
    g_titleDbgBg = static_cast<TitleDebugBackground *>(
        asdMemoryAllocTracked(256, 256, 0, sizeof(TitleDebugBackground), 1));
    g_titleDbgBg->state = 0;
    TitleDebugBackground *background = g_titleDbgBg;
    TitleDebugText *text = &g_titleDbgBg->text;
    text->mode = 0;
    textFormatBuffer(text->display, "%s %s", s_buildDate, s_buildTime);
    background->freeOnEnd = 0;
    background->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("TBG C"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(taskRunInitializationState), reinterpret_cast<AsdProcFunc>(titleDbgBgFree), 0);
    taskCreateDraw("TBG U", 0x75, 0, 0, titleDbgBgDraw, 0, 0, background->job);
}

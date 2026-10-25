#include "camp/CommonBg.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

extern "C" {
extern CommonBgGlobals g_commonBg;
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
u32 spriteHandleCreate(u32);
void asdTextFormatStream(u32, s32, u32, s32, s32, const char *);
void asdTMTexTableLoadSprites(u32);
void FUN_0014afd0(u32, s32);
s32 FUN_0031a5e4(u32 process);
s32 FUN_0036dff4(u32 process);
void ref208Destroy(u32 process);
u32 taskCreateDraw(const char *, s32, u16, u16, s32 (*)(u32), void (*)(u32), CommonBgState *, u32);

// Create the common camp background's text sprites and its calculation/drawing jobs.
void campCreateCommonBackground(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CommonBg\\CommonBg.cpp", 1646);
    CommonBgState *work = static_cast<CommonBgState *>(asdMemoryAlloc(0x100, 0x100, 0, 0x24, 1));
    memset(work, 0, sizeof(*work));
    g_commonBg.work = work;
    work->titleSprite = spriteHandleCreate(0);
    asdTextFormatStream(work->titleSprite, 2, 0xFFFFFFFF, 0, 0,
        "\x82\x64\x82\x8e\x82\x87\x82\x81\x82\x87\x82\x85");
    work->promptSprite = spriteHandleCreate(0);
    asdTextFormatStream(work->promptSprite, 2, 0xFFFFFFFF, 0, 0,
        "\x82\x6f\x82\x8c\x82\x85\x82\x81\x82\x93\x82\x85\x81\x40\x82\x94\x82\x8f\x82\x95\x82\x83\x82\x88\x81\x40\x82\x94\x82\x88\x82\x85\x81\x40\x82\x89\x82\x83\x82\x8f\x82\x8e\x81\x44");
    asdTMTexTableLoadSprites(34);
    FUN_0014afd0(34, 0);
    work->job = taskCreateDraw("COMBG EVE CALC", 4, 8, 0, FUN_0031a5e4, ref208Destroy, work, g_commonBg.owner->job);
    taskCreateDraw("COMBG DDRAW", 235, 8, 0, FUN_0036dff4, NULL, work, work->job);
}
}

#include "shard/W6_W6Match5_CommonBackground.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"

// The final word lies past the published CommonBackgroundChild prefix.
struct CommonBackgroundDrawWork {
    /* 0x00 */ u32 job;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 frame;
    /* 0x0C */ u32 engageText;
    /* 0x10 */ u32 touchText;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
};
extern "C" {
void* asdMemoryAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);
u32 asdTextCreate(u32 kind);
void asdTextDrawFormatted(u32 text, s32 kind, u32 color, s32 x, s32 y, const char* format);
void FUN_002c58c8(u32 id, s32 option);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                  AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, void *owner);
s32 FUN_00221310(u32 handle);
void commonBgDestroyJobWork(u32 handle);
s32 FUN_002ed628(u32 handle);

// Create the common background's text prompts and its update/draw tasks.
void commonBgCreate(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\CommonBg\\CommonBg.cpp", 1292);
    CommonBackgroundDrawWork* work = static_cast<CommonBackgroundDrawWork*>(
        asdMemoryAlloc(0x100, 0x100, 0, sizeof(CommonBackgroundDrawWork), 1));
    work->job = 0;
    work->state = 0;
    work->frame = 0;
    work->engageText = 0;
    work->touchText = 0;
    work->unk14 = 0;
    work->unk18 = 0;
    work->unk1C = 0;
    work->unk20 = 0;
    g_commonBg.child = reinterpret_cast<CommonBackgroundChild*>(work);
    u32 text = asdTextCreate(0);
    work->engageText = text;
    asdTextDrawFormatted(text, 3, 0xFFFFFFFF, 0, 0,
        "\x82\x64\x82\x8E\x82\x87\x82\x81\x82\x87\x82\x85");
    text = asdTextCreate(0);
    work->touchText = text;
    asdTextDrawFormatted(text, 3, 0xFFFFFFFF, 0, 0,
        "\x82\x6F\x82\x8C\x82\x85\x82\x81\x82\x93\x82\x85\x81\x40\x82\x94"
        "\x82\x8F\x82\x95\x82\x83\x82\x88\x81\x40\x82\x94\x82\x88\x82\x85"
        "\x81\x40\x82\x89\x82\x83\x82\x8F\x82\x8E\x81\x44");
    asdTMTexTableLoadSprites(0x2D);
    FUN_002c58c8(0x2D, 0);
    u32 job = taskCreateDraw(reinterpret_cast<const s8 *>("COMBG EVE CALC"), 2, 8, 0, FUN_00221310,
        commonBgDestroyJobWork, reinterpret_cast<u32>(work), reinterpret_cast<void *>(g_commonBg.background->counters.unk00));
    work->job = job;
    taskCreateDraw(reinterpret_cast<const s8 *>("COMBG DDRAW"), 0xE7, 8, 0, FUN_002ed628, NULL, reinterpret_cast<u32>(work), reinterpret_cast<void *>(job));
}
}

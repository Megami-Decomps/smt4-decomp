/* NON_MATCHING: the hoisted zero and one constants use exchanged callee-saved registers. */
#include "battle/btlMain.h"
#include "battle/btlTargetSelect.h"
#include "shard/W6_W6Match7_DrawParameters.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include <new>
#include "classes/Obj420780.h"
#include "classes/Obj4208b4.h"

struct TargetSelectDrawState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08[0x84];
};

struct TargetSelectWork {
    /* 0x00 */ BtlTargetSelect base;
    /* 0x08 */ u8 mode;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ Params002c312c parameters;
    /* 0x2C */ TargetSelectDrawState draw;
};

extern "C" {
extern BtlTargetSelect *g_btlTargetSelect;
extern const u8 DAT_004017f4;
void *asdMemoryAlloc(s32 heap, s32 alignment, s32 option, u32 bytes, s32 fromFront);
/* This factory supplies an owner tag even though the allocator body ignores it. */
void *asdOperatorNew(u32 bytes, void *owner);
s32 FUN_002e0730(u32 job);
s32 FUN_002f4aec(u32 job);
void btlTargetSelectDestroy(u32 job);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, void *owner);
void drawParameterBlockClear(Params002c312c *);
void paramsInit(Params002c312c *, u32, u16, u32, u16, u32, u16, u32, u16, u32, u16);
void FUN_002bd954(TargetSelectDrawState *, u32 first, u32 second,
                   Params002c312c *, s32 flag, f32 scalar);
void FUN_002eb76c(TargetSelectDrawState *, u32 mode);
}

// Create the information and marker displays with a calculation job and two draw passes.
extern "C" void btlTargetSelectCreate(BtlMainState *owner)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlTargetSelect.cpp", 0x422);
    TargetSelectWork *work = static_cast<TargetSelectWork *>(
        asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(TargetSelectWork), 1));
    g_btlTargetSelect = &work->base;

    work->base.primary = reinterpret_cast<BtlUiObject *>(new (owner) Obj420780);
    work->base.secondary = reinterpret_cast<BtlUiObject *>(new (owner) Obj4208b4);
    work->mode = 0;

    owner->targetSelect.job = taskCreateDraw(
        reinterpret_cast<const s8 *>("btlTargetSelect Calc"), 2, 0, 0,
        FUN_002e0730, btlTargetSelectDestroy, reinterpret_cast<u32>(work),
        reinterpret_cast<void *>(owner->job));
    taskCreateDraw(reinterpret_cast<const s8 *>("btlTargetSelect DrawUpL"), 0x7a, 0, 0,
                   FUN_002f4aec, NULL, reinterpret_cast<u32>(work),
                   reinterpret_cast<void *>(owner->targetSelect.job));
    taskCreateDraw(reinterpret_cast<const s8 *>("btlTargetSelect DrawUpR"), 0xd8, 0, 0,
                   FUN_002f4aec, NULL, reinterpret_cast<u32>(work),
                   reinterpret_cast<void *>(owner->targetSelect.job));

    drawParameterBlockClear(&work->parameters);
    paramsInit(&work->parameters, 0, 0, 0, 0, 0, 0,
               reinterpret_cast<u32>(&DAT_004017f4), 0x10, 0, 0);
    FUN_002bd954(&work->draw, 0x14, 0x71, &work->parameters, 1, 1.0f);
    FUN_002eb76c(&work->draw, 0);
}

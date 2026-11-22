/* NON_MATCHING: retail keeps the constants 1 and 0 in r6 and r7 respectively; the build swaps those registers. */
#include "ui/UiSpriteApi.h"
#include "AsdSDK/AsdDebug.h"
#include "battle/btlMain.h"
#include "battle/btlTargetSelect.h"
#include "classes/Obj557bd8.h"
#include "classes/Obj557d48.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

/* The state the target selection's draw tasks share (its own sub-object starts at 0x2C). */

struct TargetSelectWork {
    /* 0x00 */ BtlTargetSelect base;
    /* 0x08 */ u8 mode;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ UiResourceParameters parameters;
    /* 0x2C */ UiSpriteState draw;
};

extern "C" {
extern BtlTargetSelect *g_btlTargetSelect;
extern const u8 DAT_0052aa0c;

void *asdMemoryAlloc(s32 heap, s32 alignment, s32 option, u32 bytes, s32 fromFront);
u32 taskCreateDraw(const char *name, u32 priority, u32 flags, u32 argument, void (*draw)(), void (*teardown)(u32),
                   void *work, u32 parent);
void btlTargetSelectCalc();
void btlTargetSelectDraw();
void btlTargetSelectDestroy(u32 job);
void paramsClearPacket(UiResourceParameters *params);


// Create the information and marker displays with a calculation job and two draw passes.
void FUN_00363990(BtlMainStateA *owner)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlTargetSelect.cpp", 0x44A);
    TargetSelectWork *work = static_cast<TargetSelectWork *>(asdMemoryAlloc(0x100, 0x100, 0, sizeof(TargetSelectWork), 1));
    g_btlTargetSelect = &work->base;
    work->base.primary = reinterpret_cast<BtlUiObject *>(new (owner) Obj557bd8);
    work->base.secondary = reinterpret_cast<BtlUiObject *>(new (owner) Obj557d48);
    work->mode = 0;
    owner->targetSelect.job = taskCreateDraw("btlTargetSelect Calc", 4, 0, 0, btlTargetSelectCalc, btlTargetSelectDestroy, work, owner->job);
    taskCreateDraw("btlTargetSelect DrawUpL", 0x7E, 0, 0, btlTargetSelectDraw, 0, work, owner->targetSelect.job);
    taskCreateDraw("btlTargetSelect DrawUpR", 0xDA, 0, 0, btlTargetSelectDraw, 0, work, owner->targetSelect.job);
    paramsClearPacket(&work->parameters);
    paramsInit(&work->parameters, 0, 0, 0, 0, 0, 0, &DAT_0052aa0c, 0x10, 0, 0);
    uiSpriteStateInitFromSource(&work->draw, 12, 0x71, &work->parameters, 1, 1.0f);
    uiSpriteStartFrameSequence(&work->draw, 0);
}

}

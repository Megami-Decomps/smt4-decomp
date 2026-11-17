#include "common.h"
#include "classes/Obj55c8d0.h"
#include "test/BustupViewer.h"
#include "ui/UiSpriteApi.h"

extern "C" {

typedef struct UiMotionSprite {
    /* 0x00 */ u8 unk00[0x8A];
    /* 0x8A */ s8 active;
} UiMotionSprite;
typedef struct MotionScreenWork {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ u32 state;
    /* 0x0018 */ u32 substate;
    /* 0x001C */ u8 unk001C[0x7A];
    /* 0x0096 */ u8 unk0096[0x32];
    /* 0x00C8 */ u8 position[0x520];
    /* 0x05E8 */ UiMotionSprite motion;
    /* 0x0673 */ u8 unk0673[0xA1FF];
    /* 0xA872 */ u16 mode;
} MotionScreenWork;

s32 FUN_0026c3a0(void);
void FUN_002c8538(s32 enabled);
void pointConvertToFloat(void *point, s32 x, s32 y);
s32 utilityReturnSuccess(void *value);

/* Advances the screen's motion and follows its position; once the active motion finishes, moves to state 7. */
}

void Obj55c8d0::FUN_004a527c()
{
    MotionScreenWork * work = reinterpret_cast<MotionScreenWork *>(this);
    if (FUN_0026c3a0()) {
        FUN_002c8538(0);
    }
    UiMotionSprite *motion = &work->motion;
    work->mode = 9;
    uiSpriteAdvanceAnimation((UiSpriteState *)motion, 1.0f);
    pointConvertToFloat(work->position, vec2GetXInt((const UiSpriteState *)motion), vec2GetYInt((const UiSpriteState *)motion));
    if (FUN_0026c3a0() && uiSpriteGetCompletionState((const UiSpriteState *)motion) != 0 && buttonHelpStateIsNot3() && !utilityReturnSuccess(work->unk0096)) {
        work->state = 7;
        work->substate = 0;
    }
}

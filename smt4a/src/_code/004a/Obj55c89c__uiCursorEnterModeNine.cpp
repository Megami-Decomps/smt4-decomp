#include "common.h"
#include "classes/Obj55c89c.h"
#include "test/BustupViewer.h"
#include "ui/UiSpriteApi.h"

extern "C" {

/* The cursor sprite embedded at 0x5E8 of the owner. */
typedef struct CursorOwner {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ u32 nextState;
    /* 0x0018 */ u32 nextStep;
    /* 0x001C */ u8 unk001C[0x7A];
    /* 0x0096 */ u8 unk0096[0x32];
    /* 0x00C8 */ u8 position[0x520];
    /* 0x05E8 */ UiSpriteState cursor;
    /* 0x0674 */ u8 unk0674[0xA200];
    /* 0xA874 */ u16 mode;
} CursorOwner;

void pointConvertToFloat(void *point, s32 x, s32 y);
s32 gameGlobalsIsActiveStateFour(void);
s32 utilityReturnSuccess(void *object);
void gameGlobalsSetOverlayActive(s32 value);
void FUN_0033449c(s32 value);

/* Enters mode 9: updates the cursor sprite, copies its position, and switches to state 14 when the cursor is up. */
}

extern "C" void _ZN9Obj55c89c21uiCursorEnterModeNineEv(CursorOwner *owner)
{
    UiSpriteState *cursor = &owner->cursor;
    owner->mode = 9;
    uiSpriteAdvanceAnimation(cursor, 1.0f);
    pointConvertToFloat(owner->position, vec2GetXInt(cursor), vec2GetYInt(cursor));
    if (gameGlobalsIsActiveStateFour() == 0) {
        return;
    }
    if (uiSpriteGetCompletionState(cursor) == 0) {
        return;
    }
    if (buttonHelpStateIsNot3() == 0) {
        return;
    }
    if (utilityReturnSuccess(owner->unk0096) != 0) {
        return;
    }
    gameGlobalsSetOverlayActive(0);
    FUN_0033449c(0);
    owner->nextState = 14;
    owner->nextStep = 0;
}

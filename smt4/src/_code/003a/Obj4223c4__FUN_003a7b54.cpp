#include "ui/MenuTransition.h"
#include "classes/Obj4223c4.h"
#include "ui/UiSpriteApi.h"
extern "C" {
void pointConvertToFloat(FloatPoint*, s32, s32);
s32 FUN_00295618(void);
s32 buttonHelpStateIsNot3(void);
s32 utilityReturnSuccess(const void*);
void gameSetIconDisplayEnabled(s32);
void FUN_0029c4c8(s32);

}

void Obj4223c4::FUN_003a7b54()
{
    MenuTransitionWork* work = reinterpret_cast<MenuTransitionWork*>(this);
    MenuCursorMotion* cursor = &work->cursor;
    uiSpriteAdvanceAnimation((UiSpriteState *)cursor);
    s32 y = vec2GetYInt((const UiSpriteState *)cursor);
    s32 x = vec2GetXInt((const UiSpriteState *)cursor);
    pointConvertToFloat(&work->position, x, y);
    if (FUN_00295618() != 0 && uiSpriteGetCompletionState((const UiSpriteState *)cursor) != 0 && buttonHelpStateIsNot3() != 0 &&
        utilityReturnSuccess(work->unk96) == 0) {
        gameSetIconDisplayEnabled(0);
        FUN_0029c4c8(0);
        work->state = 12;
        work->step = 0;
    }
}

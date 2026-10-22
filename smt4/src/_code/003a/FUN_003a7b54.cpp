/* NON_MATCHING: The cursor flag test is merged with the preceding predicate and its unused sign extension is removed. */
#include "ui/MenuTransition.h"
extern "C" {
s32 FUN_002bf818(MenuCursorMotion*);
s32 vec2GetYInt(const MenuCursorMotion*);
s32 vec2GetXInt(const MenuCursorMotion*);
void pointConvertToFloat(FloatPoint*, s32, s32);
s32 FUN_00295618(void);
s32 FUN_0026b564(void);
s32 utilityReturnSuccess(const void*);
void FUN_0029e874(s32);
void FUN_0029c4c8(s32);

void FUN_003a7b54(MenuTransitionWork* work)
{
    MenuCursorMotion* cursor = &work->cursor;
    FUN_002bf818(cursor);
    s32 y = vec2GetYInt(cursor);
    s32 x = vec2GetXInt(cursor);
    pointConvertToFloat(&work->position, x, y);
    if (FUN_00295618() != 0 && cursor->unk8A != 0 && FUN_0026b564() != 0 &&
        utilityReturnSuccess(work->unk96) == 0) {
        FUN_0029e874(0);
        FUN_0029c4c8(0);
        work->state = 12;
        work->step = 0;
    }
}
}

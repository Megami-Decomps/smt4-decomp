/* Updates the screen cursor, then finishes a confirmed selection once help is idle. */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "classes/Obj55c89c.h"
#include "shard/Shard004A.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void pointConvertToFloat(f32 *position, s32 x, s32 y);
s32 buttonHelpIsNotActive(void);
void FUN_0032cfe0(Screen4A *screen);

void _ZN9Obj55c89c12FUN_004a2404Ev(Screen4A *screen)
{
    void *selection = screen->input.selection;
    screen->unkA874 = 8;
    uiSpriteAdvanceAnimation((UiSpriteState *)selection, 1.0f);
    s32 y = vec2GetYInt((UiSpriteState *)selection);
    s32 x = vec2GetXInt((UiSpriteState *)selection);
    pointConvertToFloat(screen->cursor.position, x, y);
    if (uiSpriteGetCompletionState((const UiSpriteState *)selection) != 0 && buttonHelpIsNotActive()) {
        gameGlobalsSetMenuOpenFlag(0);
        screen->state = 2;
        screen->unk18 = 0;
        pointConvertToFloat(screen->cursor.position, 0, 0);
        FUN_0032cfe0(screen);
    }
}
}

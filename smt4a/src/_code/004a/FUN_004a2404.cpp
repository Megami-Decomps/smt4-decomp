/* NON_MATCHING: confirmed-byte access does not reuse retail's selection pointer. */
/* Updates the screen cursor, then finishes a confirmed selection once help is idle. */
#include "shard/Shard004A.h"

extern "C" {
void FUN_00163aa4(void *selection, f32 scale);
s32 vec2GetXInt(const void *selection);
s32 vec2GetYInt(const void *selection);
void pointConvertToFloat(f32 *position, s32 x, s32 y);
s32 buttonHelpIsNotActive(void);
void FUN_003343f0(s32 value);
void FUN_0032cfe0(Screen4A *screen);

void FUN_004a2404(Screen4A *screen)
{
    void *selection = screen->input.selection;
    screen->unkA874 = 8;
    FUN_00163aa4(selection, 1.0f);
    s32 y = vec2GetYInt(selection);
    s32 x = vec2GetXInt(selection);
    pointConvertToFloat(screen->cursor.position, x, y);
    if (screen->input.confirmed && buttonHelpIsNotActive()) {
        FUN_003343f0(0);
        screen->state = 2;
        screen->unk18 = 0;
        pointConvertToFloat(screen->cursor.position, 0, 0);
        FUN_0032cfe0(screen);
    }
}
}

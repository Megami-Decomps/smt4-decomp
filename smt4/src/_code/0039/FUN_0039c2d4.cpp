#include "common.h"

extern "C" {

/* Screen object with a state block at 0x9ec: flags, two words and an embedded widget at 0x9f8. */
typedef struct {
    u8 unk000[0x5f8];
    u8 source[0x3f4];   /* 0x5f8 */
    u8 enabled;         /* 0x9ec */
    u8 unk9ed;          /* 0x9ed */
    u8 unk9ee;          /* 0x9ee */
    u8 unk9ef;
    u32 unk9f0;         /* 0x9f0 */
    u32 unk9f4;         /* 0x9f4 */
    u8 widget[1];       /* 0x9f8 */
} Screen;

int timerStart(u8 *widget, int a, int b);
int uiSpriteInitializeState(u8 *widget, int a, int b, int c, u8 *source, int d, f32 scale);

/* Resets the screen's state block and (re)creates its widget. */
void FUN_0039c2d4(Screen *screen)
{
    screen->enabled = 1;
    screen->unk9f0 = 0;
    screen->unk9f4 = 0;
    screen->unk9ed = 0;
    screen->unk9ee = 0;
    uiSpriteInitializeState(screen->widget, 0x1c, 0x1121, 0x1d, screen->source, 0x15, 1.0f);
    timerStart(screen->widget, 5, 0);
}

} /* extern "C" */

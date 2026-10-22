#include "shard/X14_InfoWindowSmt4.h"

extern "C" {

void asdTextDrawDirectoryEntry(void *text, s32 a, s32 b, s32 c, s32 d, const void *message, u32 arg);
f32 effectSpawnDefaultArguments(void *text);
void timerStart(void *timer, s32 a, s32 b);
s32 vec2GetXInt(void *timer);

/* Shows a message in the info window, widening it for text over 630 pixels wide. */
void infoWinSetMessage(const void *message, u32 arg)
{
    InfoWindowSmt4 *win = g_infoWin;
    f32 width;

    win->hasText = 0;
    if (message != NULL) {
        win->hasText = 1;
        asdTextDrawDirectoryEntry(win->text, 3, -1, 0, 3, message, arg);
        width = effectSpawnDefaultArguments(win->text);
        if (width <= 630.0f) {
            win->wideText = 0;
        } else {
            win->wideText = 1;
            win->textWidth = (s32)width;
        }
        timerStart(win->slideTimer, 2, 0);
        win->labelX = vec2GetXInt(win->slideTimer);
        win->textRight = win->labelX + win->textWidth + 42;
        if (win->state == 3) {
            win->state = 2;
        }
        win->timer = 30;
    }
}

} /* extern "C" */

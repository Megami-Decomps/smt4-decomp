/* Starts the countdown (30 frames) with the given mode byte: marks the object active, resets its two timers and clears the done flag. */
#include "font/InfoWinA.h"
#include "ui/UiControl.h"

extern "C" {



extern void uiSpriteSetKeyframe(void *timer, s32 a, s32 b);
extern void uiSpriteSetImageKeyframe(void *timer, s32 a, s32 b);

void dialogOpen(u8 mode)
{
    InfoWindowA *countdown = g_infoWin;

    countdown->state = 1;
    uiSpriteSetKeyframe(&countdown->background, 0, 0);
    uiSpriteSetImageKeyframe(&countdown->background, 0, 0);
    countdown->style = mode;
    countdown->shown = 1;
    countdown->active = 0;
    countdown->timer = 30;
    countdown->unk32D = 0;
}

}

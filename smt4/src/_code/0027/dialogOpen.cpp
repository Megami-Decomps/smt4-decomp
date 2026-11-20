/* Starts the countdown (30 frames) with the given mode byte: marks the object active and resets its timer. */
#include "ui/UiSpriteApi.h"
#include "font/InfoWin.h"
#include "ui/UiControl.h"

extern "C" {




void dialogOpen(u8 mode, s32 flag)
{
    InfoWindow *countdown = g_infoWin;

    countdown->state = 1;
    uiSpriteSetKeyframe(&countdown->background, 0, 0);
    countdown->style = mode;
    countdown->shown = 1;
    countdown->timer = 30;
}

}

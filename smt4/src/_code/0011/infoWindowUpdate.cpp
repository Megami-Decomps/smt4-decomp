#include "ui/UiSpriteApi.h"
#include "font/InfoWin.h"


/* Advance opening, scrolling and timed closing of the information window. */
extern "C" s32 infoWindowUpdate(u32 job)
{
    InfoWindow *window = g_infoWin;
    switch (window->state) {
    case 1:
        if (uiSpriteAdvanceAnimation(&window->background)) {
            if (window->style) {
                window->state = 4;
            } else {
                window->state = 2;
                uiSpriteSetKeyframe(&window->content, 2, 0);
            }
            window->frame = 0;
        }
        break;
    case 2:
        uiSlidingSpriteAdvance(&window->content, 0);
        window->labelX = vec2GetXInt(&window->content);
        if (window->labelX <= 0) {
            window->labelX = 0;
            window->state = 3;
            window->frame = 0;
        }
        window->textRight = window->labelX + window->textWidth + 42;
        break;
    case 3:
        if (window->frame > 30 && window->wideText) {
            --window->labelX;
            if (window->labelX < -window->textWidth)
                window->labelX = window->textRight + window->textWidth + 42;
            --window->textRight;
            if (window->textRight < -window->textWidth)
                window->textRight = window->labelX + window->textWidth + 42;
        }
        break;
    case 4:
        if (window->timer >= 0 && window->frame > window->timer) {
            /* Begin closing, written as infoWinStartTimer does it. */
            g_infoWin->state = 5;
            window->timer = 30;
            uiSpriteSetKeyframe(&window->background, 1, 0);
        }
        break;
    case 5:
        if (uiSpriteAdvanceAnimation(&window->background)) {
            window->style = 0;
            window->state = 0;
            window->frame = 0;
        }
        break;
    }
    ++window->frame;
    return 0;
}

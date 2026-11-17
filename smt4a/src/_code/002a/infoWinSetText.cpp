#include "ui/UiSpriteApi.h"
#include "font/InfoWinA.h"

extern "C" {

void asdTextDrawDirectoryEntry(void *text, s32 a1, s32 color, s32 a3, s32 a4, const char *entry, u32 arg);
f32 effectSpawnDefaultArguments(void *text);

/* Sets the info window's message text and lays out its label around the text width. */
void infoWinSetText(const char *entry, u32 arg)
{
    InfoWindowA *window = g_infoWin;
    f32 width;

    window->hasText = false;
    if (entry == NULL) {
        return;
    }
    window->hasText = true;
    asdTextDrawDirectoryEntry(window->text, 3, -1, 0, 3, entry, arg);
    width = effectSpawnDefaultArguments(window->text);
    if (width >= 333.0f) {
        window->wideText = true;
        window->textWidth = (s32)width;
    } else {
        window->wideText = false;
    }
    uiSpriteSetKeyframe(&window->label, 2, 0);
    window->labelX = vec2GetXInt(&window->label);
    window->textRight = window->labelX + window->textWidth + 42;
    if (window->state == 3) {
        window->state = 2;
    }
    window->timer = 30;
}

} /* extern "C" */

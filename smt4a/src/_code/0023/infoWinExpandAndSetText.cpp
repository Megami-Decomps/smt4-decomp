#include "ui/UiSpriteApi.h"
#include "font/InfoWinA.h"
#include "text/TextDraw.h"

extern "C" {
f32 fontMeasureTextWidth(const char *text, s32 font, f32 initialWidth);
void asdTextFormatStream(void *text, s32 font, u32 color, s32 mode, s32 alignment, const char *buffer);
void sysMemClear(void *buffer, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Expands popup text, updates its scrolling bounds, and resets its display timer. */
void infoWinExpandAndSetText(const char *text)
{
    InfoWindowA *window = g_infoWin;
    char expanded[256];
    window->hasText = 0;
    if (text != NULL) {
        sysMemClear(window->message, sizeof(window->message));
        textExpandGlyphsToBuffer(text, expanded, 0);
        for (s32 length = 0; length < 160; ++length) {
            if (expanded[length] == '\0') {
                __aeabi_memcpy4(window->message, expanded, length + 1);
                window->hasText = 1;
                s32 width = (s32)fontMeasureTextWidth(expanded, 3, 0.0f);
                if (width > 332) {
                    window->textWidth = width;
                    window->wideText = 1;
                } else {
                    window->wideText = 0;
                }
                uiSpriteSetKeyframe(&window->label, 2, 0);
                s32 x = vec2GetXInt(&window->label);
                window->labelX = x;
                window->textRight = window->textWidth + window->labelX + 42;
                if (window->state == 3) {
                    window->state = 2;
                }
                break;
            }
        }
        asdTextFormatStream(window->text, 3, 0xFFFFFFFF, 0, 3, window->message);
        window->timer = 30;
    }
}
}

#include "shard/W4_Match3_InfoWindow.h"

extern "C" {
void FUN_001654f8(const char *text, char *buffer, s32 mode);
f32 FUN_00168594(const char *text, s32 font, f32 initialWidth);
void uiSpriteSetKeyframe(void *sprite, s32 track, s32 frame);
void FUN_0023723c(void *text, s32 font, u32 color, s32 mode, s32 alignment, const char *buffer);
void sysMemClear(void *buffer, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
s32 vec2GetXInt(const void *vector);

/* Expands popup text, updates its scrolling bounds, and resets its display timer. */
void infoWinExpandAndSetText(const char *text)
{
    InfoWindow *window = g_infoWin;
    char expanded[256];
    window->hasText = 0;
    if (text != NULL) {
        sysMemClear(window->message.buffer, sizeof(window->message.buffer));
        FUN_001654f8(text, expanded, 0);
        for (s32 length = 0; length < 160; ++length) {
            if (expanded[length] == '\0') {
                __aeabi_memcpy4(window->message.buffer, expanded, length + 1);
                window->hasText = 1;
                s32 width = (s32)FUN_00168594(expanded, 3, 0.0f);
                if (width > 332) {
                    window->textWidth = width;
                    window->wideText = 1;
                } else {
                    window->wideText = 0;
                }
                uiSpriteSetKeyframe(window->labelSprite, 2, 0);
                s32 x = vec2GetXInt(window->labelSprite);
                window->labelX = x;
                window->textRight = window->textWidth + window->labelX + 42;
                if (window->state == 3) {
                    window->state = 2;
                }
                break;
            }
        }
        FUN_0023723c(window->text, 3, 0xFFFFFFFF, 0, 3, window->message.buffer);
        window->timer = 30;
    }
}
}

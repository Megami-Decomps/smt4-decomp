/* NON_MATCHING: directory/entry lifetimes swap r5/r6; width comparison and text-right addition scheduling differ. */
#include "shard/W4_Match3_InfoWindow.h"

extern "C" {
void *FUN_00333750(void);
void *fileSectionGetData(void *section, u32 entry, u32 subsection);
void asdTextDrawDirectoryEntry(void *text, s32 font, u32 color, s32 flags,
                               s32 mode, void *directory, u32 entry);
f32 effectSpawnDefaultArguments(void *text);
void uiSpriteSetKeyframe(void *sprite, s32 frame, s32 flags);
void uiSpriteSetImageKeyframe(void *sprite, s32 frame, s32 flags);
s32 vec2GetXInt(void *sprite);

/* Set and measure a directory message before opening the information popup. */
void FUN_002e5c6c(u32 entry)
{
    void *directory = FUN_00333750();
    if (fileSectionGetData(directory, entry, 0)) {
        InfoWindow *window = g_infoWin;
        window->hasText = 0;
        if (directory) {
            window->hasText = 1;
            asdTextDrawDirectoryEntry(window->text, 3, ~0u, 0, 3, directory, entry);
            f32 width = effectSpawnDefaultArguments(window->text);
            union { f32 value; s32 bits; } measured;
            measured.value = width;
            if (0x43a68000 <= measured.bits) {
                window->wideText = 1;
                window->textWidth = (s32)width;
            } else {
                window->wideText = 0;
            }
            uiSpriteSetKeyframe(window->labelSprite, 2, 0);
            s32 x = vec2GetXInt(window->labelSprite);
            window->labelX = x;
            window->textRight = (x + window->textWidth) + 42;
            if (window->state == 3)
                window->state = 2;
            window->timer = 30;
        }
        window = g_infoWin;
        window->state = 1;
        uiSpriteSetKeyframe(window->sprite, 0, 0);
        uiSpriteSetImageKeyframe(window->sprite, 0, 0);
        window->style = 1;
        window->shown = 1;
        window->active = 0;
        window->timer = 30;
        window->unk32D = 0;
    }
}
}

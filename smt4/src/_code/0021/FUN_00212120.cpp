/* NON_MATCHING: popup setup uses different argument scheduling around the text-directory call. */
#include "shard/X14_InfoWindowSmt4.h"

struct InfoWindowAnimationView {
    u8 prefix[0x44];
    u8 timer[1];
};
extern "C" {
void *FUN_002cf11c(void);
void *fileSectionGetData(void *, u32, u32);
void asdTextDrawDirectoryEntry(void *, u32, s32, u32, u32, void *, u32);
f32 effectSpawnDefaultArguments(void *);
void timerStart(void *, u32, u32);
s32 vec2GetXInt(void *);
}

extern "C" void FUN_00212120(u32 message)
{
    void *directory = FUN_002cf11c();
    if (fileSectionGetData(directory, message, 0) == NULL) {
        return;
    }
    InfoWindowSmt4 *window = g_infoWin;
    window->hasText = 0;
    if (directory != NULL) {
        window->hasText = 1;
        asdTextDrawDirectoryEntry(window->text, 3, -1, 0, 3, directory, message);
        f32 width = effectSpawnDefaultArguments(window->text);
        if (width > 630.0f) {
            window->wideText = 1;
            window->textWidth = s32(width);
        } else {
            window->wideText = 0;
        }
        timerStart(window->slideTimer, 2, 0);
        window->labelX = vec2GetXInt(window->slideTimer);
        window->textRight = window->labelX + window->textWidth + 42;
        if (window->state == 3) {
            window->state = 2;
        }
        window->timer = 30;
    }
    window = g_infoWin;
    window->state = 1;
    timerStart(reinterpret_cast<InfoWindowAnimationView *>(window)->timer, 0, 0);
    window->unk023[0] = 1;
    window->unk020 = 1;
    window->timer = 30;
}

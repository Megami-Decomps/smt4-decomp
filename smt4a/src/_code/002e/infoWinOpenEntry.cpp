#include "ui/UiSpriteApi.h"
#include "font/InfoWinA.h"

extern "C" {
void *FUN_00333750(void);
void *fileSectionGetData(void *section, u32 entry, u32 subsection); // declcheck: local (the shared declaration does not compile here or changes this unit)
void asdTextDrawDirectoryEntry(void *text, s32 font, u32 color, s32 flags,
                               s32 mode, void *directory, u32 entry); // declcheck: local (the shared declaration does not compile here or changes this unit)
f32 effectSpawnDefaultArguments(void *text);

/* infoWinSetText, inlined from the same file. */
static __inline void setText(void *entry, u32 arg)
{
    InfoWindowA *window = g_infoWin;
    f32 width;

    window->hasText = false;
    if (entry == NULL) {
        return;
    }
    window->hasText = true;
    asdTextDrawDirectoryEntry(window->text, 3, ~0u, 0, 3, entry, arg);
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

/* NON_MATCHING: retail loads &g_infoWin into sl before the first call (FUN_00333750); this build
 * loads it after the fileSectionGetData test. Only a dead top-of-function read of g_infoWin
 * reproduces that, so it is not written (smt4's FUN_00212120 is the same). */
/* Set and measure a directory message before opening the information popup. */
void infoWinOpenEntry(u32 entry)
{
    void *directory = FUN_00333750();
    if (fileSectionGetData(directory, entry, 0)) {
        setText(directory, entry);
        InfoWindowA *window = g_infoWin;
        window->state = 1;
        uiSpriteSetKeyframe(&window->background, 0, 0);
        uiSpriteSetImageKeyframe(&window->background, 0, 0);
        window->style = 1;
        window->shown = 1;
        window->active = 0;
        window->timer = 30;
        window->unk32D = 0;
    }
}
}

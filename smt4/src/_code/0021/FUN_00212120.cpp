/* NON_MATCHING: written with an inlined copy of infoWinSetMessage, everything matches except that retail loads the g_infoWin pool word into r9 before the FUN_002cf11c call, this build after the fileSectionGetData test. */
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

/* infoWinSetMessage, inlined from the same file. */
static __inline void setMessage(const void *message, u32 arg)
{
    InfoWindowSmt4 *win = g_infoWin;
    f32 width;

    win->hasText = 0;
    if (message != NULL) {
        win->hasText = 1;
        asdTextDrawDirectoryEntry(win->text, 3, -1, 0, 3, const_cast<void *>(message), arg);
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

/* Opens the info window on text entry `message` of the current text directory. */
extern "C" void FUN_00212120(u32 message)
{
    void *directory = FUN_002cf11c();
    if (fileSectionGetData(directory, message, 0) == NULL) {
        return;
    }
    setMessage(directory, message);
    InfoWindowSmt4 *window = g_infoWin;
    window->state = 1;
    timerStart(reinterpret_cast<InfoWindowAnimationView *>(window)->timer, 0, 0);
    window->unk023[0] = 1;
    window->unk020 = 1;
    window->timer = 30;
}

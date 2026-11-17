#include "ui/UiSpriteApi.h"
#include "ui/CommandWindow.h"

// Update the active common window and advance its state timer.
extern "C" s32 comWindowProcessUpdate(void *context)
{
    CommandWindow *work = g_comWin;
    switch (work->phase) {
    case 0: // Idle.
    case 3: // Waiting for the next request.
        break;
    case 1:
        if (uiSpriteAdvanceAnimation(&work->sprites[0])) {
            work->phase = 2;
            work->phaseTimer = 0;
        }
        break;
    case 2:
        uiSpriteAdvanceAnimation(&work->sprites[1]);
        break;
    case 4:
        if (uiSpriteAdvanceAnimation(&work->sprites[0]))
            work->phase = 0;
        break;
    }
    ++work->phaseTimer;
    return 0;
}

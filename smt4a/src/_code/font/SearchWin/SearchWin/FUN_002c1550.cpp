#include "font/SearchWin/SearchWin.h"
#include "ui/UiSpriteApi.h"

extern "C" {
extern SearchWinWork* g_searchWin;
u32 eventIsSkipping(void);
void jobStop(u32 job, u32 flags);
void asdMemFree(void* memory);
void sysPlayVoice(u32 id);

// Start the close animation, or release a completed/cancelled search window.
s32 FUN_002c1550(void)
{
    // The shared byte padding begins at 0x15; inserting an aligned sprite there would move it.
    struct WindowSpriteView {
        u8 unk00[0x38];
        UiSpriteState sprite;
    };
    typedef char WindowSpriteOffset[offsetof(WindowSpriteView, sprite) == 0x38 ? 1 : -1];
    s32 closed = 0;
    SearchWinWork* window = g_searchWin;
    if (window != NULL) {
        if (eventIsSkipping() != 0) {
            SearchWinWork* closing = g_searchWin;
            jobStop(closing->job, 0);
            asdMemFree(closing);
            g_searchWin = NULL;
            return 1;
        }
        if (window->state != 3) {
            if (window->secondaryState != 3 && window->state != 4) {
                SearchWinWork* current = g_searchWin;
                if (current->state == 2) {
                    current->state = 3;
                } else {
                    current->secondaryState = 3;
                }
                WindowSpriteView* view = reinterpret_cast<WindowSpriteView*>(current);
                uiSpriteSelectAnim(&view->sprite, 1);
                sysPlayVoice(0x010000CF);
            } else if (window->state == 4) {
                SearchWinWork* closing = g_searchWin;
                jobStop(closing->job, 0);
                asdMemFree(closing);
                closed = 1;
                g_searchWin = NULL;
            }
        }
    } else if (eventIsSkipping() != 0) {
        closed = 1;
    }
    return closed;
}
}

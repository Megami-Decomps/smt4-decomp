#include "font/SearchWin/SearchWin.h"
#include "ui/UiSpriteState.h"

extern "C" {
extern SearchWinWork* DAT_0057f584;
u32 FUN_00162ea4(void);
void jobStop(u32 job, u32 flags);
void asdMemFree(void* memory);
void uiSpriteSelectAnim(UiSpriteState* sprite, s32 animation);
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
    SearchWinWork* window = DAT_0057f584;
    if (window != NULL) {
        if (FUN_00162ea4() != 0) {
            SearchWinWork* closing = DAT_0057f584;
            jobStop(closing->job, 0);
            asdMemFree(closing);
            DAT_0057f584 = NULL;
            return 1;
        }
        if (window->state != 3) {
            if (window->secondaryState != 3 && window->state != 4) {
                SearchWinWork* current = DAT_0057f584;
                if (current->state == 2) {
                    current->state = 3;
                } else {
                    current->secondaryState = 3;
                }
                WindowSpriteView* view = reinterpret_cast<WindowSpriteView*>(current);
                uiSpriteSelectAnim(&view->sprite, 1);
                sysPlayVoice(0x010000CF);
            } else if (window->state == 4) {
                SearchWinWork* closing = DAT_0057f584;
                jobStop(closing->job, 0);
                asdMemFree(closing);
                closed = 1;
                DAT_0057f584 = NULL;
            }
        }
    } else if (FUN_00162ea4() != 0) {
        closed = 1;
    }
    return closed;
}
}

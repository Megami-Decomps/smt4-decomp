/* NON_MATCHING: image-keyframe constant reuse and page-transition argument scheduling differ (73 rows each). */
#include "ui/UiSpriteState.h"

extern "C" {
s32 FUN_001517b4(u32 button, s32 repeat);
void eventQueueAddUniqueIfValid(u32 event);
void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 frame, s32 initial);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 frame, s32 initial);
void FUN_004029f4(void *work, s32 state, s32 next);
void contentListUpdateNavigation();

// Process page changes and cancellation, including their button sprite animations.
void FUN_00402f58(void *work)
{
    struct ContentListInputView {
        /* 0x000 */ u8 prefix[0x104];
        /* 0x104 */ u8 pagesEnabled;
        /* 0x105 */ u8 unk105[0xD3];
        /* 0x1D8 */ UiSpriteState cancelButton;
        /* 0x264 */ UiSpriteState pageButton;
        /* 0x2F0 */ u8 unk2F0[0x378];
        /* 0x668 */ u8 previousPage;
        /* 0x669 */ u8 nextPage;
    };
    ContentListInputView *view = static_cast<ContentListInputView *>(work);
    contentListUpdateNavigation();
    if (view->pagesEnabled != 0) {
        if (FUN_001517b4(8, 1) != 0) {
            eventQueueAddUniqueIfValid(0x1000210);
            uiSpriteSetKeyframe(&view->pageButton, 6, 0);
            uiSpriteSetImageKeyframe(&view->pageButton, 1, 0);
            view->previousPage = 1;
            FUN_004029f4(work, 6, 7);
        }
        if (FUN_001517b4(7, 1) != 0) {
            eventQueueAddUniqueIfValid(0x1000210);
            uiSpriteSetKeyframe(&view->pageButton, 7, 0);
            uiSpriteSetImageKeyframe(&view->pageButton, 1, 0);
            view->nextPage = 1;
            FUN_004029f4(work, 6, 7);
        }
    }
    if (FUN_001517b4(1, 1) != 0) {
        eventQueueAddUniqueIfValid(0x100020F);
        uiSpriteSetKeyframe(&view->cancelButton, 2, 0);
        uiSpriteSetImageKeyframe(&view->cancelButton, 1, 0);
        FUN_004029f4(work, 5, 3);
    }
}
}

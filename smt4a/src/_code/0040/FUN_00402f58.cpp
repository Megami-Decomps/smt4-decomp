/* NON_MATCHING: retail reuses the saved 1 for the two page image keyframes; the build rematerializes it. */
#include "addon/ContentListScreen.h"
#include "ui/UiSpriteApi.h"

extern "C" {
s32 padQueryLogicalKey(u32 button, s32 repeat);
void eventQueueAddUniqueIfValid(u32 event);
void FUN_004029f4(void *work, s32 state, s32 next);

/* Processes page changes and cancellation, including their button sprite animations. */
void FUN_00402f58(ContentListScreen *screen)
{
    contentListUpdateNavigation(screen);
    if (screen->pagesEnabled != 0) {
        if (padQueryLogicalKey(8, 1) != 0) {
            eventQueueAddUniqueIfValid(0x1000210);
            uiSpriteSetKeyframe(&screen->sprites[CONTENT_LIST_SPRITE_PAGE], 6, 0);
            uiSpriteSetImageKeyframe(&screen->sprites[CONTENT_LIST_SPRITE_PAGE], 1, 0);
            screen->previousPage = 1;
            FUN_004029f4(screen, 6, 7);
        }
        if (padQueryLogicalKey(7, 1) != 0) {
            eventQueueAddUniqueIfValid(0x1000210);
            uiSpriteSetKeyframe(&screen->sprites[CONTENT_LIST_SPRITE_PAGE], 7, 0);
            uiSpriteSetImageKeyframe(&screen->sprites[CONTENT_LIST_SPRITE_PAGE], 1, 0);
            screen->nextPage = 1;
            FUN_004029f4(screen, 6, 7);
        }
    }
    if (padQueryLogicalKey(1, 1) != 0) {
        eventQueueAddUniqueIfValid(0x100020F);
        uiSpriteSetKeyframe(&screen->sprites[CONTENT_LIST_SPRITE_CANCEL], 2, 0);
        uiSpriteSetImageKeyframe(&screen->sprites[CONTENT_LIST_SPRITE_CANCEL], 1, 0);
        FUN_004029f4(screen, 5, 3);
    }
}
} /* extern "C" */

/* NON_MATCHING: the switch, the calls, the block layout and the data accesses are retail's; two things differ.
 * Retail holds the row limits 10 and 9 in r1/r2 for both selections of the clamp in state 1 (the build uses
 * immediates, two instructions fewer): they were variables in the original. Two non-const locals give that
 * (28 lines off) and so does an inline taking both limits (28 by shape), but nothing else shows either, so the
 * macro stays. Retail also keeps &g_useCounter in fp and the help colour in r9; the build has them the other way
 * round. */
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "shard/W6_W6Match6_SortMenu.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "event/2dEvent/2dEventTex.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "code/Code0029_VariantA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

#define SORT_MENU_TEXTURES 21
#define SORT_MENU_HELP_COLOR 0xF4F4F4FF
/* The rows the list shows at once. */
#define SORT_MENU_ROWS(work) ((work)->option == 2 ? 10 : 9)

extern "C" {

extern SortMenuSingleton g_useCounter;
const char *mapGetDisplayName(u32 id);
void buttonHelpSetText(const s8 *text, u32 color);
void buttonHelpSetHelpState(u8 value);
void buttonHelpSetTextVisible(u8 value);
s16 ifTouchRegionAddRequested(u32 file, s32 index);
s32 uiListGetVisibleCount(GridNavigation *list);
/* Moves the list's cursor from the scroll bar or a touched row; `decide` is set when a row is tapped. */
u32 uiScrollHandleActionsOrTouch(GridNavigation *list, const TextureTableEntryIV *sprite, const s16 *rows,
                                 u32 thumb, u32 previous, u32 next, s8 *decide, s32 alternateAxis, s32 notify);
/* Moves the list's cursor from the pad. */
u8 gridNavigationHandleConfirm(GridNavigation *list, s32 notify);
s32 padQueryLogicalKey(s32 key, s32 mode);

/* Advances the frame and, when the list scrolls, the scroll bar. */
static __inline void sortMenuAdvanceFrame(SortMenuWork *work)
{
    uiSpriteAdvanceAnimation(&work->sprites[10], 1.0f);
    uiSpriteAdvanceAnimation(&work->sprites[11], 1.0f);
    if ((s32)gridNavigationGetItemCount(&work->list) > uiListGetVisibleCount(&work->list)) {
        uiSpriteAdvanceAnimation(&work->sprites[12], 1.0f);
    }
}

/* The sort key of the row the cursor is on. */
static __inline u8 sortMenuCursorKey(SortMenuWork *work)
{
    return work->keys[resourceRunOperationIfUnblocked((Object *)&work->list) + listCursorGetRowIfUnblocked(&work->list)];
}

/* Shows the help line of the sort key under the cursor. */
static __inline void sortMenuShowCursorHelp(SortMenuWork *work)
{
    buttonHelpSetText((const s8 *)mapGetDisplayName(sortMenuCursorKey(work)), SORT_MENU_HELP_COLOR);
}

/* Closes the menu: frees its touch regions and puts the button help back. Retail inlines the body of
   touchMenuClose (0x26xxxx), which reads the work from the global again. */
static __inline void sortMenuClose(void)
{
    SortMenuWork *work = g_useCounter.work;

    work->state = 4;
    for (s32 i = 0; i < work->touchRegionCount; i++) {
        work->ids[i] = -1;
        ifTouchRegionRemove();
    }
    if (work->option == 2 || work->option == 1) {
        return;
    }
    if (work->helpSaved) {
        if (work->helpIsDefault) {
            buttonHelpSetHelpState(1);
        } else {
            buttonHelpSetText((const s8 *)work->helpText, SORT_MENU_HELP_COLOR);
        }
        work->helpSaved = 0;
    } else {
        buttonHelpSetTextVisible(0);
    }
}

/* Goes back to choosing after a decision; the next decision on the same key flips the order. Retail inlines the
   body of useCounterSelectMode2, which reads the work from the global again. */
static __inline void sortMenuResume(void)
{
    SortMenuWork *work = g_useCounter.work;

    work->decided = 0;
    work->state = 2;
    if (work->ascending) {
        work->ascending = 0;
    } else {
        work->ascending = 1;
    }
}

/* The sort menu's update. */
s32 sortMenuCalcUpdate(u32 job)
{
    SortMenuWork *work = g_useCounter.work;
    s8 decide = 0;

    switch (work->state) {
    case 0:
    case 4:
        break;
    case 1: {
        /* The rows slide in one frame apart; the menu opens when the last one has arrived. */
        s32 rows = work->count;
        if (rows > SORT_MENU_ROWS(work)) {
            rows = SORT_MENU_ROWS(work);
        }
        for (s32 i = 0; i < rows; i++) {
            if (work->frame < i) {
                continue;
            }
            uiSpriteAdvanceAnimation(&work->sprites[i], 1.0f);
            if (i < rows - 1 || !uiSpriteGetCompletionState(&work->sprites[i])) {
                continue;
            }
            work->state = 2;
            if (work->option == 2) {
                for (s32 j = 0; j < rows; j++) {
                    work->ids[3 + j] = ifTouchRegionAddRequested(SORT_MENU_TEXTURES, j + 43);
                    work->touchRegionCount++;
                }
            } else {
                for (s32 j = 0; j < rows; j++) {
                    work->ids[3 + j] = ifTouchRegionAddRequested(SORT_MENU_TEXTURES, j + 7);
                    work->touchRegionCount++;
                }
            }
            sortMenuShowCursorHelp(work);
            if ((s32)gridNavigationGetItemCount(&work->list) > uiListGetVisibleCount(&work->list)) {
                work->ids[0] = ifTouchRegionAddRequested(SORT_MENU_TEXTURES, 70);
                work->ids[1] = ifTouchRegionAddRequested(SORT_MENU_TEXTURES, 71);
                work->ids[2] = ifTouchRegionAddRequested(SORT_MENU_TEXTURES, 72);
                work->touchRegionCount += 3;
            }
        }
        break;
    }
    case 2: {
        sortMenuAdvanceFrame(work);
        s32 row = resourceRunOperationIfUnblocked((Object *)&work->list) + listCursorGetRowIfUnblocked(&work->list);
        if (uiScrollHandleActionsOrTouch(&work->list, asdTMTexTableEntryAt(SORT_MENU_TEXTURES, 72), &work->ids[3],
                                         work->ids[2], work->ids[0], work->ids[1], &decide, 0, 1)) {
            if (listCursorGetRowIfUnblocked(&work->list) != row) {
                work->ascending = 1;
            }
            /* Both arms show the same help here (retail still loads the option); in IV, where the help lookup is
               inlined, the two arms were compiled differently (smt4 sortMenuUpdate). */
            if (work->option == 2) {
                sortMenuShowCursorHelp(work);
            } else {
                sortMenuShowCursorHelp(work);
            }
        } else if (gridNavigationHandleConfirm(&work->list, 1)) {
            work->ascending = 1;
            if (work->option == 2) {
                sortMenuShowCursorHelp(work);
            } else {
                sortMenuShowCursorHelp(work);
            }
        } else if (padQueryLogicalKey(0, 1) || decide) {
            /* Decided: the preference takes the key and the order. */
            work->decided = 1;
            work->state = 3;
            if (work->owner >= 0) {
                SortPreference *preference = (SortPreference *)(saveGetUserSettingsBlock() + work->owner);
                preference->key = sortMenuCursorKey(work);
                preference->descending = !work->ascending;
            }
            eventQueueAddUniqueIfValid(0x100020E);
        } else if (padQueryLogicalKey(1, 1)) {
            sortMenuClose();
            eventQueueAddUniqueIfValid(0x100020F);
        }
        break;
    }
    case 3:
        sortMenuAdvanceFrame(work);
        if (work->option != 2) {
            sortMenuResume();
        }
        break;
    }
    work->frame++;
    return 0;
}

} /* extern "C" */

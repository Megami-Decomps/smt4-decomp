/* NON_MATCHING: the switch, the calls, the frame's shared search key and the data accesses follow retail; the
 * register allocation does not. Retail keeps 0 in fp and 1 in r7 (the build: r8 and fp), spills the list pointer in
 * state 2 as well (sp+20, which makes its frame 8 bytes larger), holds 10 and 9 in r1/r2 for both row-limit
 * selections and skips the empty-list test after clamping, and so merges the four help lookups of state 2
 * differently. */
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "shard/W6_W6Match6_SortMenu.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "status/StatusCamera.h"
#include "gamedata/DataTable.h"
#include "util/BinarySearch.h"
#include "code/Code0029.h"
#include "code/Code0029_Smt4.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

#define SORT_MENU_TEXTURES 30
#define SORT_MENU_HELP_COLOR 0x323232FF
/* The rows the list shows at once. */
#define SORT_MENU_ROWS(work) ((work)->option == 2 ? 10 : 9)

extern "C" {

extern SortMenuSingleton g_useCounter;
u32 resourceRunOperationIfUnblocked(const GridNavigation *grid);
void buttonHelpSetText(const char *text, u32 color);
s32 ifTouchRegionAddRequested(u32 file, s32 index);
/* Moves the list's cursor from the scroll bar or a touched row; `cancel` is set when the back region is touched. */
u32 uiScrollHandleActionsOrTouch(GridNavigation *list, const TextureTableEntryIV *sprite, const s16 *rows,
                                 s32 thumb, s32 previous, s32 next, s8 *decide, s32 alternateAxis, s32 notify);
/* Moves the list's cursor from the pad. */
u8 FUN_0029efd8(GridNavigation *list, s32 notify);
s32 FUN_002c1658(s32 button, s32 mode);

/* Advances the frame and, when the list scrolls, the scroll bar. */
static __inline void sortMenuAdvanceFrame(SortMenuWork *work)
{
    uiSpriteAdvanceAnimation(&work->sprites[10]);
    uiSpriteAdvanceAnimation(&work->sprites[11]);
    GridNavigation *list = &work->list;
    if (static_cast<s32>(FUN_0029ee54(list)) > static_cast<s32>(FUN_0029d644(list))) {
        uiSpriteAdvanceAnimation(&work->sprites[12]);
    }
}

/* The sort key of the row the cursor is on. */
static __inline u8 sortMenuCursorKey(SortMenuWork *work, GridNavigation *list)
{
    return work->keys[resourceRunOperationIfUnblocked(list) + listCursorGetRowIfUnblocked(list)];
}

/* Closes the menu: frees its touch regions and puts the button help back. Retail inlines the body of
   touchMenuClose (0x28xxxx), which reads the work from the global again. */
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
            FUN_00220d24(1);
        } else {
            buttonHelpSetText(work->helpText, SORT_MENU_HELP_COLOR);
        }
        work->helpSaved = 0;
    } else {
        FUN_00295214(0);
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
s32 sortMenuUpdate(u32 job)
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
        GridNavigation *list = &work->list;
        for (s32 i = 0; i < rows; i++) {
            if (work->frame < i) {
                continue;
            }
            uiSpriteAdvanceAnimation(&work->sprites[i]);
            if (i < rows - 1 || !uiSpriteGetCompletionState(&work->sprites[i])) {
                continue;
            }
            work->state = 2;
            const char *help;
            u8 key;
            if (work->option != 2) {
                for (s32 j = 0; j < rows; j++) {
                    work->ids[3 + j] = ifTouchRegionAddRequested(SORT_MENU_TEXTURES, j + 7);
                    work->touchRegionCount++;
                }
                key = sortMenuCursorKey(work, list);
                help = key >= SORT_MENU_KEY_COUNT ? NULL : sortMenuFindKey(key)->help;
            } else {
                for (s32 j = 0; j < rows; j++) {
                    work->ids[3 + j] = ifTouchRegionAddRequested(SORT_MENU_TEXTURES, j + 43);
                    work->touchRegionCount++;
                }
                key = sortMenuCursorKey(work, list);
                help = key >= SORT_MENU_KEY_COUNT ? NULL : sortMenuFindKey(key)->help;
            }
            buttonHelpSetText(help, SORT_MENU_HELP_COLOR);
            if (static_cast<s32>(FUN_0029ee54(list)) > static_cast<s32>(FUN_0029d644(list))) {
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
        GridNavigation *list = &work->list;
        s32 row = resourceRunOperationIfUnblocked(list) + listCursorGetRowIfUnblocked(list);
        const char *help = NULL;
        u8 key;
        if (uiScrollHandleActionsOrTouch(list, asdTMTexTableEntryAt(SORT_MENU_TEXTURES, 72), &work->ids[3],
                                         work->ids[2], work->ids[0], work->ids[1], &decide, 0, 1)) {
            if (listCursorGetRowIfUnblocked(list) != row) {
                work->ascending = 1;
            }
            if (work->option == 2) {
                key = sortMenuCursorKey(work, list);
                if (key < SORT_MENU_KEY_COUNT) {
                    help = sortMenuFindKey(key)->help;
                }
                buttonHelpSetText(help, SORT_MENU_HELP_COLOR);
            } else {
                key = sortMenuCursorKey(work, list);
                buttonHelpSetText(key >= SORT_MENU_KEY_COUNT ? NULL : sortMenuFindKey(key)->help, SORT_MENU_HELP_COLOR);
            }
        } else if (FUN_0029efd8(list, 1)) {
            work->ascending = 1;
            if (work->option == 2) {
                key = sortMenuCursorKey(work, list);
                if (key < SORT_MENU_KEY_COUNT) {
                    help = sortMenuFindKey(key)->help;
                }
                buttonHelpSetText(help, SORT_MENU_HELP_COLOR);
            } else {
                key = sortMenuCursorKey(work, list);
                buttonHelpSetText(key >= SORT_MENU_KEY_COUNT ? NULL : sortMenuFindKey(key)->help, SORT_MENU_HELP_COLOR);
            }
        } else if (FUN_002c1658(0, 1) || decide) {
            /* Decided: the preference keeps the key in its low seven bits and "descending" in bit 7. */
            work->decided = 1;
            work->state = 3;
            if (work->owner >= 0) {
                u8 *preference = gameDataGetSortPreferences() + work->owner;
                *preference = (*preference & ~0x7F) | (sortMenuCursorKey(work, list) & 0x7F);
                if (work->ascending) {
                    *preference &= ~0x80;
                } else {
                    *preference |= 0x80;
                }
            }
            eventQueueAddUniqueIfValid(0x100016D);
        } else if (FUN_002c1658(1, 1)) {
            sortMenuClose();
            eventQueueAddUniqueIfValid(0x100016E);
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

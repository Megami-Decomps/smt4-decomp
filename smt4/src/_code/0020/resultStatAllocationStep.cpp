/* NON_MATCHING: 419 lines (383 by shape): the flow, calls, constants and frame size are retail's; what is left is
 * allocation. Retail keeps the work in r6, the stat pointer in r4 and the points pointer in r5 (r5/r6/r4 here), puts
 * the cursor spill, the two touch flags, the special byte and the changed flag at sp+20/24/28/44/60 (other slots
 * here), reads the changed flag back from the stack after the confirmation question where this build knows it is
 * zero, and compares the first stat's gain on the left (`cmp r8, r2`) in the even-spread test. */
#include "result/Result.h"
#include "ui/UiSpriteApi.h"
#include "gamedata/DataTable.h"
#include "gamedata/GamePlayerData.h"
#include "gfx/TrackedRecord.h"
#include "script/scrScriptProcess.h"
#include "bible/bibleDevil.h"
#include "code/Code0029_Smt4.h"
#include "code/Code002a_Smt4.h"
#include "code/Code002a_VariantA.h"
#include "quest_center/qcMain.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "script/ScriptEntry.h"

struct StatBlock;
struct MenuTask;
struct UnitRecord;

extern "C" {

void eventQueueAddUniqueIfValid(s32 event); // declcheck: local (shard/W5_W5Match7_FlagBanks.h's asdMemoryAlloc conflicts with this unit's headers)
s32 ifTouchRegionAdd(s32 x, s32 y, s32 width, s32 height); // declcheck: local (callers pass sign-extended halfwords; the shared u16 prototype zero-extends them)
u8 ifTouchGetSelectionModeForRegion(int id);
s32 ifTouchRegionAddRequested(u32 file, s32 index);
u32 uiScrollHandleActionsOrTouch(FlaggedEntry *owner, const TextureTableEntryIV *sprite, const s16 *actions,
                                 s32 firstAction, s32 secondAction, s32 thirdAction, s8 *specialAction,
                                 s32 alternateAxis, s32 notify);
u8 gridNavigationHandleConfirm(FlaggedEntry *cursor, s32 mode);
s32 inputQueryButtonState(s32 key, s32 mode);
void buttonHelpSetText(const s8 *text, u32 style);
u32 messageMainGetChoiceResult(void);
s32 buttonHelpGetStatus(void);
void playerRecalcStatsFromEquipment(PlayerDataIV *player);
void btlBuildDemonSnapshotFromSaveRecord(UnitRecord *unit);
u32 statsAreAllCapped(const StatBlock *block);
void resultSetMenuState(MenuTask *task, int newState);
void statusRefundPlayerStatAllocation(ResultWork *work);

/* A stat's cap. Its own enum: with the sound ids above 0xFFFF in the same enum its type would be unsigned and the
 * stats' compares with it too. */
enum {
    STAT_MAXIMUM = 999
};

enum {
    STAT_TABLE = 0x28,              /* the stat allocation's sprite table */
    STAT_ROW_SPRITE = 0xBA,         /* the first of the five stat rows */
    STAT_ARROW_INCREASE = 0x116,
    STAT_ARROW_DECREASE = 0x117,
    HELP_ALLOCATE = 99,             /* button help presets: points left to hand out, */
    HELP_CONFIRM = 0xBC,            /* none left (or every stat at its cap), */
    HELP_QUESTION = 0x9A,           /* and the confirmation question */
    HELP_TEXT_STYLE = 0x323232FF,
    SE_MOVE = 0x100016C,
    SE_ACCEPT = 0x100016D,
    SE_REFUSE = 0x100016E
};

/* The help text of stat `row`: a 0x50-byte row of table 0x25, section 1 (NULL past its end). */
static __inline const s8 *statHelpText(u32 row)
{
    void *table = dataTableGet(0x25, 1);
    const s8 *text = (const s8 *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    for (u32 i = 0; i < count; i++) {
        if (i == row) {
            return text;
        }
        text += 0x50;
    }
    return NULL;
}

/* Shows the help text of the stat the cursor is on. */
static __inline void showStatHelp(FlaggedEntry *cursor)
{
    buttonHelpSetText(statHelpText(listCursorGetRowIfUnblocked(cursor)), HELP_TEXT_STYLE);
}

/* The stat allocation panel's sprite: the 0x8C bytes that start at the reward position. */
static __inline UiSpriteState *panelSprite(ResultWork *work)
{
    return (UiSpriteState *)&work->rewardPosition;
}

/* Whether the player's five stats have all reached the cap. */
static __inline u32 playerStatsCapped(void)
{
    return statsAreAllCapped((const StatBlock *)&gameGetPlayerData()->baseStats);
}

/* Runs the level-up stat allocation of the result screen: registers the rows' touch regions, waits for the panel
 * and the script, lets the player move points between the five stats (pad or touch, with "refund all" and "spread
 * evenly"), asks for confirmation and closes the panel. */
void resultStatAllocationStep(ResultWork *work)
{
    uiSpriteAdvanceAnimation(&work->statHighlight.sprite);
    switch (work->step) {
    case 0:
        FUN_0029ede8(0x18, gameGetPlayerData()->level - work->entries[work->current].level, -1, 0);
        uiSpriteSetKeyframe(panelSprite(work), 0, 0);
        for (s32 i = 0; i < 5; i++) {
            work->statRowRegions[i] = ifTouchRegionAddRequested(STAT_TABLE, i + STAT_ROW_SPRITE);

            TextureTableEntryIV *row = asdTMTexTableEntryAt(STAT_TABLE, i + STAT_ROW_SPRITE);
            TextureTableEntryIV *arrow = asdTMTexTableEntryAt(STAT_TABLE, STAT_ARROW_DECREASE);
            work->statArrowRegions[i].decrease =
                ifTouchRegionAdd((s16)(row->x + arrow->x - arrow->placement->width * 2), (s16)(row->y + arrow->y),
                                 (s16)(arrow->placement->width * 3), arrow->placement->height);

            row = asdTMTexTableEntryAt(STAT_TABLE, i + STAT_ROW_SPRITE);
            arrow = asdTMTexTableEntryAt(STAT_TABLE, STAT_ARROW_INCREASE);
            work->statArrowRegions[i].increase =
                ifTouchRegionAdd((s16)(row->x + arrow->x), (s16)(row->y + arrow->y),
                                 (s16)(arrow->placement->width * 3), arrow->placement->height);
            work->touchRegionCount += 3;
        }
        work->step++;
        /* fall through */
    case 1:
        uiSlidingSpriteAdvance(panelSprite(work), 0);
        if (FUN_0029563c() && uiSpriteGetCompletionState(panelSprite(work)) != 0 && scrScriptProcessStartEntry(work->process, 0)) {
            work->step++;
        }
        break;

    case 2:
        if (scrRunOpcodesStub(work->process) == 2) {
            buttonHelpSetPreset(HELP_ALLOCATE);
            showStatHelp(&work->statCursor);
            work->step++;
        }
        break;

    case 3: {
        s32 increaseTouched = 0;
        s32 changed = 0;
        s32 decreaseTouched = 0;
        s8 special = 0;
        s32 previousRow = listCursorGetRowIfUnblocked(&work->statCursor);
        s16 *stat = NULL;       /* the stat under the cursor, and the value it started the level-up with */
        s16 *base = NULL;
        switch (listCursorGetRowIfUnblocked(&work->statCursor)) {
        case 0:
            stat = &gameGetPlayerData()->baseStats.stats[0];
            base = &work->entries[work->current].baseStats[0];
            break;
        case 1:
            stat = &gameGetPlayerData()->baseStats.stats[1];
            base = &work->entries[work->current].baseStats[1];
            break;
        case 2:
            stat = &gameGetPlayerData()->baseStats.stats[2];
            base = &work->entries[work->current].baseStats[2];
            break;
        case 3:
            stat = &gameGetPlayerData()->baseStats.stats[3];
            base = &work->entries[work->current].baseStats[3];
            break;
        case 4:
            stat = &gameGetPlayerData()->baseStats.stats[4];
            base = &work->entries[work->current].baseStats[4];
            break;
        }

        /* A touch on a row's arrow moves the cursor there; a tap (mode 6) also presses the arrow. */
        for (s32 i = 0; i < 5; i++) {
            s32 mode = ifTouchGetSelectionModeForRegion(work->statArrowRegions[i].decrease);
            if (mode == 1 || mode == 2) {
                flaggedEntrySetValueA(&work->statCursor, i);
                break;
            }
            if (mode == 6) {
                flaggedEntrySetValueA(&work->statCursor, i);
                decreaseTouched = 1;
                break;
            }
            mode = ifTouchGetSelectionModeForRegion(work->statArrowRegions[i].increase);
            if (mode == 1 || mode == 2) {
                flaggedEntrySetValueA(&work->statCursor, i);
                break;
            }
            if (mode == 6) {
                flaggedEntrySetValueA(&work->statCursor, i);
                increaseTouched = 1;
                break;
            }
        }
        if (increaseTouched || decreaseTouched || listCursorGetRowIfUnblocked(&work->statCursor) != previousRow) {
            showStatHelp(&work->statCursor);
        }
        if (listCursorGetRowIfUnblocked(&work->statCursor) != previousRow) {
            eventQueueAddUniqueIfValid(SE_MOVE);
        }

        if (uiScrollHandleActionsOrTouch(&work->statCursor, NULL, work->statRowRegions, -1, -1, -1, &special, 0, 1) ||
            gridNavigationHandleConfirm(&work->statCursor, 0)) {
            /* The cursor moved. */
            showStatHelp(&work->statCursor);
            if (listCursorGetRowIfUnblocked(&work->statCursor) != previousRow) {
                eventQueueAddUniqueIfValid(SE_MOVE);
            }
        } else if (inputQueryButtonState(4, 0) || decreaseTouched) {
            /* Left: take a point back, down to the stat's starting value. */
            if (*stat > *base) {
                (*stat)--;
                work->remainingPoints++;
                eventQueueAddUniqueIfValid(SE_MOVE);
                changed = 1;
            } else {
                eventQueueAddUniqueIfValid(SE_REFUSE);
            }
        } else if (inputQueryButtonState(3, 0) || increaseTouched) {
            /* Right: spend a point. */
            if (work->remainingPoints > 0) {
                if (*stat < STAT_MAXIMUM) {
                    (*stat)++;
                    work->remainingPoints--;
                    eventQueueAddUniqueIfValid(SE_MOVE);
                    changed = 1;
                } else {
                    eventQueueAddUniqueIfValid(SE_MOVE);
                }
            } else {
                eventQueueAddUniqueIfValid(SE_REFUSE);
            }
        } else if (inputQueryButtonState(1, 1)) {
            /* Cancel: refund everything. */
            statusRefundPlayerStatAllocation(work);
            eventQueueAddUniqueIfValid(SE_REFUSE);
            changed = 1;
        } else if (inputQueryButtonState(9, 1)) {
            /* Spread the points evenly, starting again from the first stat; refused when nothing is left and the
             * allocation is already even. */
            bool even = true;
            s16 first = gameGetPlayerData()->baseStats.stats[0] - work->entries[work->current].baseStats[0];
            PlayerDataIV *player = gameGetPlayerData();
            const s16 *current = player->baseStats.stats;
            const s16 *start = work->entries[work->current].baseStats;
            for (s32 i = 0; i < 5; i++) {
                if (first != (s16)(*current - *start)) {
                    even = false;
                    break;
                }
                current++;
                start++;
            }
            s32 sound = SE_ACCEPT;
            if (work->remainingPoints <= 0 && even) {
                sound = SE_REFUSE;
            }
            eventQueueAddUniqueIfValid(sound);
            statusRefundPlayerStatAllocation(work);
            if (work->remainingPoints > 0) {
                s32 index = 0;
                for (;;) {
                    if (index == 0) {
                        gameGetPlayerData()->baseStats.stats[0]++;
                    } else if (index == 1) {
                        gameGetPlayerData()->baseStats.stats[1]++;
                    } else if (index == 2) {
                        gameGetPlayerData()->baseStats.stats[2]++;
                    } else if (index == 3) {
                        gameGetPlayerData()->baseStats.stats[3]++;
                    } else if (index == 4) {
                        gameGetPlayerData()->baseStats.stats[4]++;
                    }
                    if (--work->remainingPoints <= 0) {
                        break;
                    }
                    if (++index >= 5) {
                        index = 0;
                    }
                }
            }
            changed = 1;
        } else if (inputQueryButtonState(0, 1)) {
            /* Confirm: ask to finish once nothing can be spent, else spend a point. */
            if (work->remainingPoints == 0 || playerStatsCapped()) {
                messageStatesSetFirst(0);
                buttonHelpSetPreset(HELP_QUESTION);
                scrScriptProcessStartEntry(work->process, 11);
                work->step++;
                eventQueueAddUniqueIfValid(SE_ACCEPT);
            } else if (*stat >= STAT_MAXIMUM) {
                eventQueueAddUniqueIfValid(SE_ACCEPT);
            } else {
                (*stat)++;
                work->remainingPoints--;
                eventQueueAddUniqueIfValid(SE_ACCEPT);
                changed = 1;
            }
        } else if (inputQueryButtonState(0, 1)) {
            if (work->remainingPoints > 0 && *stat < STAT_MAXIMUM) {
                (*stat)++;
                work->remainingPoints--;
                eventQueueAddUniqueIfValid(SE_ACCEPT);
                changed = 1;
            } else {
                eventQueueAddUniqueIfValid(SE_ACCEPT);
            }
        }

        if (!changed && !playerStatsCapped()) {
            return;
        }
        /* The button help follows whether a point can still be spent. */
        if (work->remainingPoints > 0 && !playerStatsCapped()) {
            if (buttonHelpGetStatus() == HELP_CONFIRM) {
                buttonHelpSetPreset(HELP_ALLOCATE);
            }
        } else {
            if (buttonHelpGetStatus() == HELP_ALLOCATE) {
                buttonHelpSetPreset(HELP_CONFIRM);
            }
        }
        playerRecalcStatsFromEquipment(NULL);
        btlBuildDemonSnapshotFromSaveRecord((UnitRecord *)gameGetPlayerData());
        break;
    }

    case 4:
        if (scrRunOpcodesStub(work->process) != 2) {
            break;
        }
        messageStatesSetFirst(1);
        FUN_0029c424(0);
        if (messageMainGetChoiceResult() == 0) {
            uiSpriteSetKeyframe(panelSprite(work), 1, 0);
            work->step++;
            break;
        }
        /* Refused: back to the allocation. */
        work->step = 3;
        scrScriptProcessStartEntry(work->process, 0);
        buttonHelpSetPreset(HELP_CONFIRM);
        showStatHelp(&work->statCursor);
        break;

    case 5:
        if (uiSpriteAdvanceAnimation(panelSprite(work))) {
            buttonHelpSetText(NULL, HELP_TEXT_STYLE);
            resultSetMenuState((MenuTask *)work, 0x12);
        }
        break;
    }
}

} /* extern "C" */

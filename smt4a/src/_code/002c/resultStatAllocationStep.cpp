/* NON_MATCHING: 336 lines (166 by shape; 796 vs 794 rows), complete: the flow, calls, constants and frame size are
 * retail's. What is left is allocation: the stack slots of the sprite pointer and the touch flags, the registers of the
 * arrow regions' x sums, the panel step's route through s16 (retail: `vmoveq s0, s16` over the table call), and which
 * copy of the cross-jumped sound calls survives. */
#include "shard/X14_EngineUnits.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "ui/FloatTableLookup.h"
#include "gamedata/DataTable.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "shop/ShopItemDescription.h"
#include "gfx/TrackedRecord.h"
#include "script/scrScriptProcess.h"
#include "event/2dEvent/EventEffect.h"
#include "code/Code0022_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "code/Code0033.h"
#include "code/Code0035.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "script/ScriptEntry.h"

struct StatBlock;
struct PlayerStats;

extern "C" {

void eventQueueAddUniqueIfValid(s32 event); // declcheck: local (shard/W5_W5Match7_FlagBanks.h's asdMemoryAlloc conflicts with this unit's headers)
s32 ifTouchRegionAdd(s32 x, s32 y, s32 width, s32 height); // declcheck: local (callers pass sign-extended halfwords; the shared u16 prototype zero-extends them)
s16 ifTouchRegionAddRequested(u32 file, s32 index);
u32 uiScrollHandleActionsOrTouch(FlaggedEntry *owner, const TextureTableEntryIV *sprite, const s16 *actions,
                                 s32 firstAction, s32 secondAction, s32 thirdAction, s8 *specialAction,
                                 s32 alternateAxis, s32 notify);
u8 gridNavigationHandleConfirm(FlaggedEntry *cursor, s32 mode);
s32 padQueryLogicalKey(s32 key, s32 mode);
void buttonHelpSetText(const s8 *text, u32 color);
void sysPlaySe(u32 id);
void dialogClose(s32 immediate);
void infoWinSetTimer(u32 timer);
u8 infoWinHasValue(void);
void resultSetMode(ResultWorkA *result, s32 state);
u32 statsAreAllCapped(const StatBlock *block);
void FUN_003df7c4(PlayerStats *stats);
void FUN_00372100(s32 first, s32 second);
u32 NaviMain_GetPosY(void);

/* A stat's cap. Its own enum: with the sound ids above 0xFFFF in the same enum its type would be unsigned and the
 * stats' compares with it too. */
enum {
    STAT_MAXIMUM = 999
};

enum {
    STAT_TABLE = 0x1D,              /* the stat allocation's sprite table */
    STAT_ROW_SPRITE = 0xBA,         /* the first of the five stat rows */
    STAT_ARROW_INCREASE = 0x116,
    STAT_ARROW_DECREASE = 0x117,
    HELP_TEXT_STYLE = 0xF4F4F4FF,
    SE_MOVE = 0x100020D,
    SE_ACCEPT = 0x100020E,
    SE_REFUSE = 0x100020F
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

/* The stat rows' cursor, as the list functions take it. */
static __inline FlaggedEntry *statCursor(ResultWorkA *work)
{
    return (FlaggedEntry *)&work->statList;
}

/* Shows the help text of the stat the cursor is on. */
static __inline void showStatHelp(ResultWorkA *work)
{
    buttonHelpSetText(statHelpText(listCursorGetRowIfUnblocked(statCursor(work))), HELP_TEXT_STYLE);
}

/* Whether the player's five stats have all reached the cap. */
static __inline u32 playerStatsCapped(void)
{
    return statsAreAllCapped((const StatBlock *)&gameGetPlayerData()->baseStats);
}

/* Recomputes the player's derived values after a stat changed. */
static __inline void playerStatsRefresh(void)
{
    FUN_003df7c4(NULL);
    FUN_00372100((s32)gameGetPlayerData(), 0);
}

/* IV's statusRefundPlayerStatAllocation, inlined here: puts the player's five stats back to their values before the
 * level-up and returns the points. */
static __inline void statusRefundPlayerStatAllocation(ResultWorkA *work)
{
    s32 refunded = gameGetPlayerData()->baseStats.stats[0] - work->units[work->current].baseStats[0];
    gameGetPlayerData()->baseStats.stats[0] = work->units[work->current].baseStats[0];
    refunded += gameGetPlayerData()->baseStats.stats[1] - work->units[work->current].baseStats[1];
    gameGetPlayerData()->baseStats.stats[1] = work->units[work->current].baseStats[1];
    refunded += gameGetPlayerData()->baseStats.stats[2] - work->units[work->current].baseStats[2];
    gameGetPlayerData()->baseStats.stats[2] = work->units[work->current].baseStats[2];
    refunded += gameGetPlayerData()->baseStats.stats[3] - work->units[work->current].baseStats[3];
    gameGetPlayerData()->baseStats.stats[3] = work->units[work->current].baseStats[3];
    refunded += gameGetPlayerData()->baseStats.stats[4] - work->units[work->current].baseStats[4];
    gameGetPlayerData()->baseStats.stats[4] = work->units[work->current].baseStats[4];
    work->statPointTotal += refunded;
}

/* Runs the level-up stat allocation of the result screen (IV's resultStatAllocationStep): registers the rows' touch
 * regions, waits for the panel and the script, lets the player move points between the five stats (pad or touch,
 * with "refund all"), asks for confirmation once no point is left and closes the panel. */
void resultStatAllocationStep(ResultWorkA *work)
{
    uiSpriteAdvanceAnimation(&work->listSprites[8], 1.0f);
    switch (work->step) {
    case 0:
        work->unk7538 = gameGetPlayerData()->level - work->units[work->current].id;
        entryTableResetAndInit(0x18, work->unk7538, -1, 0);
        uiSpriteSetKeyframe(&work->gridCursor, 0, 0);
        for (s32 i = 0; i < 5; i++) {
            work->statRowRegions[i] = ifTouchRegionAddRequested(STAT_TABLE, i + STAT_ROW_SPRITE);
            TextureTableEntryIV *row = asdTMTexTableEntryAt(STAT_TABLE, i + STAT_ROW_SPRITE);
            TextureTableEntryIV *arrow = asdTMTexTableEntryAt(STAT_TABLE, STAT_ARROW_DECREASE);
            work->statArrowRegions[i].second =
                ifTouchRegionAdd((s16)(row->x + arrow->x - arrow->placement->width * 2), (s16)(row->y + arrow->y),
                                 (s16)(arrow->placement->width * 3), arrow->placement->height);
            row = asdTMTexTableEntryAt(STAT_TABLE, i + STAT_ROW_SPRITE);
            arrow = asdTMTexTableEntryAt(STAT_TABLE, STAT_ARROW_INCREASE);
            work->statArrowRegions[i].first =
                ifTouchRegionAdd((s16)(row->x + arrow->x), (s16)(row->y + arrow->y),
                                 (s16)(arrow->placement->width * 3), arrow->placement->height);
            work->touchRegionCount += 3;
        }
        work->step++;
        /* fall through */
    case 1:
        uiSpriteAdvanceAnimation(&work->gridCursor,
                                 work->unk7F50 != 0 ? engineGetFloatTableValue(work->unk7F40, 0) : 1.0f);
        if (gameFlagIsSet(0x45F)) {
            /* The first time: explain the screen before the script runs. */
            if (FUN_0022e750() && uiSpriteGetCompletionState(&work->gridCursor) != 0) {
                infoWinSetText((const char *)work->buffer43A4, 0xCC);
                dialogOpen(1, 1);
                infoWinSetTimer(60);
                work->step++;
            }
            break;
        }
        if (FUN_0022e750() && uiSpriteGetCompletionState(&work->gridCursor) != 0 &&
            scrScriptProcessStartEntry(work->process, 0)) {
            work->step = 6;
        }
        break;
    case 2:
        sysPlaySe(0x65);
        showStatHelp(work);
        work->step++;
        break;
    case 3: {
        s32 decreaseTouched = 0;
        s32 changed = 0;
        s32 increaseTouched = 0;
        s8 special = 0;
        s32 previousRow = listCursorGetRowIfUnblocked(statCursor(work));
        s16 *stat = NULL;       /* the stat under the cursor, and the value it started the level-up with */
        s16 *base = NULL;
        switch (listCursorGetRowIfUnblocked(statCursor(work))) {
        case 0:
            stat = &gameGetPlayerData()->baseStats.stats[0];
            base = &work->units[work->current].baseStats[0];
            break;
        case 1:
            stat = &gameGetPlayerData()->baseStats.stats[1];
            base = &work->units[work->current].baseStats[1];
            break;
        case 2:
            stat = &gameGetPlayerData()->baseStats.stats[2];
            base = &work->units[work->current].baseStats[2];
            break;
        case 3:
            stat = &gameGetPlayerData()->baseStats.stats[3];
            base = &work->units[work->current].baseStats[3];
            break;
        case 4:
            stat = &gameGetPlayerData()->baseStats.stats[4];
            base = &work->units[work->current].baseStats[4];
            break;
        }
        /* A touch on a row's arrow moves the cursor there; a tap (mode 6) also presses the arrow. */
        for (s32 i = 0; i < 5; i++) {
            s32 mode = recordGetModeForId(work->statArrowRegions[i].second);
            if (mode == 1 || mode == 2) {
                flaggedEntrySetValueA(statCursor(work), i);
                break;
            }
            if (mode == 6) {
                flaggedEntrySetValueA(statCursor(work), i);
                decreaseTouched = 1;
                break;
            }
            mode = recordGetModeForId(work->statArrowRegions[i].first);
            if (mode == 1 || mode == 2) {
                flaggedEntrySetValueA(statCursor(work), i);
                break;
            }
            if (mode == 6) {
                flaggedEntrySetValueA(statCursor(work), i);
                increaseTouched = 1;
                break;
            }
        }
        if (increaseTouched || decreaseTouched || listCursorGetRowIfUnblocked(statCursor(work)) != previousRow) {
            showStatHelp(work);
        }
        if (listCursorGetRowIfUnblocked(statCursor(work)) != previousRow) {
            eventQueueAddUniqueIfValid(SE_MOVE);
        }
        if (uiScrollHandleActionsOrTouch(statCursor(work), NULL, work->statRowRegions, -1, -1, -1, &special, 0, 1) ||
            gridNavigationHandleConfirm(statCursor(work), 0)) {
            /* The cursor moved. */
            showStatHelp(work);
            if (listCursorGetRowIfUnblocked(statCursor(work)) != previousRow) {
                eventQueueAddUniqueIfValid(SE_MOVE);
            }
        } else if (padQueryLogicalKey(4, 0) || decreaseTouched) {
            /* Left: take a point back, down to the stat's starting value. */
            if (*stat > *base) {
                (*stat)--;
                work->statPointTotal++;
                eventQueueAddUniqueIfValid(SE_MOVE);
                changed = 1;
            }
        } else if (padQueryLogicalKey(3, 0) || increaseTouched) {
            /* Right: spend a point. */
            if (work->statPointTotal > 0) {
                if (*stat < STAT_MAXIMUM) {
                    (*stat)++;
                    work->statPointTotal--;
                    eventQueueAddUniqueIfValid(SE_MOVE);
                    changed = 1;
                } else {
                    eventQueueAddUniqueIfValid(SE_MOVE);
                }
            } else {
                eventQueueAddUniqueIfValid(SE_REFUSE);
            }
        } else if (padQueryLogicalKey(1, 1)) {
            /* Cancel: refund everything. */
            statusRefundPlayerStatAllocation(work);
            eventQueueAddUniqueIfValid(SE_REFUSE);
            changed = 1;
        } else if (!padQueryLogicalKey(9, 1) && padQueryLogicalKey(0, 1)) {
            /* Confirm: spend a point. */
            if (work->statPointTotal > 0 && *stat < STAT_MAXIMUM) {
                (*stat)++;
                work->statPointTotal--;
                eventQueueAddUniqueIfValid(SE_ACCEPT);
                changed = 1;
            } else {
                eventQueueAddUniqueIfValid(SE_ACCEPT);
            }
        }
        if (changed || playerStatsCapped()) {
            playerStatsRefresh();
        }
        /* Nothing left to hand out: ask whether to finish. */
        if (work->statPointTotal == 0 || playerStatsCapped()) {
            messageSetMode(0);
            sysPlaySe(0x9C);
            scrScriptProcessStartEntry(work->process, 11);
            if (infoWinHasValue()) {
                dialogClose(0);
            }
            work->step++;
        }
        break;
    }
    case 4:
        if (scrRunOpcodesStub(work->process) != 2) {
            break;
        }
        messageSetMode(1);
        FUN_00333dc8(0);
        if (messageGetChoiceResult() != 0) {
            /* Refused: back to the allocation, with the last point returned. */
            work->step = 3;
            scrScriptProcessStartEntry(work->process, 0);
            sysPlaySe(0x65);
            showStatHelp(work);
            s16 *stat = NULL;
            switch (listCursorGetRowIfUnblocked(statCursor(work))) {
            case 0:
                stat = &gameGetPlayerData()->baseStats.stats[0];
                break;
            case 1:
                stat = &gameGetPlayerData()->baseStats.stats[1];
                break;
            case 2:
                stat = &gameGetPlayerData()->baseStats.stats[2];
                break;
            case 3:
                stat = &gameGetPlayerData()->baseStats.stats[3];
                break;
            case 4:
                stat = &gameGetPlayerData()->baseStats.stats[4];
                break;
            }
            (*stat)--;
            playerStatsRefresh();
            work->statPointTotal++;
            break;
        }
        uiSpriteSetKeyframe(&work->gridCursor, 1, 0);
        work->step++;
        break;
    case 5:
        if (uiSpriteAdvanceAnimation(&work->gridCursor,
                                     work->unk7F50 != 0 ? engineGetFloatTableValue(work->unk7F40, 0) : 1.0f)) {
            buttonHelpSetText(NULL, HELP_TEXT_STYLE);
            if (infoWinHasValue()) {
                dialogClose(1);
            }
            resultSetMode(work, 0x13);
        }
        break;
    case 6:
        if (scrRunOpcodesStub(work->process) != 2) {
            break;
        }
        infoWinSetText((const char *)work->buffer43A4, 0xCC);
        dialogOpen(1, 1);
        infoWinSetTimer(60);
        work->step = 2;
        break;
    }
    if (dialogIsActive() && (s32)NaviMain_GetPosY() < 0) {
        dialogClose(1);
    }
}

} /* extern "C" */

/* NON_MATCHING: 481 lines, about 100 once register numbers are ignored. Retail keeps -1 in r6 from
 * before the switch (the region fill and the list call's two stacked page regions; the thumb region in
 * r3 gets its own mvn), which here only a function-scope `u32` variable holding 0xffffffff reproduces;
 * it addresses both placeholder names from one base loaded before the confirm switch (r6, r7 = r6 + 16)
 * and keeps the name in r6; it keeps the work in r5 (r4 here) and copies it to r6 for the cancel path's
 * sprite loop, as an inlined function taking the work would; the decided path's common tail follows the
 * param == 0 branch and its state store uses r1 for the work (an inlined function there gives that
 * layout); the region loop loads the placement into r3 and moves ifTouchRegionAdd's result to r1 before
 * addressing the slot. */
#include "camp/Config/Config.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "ui/UiControl_Smt4a.h"
#include "game/GameStateA.h"
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "script/scrScriptProcess.h"
#include "code/Code002a_VariantA.h"
#include "sys/RuntimeObjects.h"
#include "shard/Shard0050.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shop/ShopItemDescription.h"
#include "battle/btlDebug.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include <string.h>

extern "C" {
extern ConfigWorkA *g_config;
extern const char DAT_0052c8f4[2][16]; /* "NoTableLoaded", "NoName" */

void sysPlaySe(u32 id);
void obj04Finish(void);
s32 padQueryLogicalKey(s32 key, s32 mode);
void buttonHelpSetText(const s8 *text, u32 color);
void stateModeDispatch(u32 mode);
u8 FUN_003d21dc(void);
void messageMainSetFlag(u8 value);
s32 uiSearchPrimary(const GridNavigation *cursor);
u8 gridNavigationHandleConfirm(GridNavigation *cursor, s32 mode);
s32 uiScrollHandleActionsOrTouch(GridNavigation *list, const TextureTableEntryIV *touchArea, const s16 *rowRegions,
                                 s32 thumbRegion, s32 previousRegion, s32 nextRegion, s8 *touched, s32 secondary,
                                 s32 notify);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
s32 ifTouchRegionAdd(s32 x, s32 y, s32 width, s32 height); // declcheck: local (callers pass sign-extended halfwords; the shared u16 prototype changes the loads)
}

/* Enters a state at its first step. */
static __inline void configSetState(s32 state)
{
    ConfigWorkA *config = g_config;
    config->state = state;
    config->unk68 = 0;
}

/* The name table's row for a value; -1 when out of range (configValueName's). */
static __inline s32 configNameRow(s16 value)
{
    switch (value) {
    case 0:
        return 2;
    case 1:
        return 1;
    case 2:
        return 3;
    case 3:
        return 0;
    case 4:
        return 4;
    default:
        return -1;
    }
}

/* The display name of a value: configValueName's body. */
static __inline const char *configValueName(s32 value)
{
    const char *result;

    if (loadSlotIsLoaded(0x36) == 0) {
        result = DAT_0052c8f4[0];
    } else if (value >= 5) {
        result = DAT_0052c8f4[1];
    } else {
        s32 row = configNameRow(value);
        result = static_cast<ConfigNameTableA *>(dataTableGetEntries(dataTableGet(0x36, 0)))->names[row];
    }
    return result;
}

/* The help record of a row; NULL past the table's end. */
static __inline ConfigHelpRecordA *configHelpRecord(u32 id)
{
    void *table = dataTableGet(0x36, 1);
    ConfigHelpRecordA *entries = static_cast<ConfigHelpRecordA *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    if (id >= count)
        return NULL;
    return &entries[id];
}

/* Starts the script's opening message for where the screen was opened from. */
static __inline void configStartTopMessage(ConfigWorkA *config)
{
    if (gameDataBlocksGetTableFlag() == 4 && config->param != 0) {
        scrScriptProcessStartEntry(config->resource, 1);
    } else if (FUN_003d21dc() != 0 || g_gameState.mapId == 0x2a) {
        scrScriptProcessStartEntry(config->resource, 2);
    } else {
        scrScriptProcessStartEntry(config->resource, 0);
    }
}

/* Advances the frame and the rows; whether the last row's sprite is still moving. */
static __inline bool configAdvanceSprites(ConfigWorkA *config)
{
    uiSpriteAdvanceAnimation(&config->sprites[0], 1.0f);
    s32 rows = uiSearchPrimary(&config->cursor);
    for (s32 i = 0; i < rows; i++)
        uiSpriteAdvanceAnimation(&config->sprites[i + 1], 1.0f);
    bool moving = true;
    if (uiSpriteGetCompletionState(&config->sprites[rows]) != 0)
        moving = false;
    return moving;
}

extern "C" {

/* The Config screen's update: opens the script, slides the rows in, lets the player pick a value,
 * confirms and applies it, and slides the rows out again. */
void configUpdate(void)
{
    ConfigWorkA *config = g_config;

    uiSpriteAdvanceAnimation(&config->cursorSprite, 1.0f);
    switch (config->state) {
    case 0:
        if (config->heapA == NULL || config->heapB == NULL)
            return;
        config->resource = NULL;
        config->resource = scrScriptProcessCreate(config->heapA, config->heapB);
        messageMainSetFlag(0);
        configStartTopMessage(config);
        config->initialValue = gameDataBlocksGetTableFlag();
        {
            /* One touch region per row. */
            ConfigWorkA *work = g_config;
            s32 i;
            for (i = 0; i < work->count; i++)
                ifTouchRegionRemove();
            memset(&work->touchGroup, -1, 12);
            s32 first = work->firstRegionImage;
            work->count = 0;
            s32 rows = uiSearchPrimary(&work->cursor);
            for (i = 0; i < rows; i++) {
                const TextureTableEntryIV *rectangle = asdTMTexTableEntryAt(0x24, first + i);
                work->regions[i] = ifTouchRegionAdd(rectangle->x, rectangle->y, rectangle->placement->width,
                                                    rectangle->placement->height);
                work->count++;
            }
        }
        configSetState(1);
        break;
    case 1: {
        bool moving = configAdvanceSprites(config);
        config->frames++;
        if (moving)
            return;
        buttonHelpSetText(configHelpRecord(config->rows[config->row].helpId)->text, 0xf4f4f4ff);
        configSetState(2);
        break;
    }
    case 2: {
        s8 blocked = 0;
        asdTMTexTableEntryAt(0x24, 0x59);
        scrRunOpcodesStub(config->resource);
        u8 touch = ifTouchGetSelectionMode();
        if (gridNavigationHandleConfirm(&config->cursor, 1) != 0 ||
            uiScrollHandleActionsOrTouch(&config->cursor, NULL, config->regions, -1, -1, -1,
                                         &blocked, 0, 1) != 0) {
            /* The cursor moved. */
            config->row = listCursorGetRowIfUnblocked(&config->cursor);
            buttonHelpSetText(configHelpRecord(config->rows[config->row].helpId)->text, 0xf4f4f4ff);
            return;
        }
        if (padQueryLogicalKey(0, 1) == 0 && touch != 6) {
            if (padQueryLogicalKey(1, 1) == 0)
                return;
            /* Cancelled: slide the rows out. */
            eventQueueAddUniqueIfValid(0x100020f);
            messageMainSetFlag(1);
            buttonHelpSetText(NULL, 0xf4f4f4ff);
            uiSpriteSetKeyframe(&config->sprites[0], 1, 0);
            uiSpriteSetImageKeyframe(&config->sprites[0], 1, 0);
            for (s32 i = 0; i < 5; i++) {
                uiSpriteStateInitFromSource(&config->sprites[i + 1], 0x24, 0x57, &config->resources, 1, 1.0f);
                uiSpriteSetKeyframe(&config->sprites[i + 1], 1, 0);
                uiSpriteSetImageKeyframe(&config->sprites[i + 1], 1, 0);
            }
            config->frames = 0;
            configSetState(4);
            return;
        }
        /* Decided: nothing to do when the value in effect was picked again. */
        if (config->param != 0 && gameDataBlocksGetTableFlag() == config->rows[config->row].value)
            return;
        config = g_config;
        if (config->param == 0) {
            config->previous = gameDataBlocksGetTableFlag();
            stateModeDispatch(config->rows[config->row].value);
            scrScriptProcessStartEntry(config->resource, 7);
        } else {
            gameDataBlocksGetTableFlag();
            if (gameDataBlocksGetTableFlag() == 4 || FUN_003d21dc() != 0 || g_gameState.mapId == 0x2a) {
                /* The value cannot be changed here. */
                eventQueueAddUnique(0x100020f);
                configSetState(2);
                return;
            }
            config->previous = config->unkBC;
            config->initialValue = gameDataBlocksGetTableFlag();
            config->pendingValue = config->rows[config->row].value;
            stateModeDispatch(config->pendingValue);
            scrScriptProcessStartEntry(config->resource, 9);
        }
        eventQueueAddUnique(0x100020e);
        obj04Finish();
        messageMainSetFlag(1);
        sysPlaySe(0xa0);
        configSetState(3);
        break;
    }
    case 3: {
        /* Confirms the chosen value through the script's messages. */
        ConfigWorkA *work = g_config;
        switch (work->unk68) {
        case 0:
            if (work->param != 0)
                work->unk68 = 6;
            else
                work->unk68 = 1;
            break;
        case 1:
            if (scrRunOpcodesStub(work->resource) != 2)
                return;
            if (messageGetChoiceResult() != 0) {
                stateModeDispatch(work->previous);
                sysPlaySe(5);
                work->unk68 = 5;
                return;
            }
            if (work->param == 0) {
                work->unkBC = work->rows[work->row].value;
                stateModeDispatch(work->unkBC);
                work->initialValue = gameDataBlocksGetTableFlag();
                messageMainSetFlag(1);
                scrScriptProcessStartEntry(work->resource, 8);
                sysPlaySe(5);
                configSetState(5);
                return;
            }
            work->unkBC = work->rows[work->row].value;
            stateModeDispatch(work->unkBC);
            work->initialValue = gameDataBlocksGetTableFlag();
            work->unk68 = 3;
            break;
        case 2:
            if (scrRunOpcodesStub(work->resource) != 2)
                return;
            if (messageGetChoiceResult() != 0) {
                stateModeDispatch(work->previous);
                sysPlaySe(5);
                work->unk68 = 5;
                return;
            }
            work->unkBC = work->rows[work->row].value;
            stateModeDispatch(work->unkBC);
            work->initialValue = gameDataBlocksGetTableFlag();
            work->unk68 = 3;
            break;
        case 3:
            scrSetStringSlot(0, configValueName(work->unkBC));
            scrScriptProcessStartEntry(work->resource, 5);
            work->unk68 = 4;
            break;
        case 4:
            if (scrRunOpcodesStub(work->resource) != 2)
                return;
            sysPlaySe(5);
            work->unk68 = 5;
            /* fall through */
        case 5:
            configStartTopMessage(work);
            messageMainSetFlag(0);
            configSetState(2);
            break;
        case 6:
            if (scrRunOpcodesStub(work->resource) != 2)
                return;
            stateModeDispatch(work->initialValue);
            scrSetStringSlot(0, configValueName(gameDataBlocksGetTableFlag()));
            scrSetStringSlot(1, configValueName(work->rows[work->row].value));
            scrScriptProcessStartEntry(work->resource, 3);
            work->unk68 = 1;
            break;
        }
        break;
    }
    case 4:
        if (configAdvanceSprites(config))
            return;
        configSetState(6);
        break;
    case 5:
        if (scrRunOpcodesStub(config->resource) != 2)
            return;
        configSetState(6);
        break;
    }
}

} /* extern "C" */

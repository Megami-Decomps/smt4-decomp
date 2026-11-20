#include "ui/PartyPanelState.h"
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "camp/PartyPanel/PartyPanel.h"
#include "gamedata/SaveSlotTableIV.h"
#include "status/StatusCamera.h"
#include "bible/bibleAnalyze.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_UiResourceParameters.h"
#include "code/Code002c_Smt4.h"

/* The panel sprites' position, opacity and scale keys and their animation commands. */
static const u32 sPartyPanelPositionKeys[27] = {
    0x00000000, 0x0000FFFE, 0x00000004, 0x0000FFFE, 0x00000000, 0x00000002,
    0x00000000, 0x00000002, 0x00000004, 0x00000002, 0x00000000, 0x00000002,
    0x00000140, 0x00000000, 0x00000008, 0x0000FEC0, 0x00000000, 0x00000008,
    0xFFC00000, 0x00000000, 0x00000008, 0x00000000, 0x0000FEC0, 0x00000004,
    0x00000000, 0x00000140, 0x00000004
};
static const u32 sPartyPanelAlphaKeys[15] = {
    0x00000000, 0x3F800000, 0x00000004, 0x3F000000, 0x3F800000, 0x0000000A,
    0x3F800000, 0x3F000000, 0x00000014, 0x00000000, 0x3F800000, 0x00000008,
    0x3F800000, 0x00000000, 0x00000018
};
static const u32 sPartyPanelScaleKeys[6] = {
    0x00000000, 0x3F800000, 0x00000008, 0x3F800000, 0x3FC00000, 0x00000018
};
static const u32 sPartyPanelCommands[126] = {
    0x00000000, 0x00000000, 0xFFFFFFFD, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD,
    0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFD, 0xFFFFFFFD, 0x00000000,
    0xFFFFFFFD, 0x00000000, 0xFFFFFFFE, 0x00000000, 0xFFFFFFFD, 0xFFFFFFFD,
    0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF,
    0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000,
    0xFFFFFFFD, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000000, 0x00000003,
    0x00000000, 0xFFFFFFFD, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000000,
    0xFFFFFFFE, 0x00000000, 0xFFFFFFFD, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD,
    0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000,
    0xFFFFFFFF, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000001,
    0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD,
    0x00000002, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000000,
    0xFFFFFFFD, 0xFFFFFFFE, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFF,
    0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000,
    0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000003, 0x00000000, 0x00000000,
    0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000004, 0x00000000,
    0x00000001, 0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF,
    0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD,
    0x00000003, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFD, 0x00000000,
    0xFFFFFFFD, 0x00000004, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFF,
    0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000
};

struct SlotPlacement;
struct UniteCtrl;

extern "C" {
s32 FUN_001c3fd4(u32 job);
void digitsNotifyNoop(u32 job);
s32 FUN_00212538(u32 job);
void statusAcquireSharedResources(void);
void campMenuSessionReset(void);
UniteCtrl *uniteCtrlBuildRaceLists(UniteCtrl *unite);
void slotPlacementSetSlot(SlotPlacement *placement, s32 slot);
void partyPanelSortEntries(void);
void FUN_0026b9bc(void);
void gridNavigationConfigure(GridNavigation *grid, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
/* One-instruction setters armlink inlined at every call (no copy is left in the image). */
void uniteCtrlSetIncludeSameRace(UniteCtrl *unite, u8 include);
void partyWidgetSetEmpty(PartyPanelWidget *widget, u8 empty);
void partyWidgetSetIsCharacter(PartyPanelWidget *widget, u8 isCharacter);
void partyWidgetSetUnitId(PartyPanelWidget *widget, s32 unitId);

/* Creates the party panel: its work, jobs and files, the fusion control, the 28 slot widgets, the
 * sprites and the cursor grids sized to the demon stock. `showIcons` also shows the status icons. */
void partyPanelCreate(s32 showIcons)
{
    void *owner;
    s32 i;

    if (g_partyPanel == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\PartyPanel\\PartyPanel.cpp", 6360);
        g_partyPanel = static_cast<PartyPanelState *>(asdMemAlloc(0x100, 0x100, 0, sizeof(PartyPanelState), 1));
    }
    PartyPanelState *panel = g_partyPanel;
    memClear(panel, sizeof(PartyPanelState));
    panel->alternate = gameDataGetSortPreferences()[0x40];
    panel->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("TMD CALC"), 1, 0, 0, FUN_001c3fd4, digitsNotifyNoop, 0);
    panel->drawJob = taskCreateDraw(reinterpret_cast<const s8 *>("TMD DDRAW"), 230, 0, 0, FUN_00212538, NULL, 0,
                                    reinterpret_cast<void *>(panel->job));
    asdLoadFileAsyncSimple("camp/partypanel.mbm", reinterpret_cast<u32 *>(&panel->files[0]), 1);
    asdLoadFileAsyncSimple("camp/partypanel.bf", reinterpret_cast<u32 *>(&panel->files[1]), 1);
    statusAcquireSharedResources();
    if (showIcons) {
        gameSetIconDisplayEnabled(1);
        campMenuSessionReset();
    } else {
        gameSetIconDisplayEnabled(0);
    }

    UniteCtrl *unite = static_cast<UniteCtrl *>(asdOperatorNew(0x180, owner));
    if (unite != NULL) {
        unite = uniteCtrlBuildRaceLists(unite);
    }
    panel->unite = unite;
    uniteCtrlSetIncludeSameRace(unite, 1);
    gameGetSlotTable();

    /* The protagonist's widget, the three party slots' and the 24 stock slots'. */
    PartyPanelWidget *widget = static_cast<PartyPanelWidget *>(asdOperatorNew(sizeof(PartyPanelWidget), owner));
    if (widget != NULL) {
        widget = static_cast<PartyPanelWidget *>(asdDebugHookPass(widget));
    }
    panel->characters[0] = widget;
    partyWidgetSetEmpty(widget, 0);
    partyWidgetSetUnitId(panel->characters[0], -1);
    slotPlacementSetSlot(reinterpret_cast<SlotPlacement *>(panel->characters[0]), 0);
    for (i = 0; i < 3; i++) {
        widget = static_cast<PartyPanelWidget *>(asdOperatorNew(sizeof(PartyPanelWidget)));
        if (widget != NULL) {
            widget = static_cast<PartyPanelWidget *>(asdDebugHookPass(widget));
        }
        panel->characters[i + 1] = widget;
        partyWidgetSetIsCharacter(widget, 1);
    }
    for (i = 0; i < 24; i++) {
        widget = static_cast<PartyPanelWidget *>(asdOperatorNew(sizeof(PartyPanelWidget)));
        if (widget != NULL) {
            widget = static_cast<PartyPanelWidget *>(asdDebugHookPass(widget));
        }
        panel->demons[i] = widget;
    }
    partyPanelSortEntries();

    panel = g_partyPanel;
    panel->previewItem = 0;
    panel->selection = -1;
    drawParameterBlockClear(&panel->parameters);
    paramsInit(&panel->parameters, sPartyPanelPositionKeys, sizeof(sPartyPanelPositionKeys),
               sPartyPanelAlphaKeys, sizeof(sPartyPanelAlphaKeys), sPartyPanelScaleKeys, sizeof(sPartyPanelScaleKeys),
               NULL, 0, sPartyPanelCommands, sizeof(sPartyPanelCommands));
    uiSpriteStateInitFromSource(&panel->sprites[0], 25, 36, &panel->parameters, 106, 1.0f);
    spriteStartAnimationByIndex(&panel->sprites[0], 0);
    uiSpriteStateInitFromSource(&panel->sprites[1], 25, 37, &panel->parameters, 106, 1.0f);
    spriteStartAnimationByIndex(&panel->sprites[1], 1);
    uiSpriteStateInitFromSource(&panel->sprites[PARTY_PANEL_SPRITE_PAGE], 25, 0, &panel->parameters, 106, 1.0f);
    uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_PAGE], 4, 0);
    uiSpriteStateInitFromSource(&panel->sprites[PARTY_PANEL_SPRITE_HIGHLIGHT], 25, 0, &panel->parameters, 106, 1.0f);
    spriteStartAnimationByIndex(&panel->sprites[PARTY_PANEL_SPRITE_HIGHLIGHT], 2);
    for (i = 0; i < 4; i++) {
        uiSpriteStateInitFromSource(&panel->sprites[PARTY_PANEL_SPRITE_MEMBERS + i], 25, 0, &panel->parameters, 106, 1.0f);
        uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_MEMBERS + i], 4, 0);
    }
    uiSpriteStateInitFromSource(&panel->sprites[PARTY_PANEL_SPRITE_LAYOUT], 25, 0, &panel->parameters, 106, 1.0f);
    if (panel->alternate) {
        uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_LAYOUT], 6, 0);
    } else {
        uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_LAYOUT], 4, 0);
    }
    uiSpriteStateInitFromSource(&panel->sprites[9], 25, 1000, &panel->parameters, 201, 1.0f);
    spriteStartAnimationByIndex(&panel->sprites[9], 3);
    uiSpriteStateInitFromSource(&panel->sprites[10], 25, 1000, &panel->parameters, 201, 1.0f);
    spriteStartAnimationByIndex(&panel->sprites[10], 4);

    /* The party row, then the stock grids: four columns, twelve demons a page. */
    gridNavigationConfigure(&panel->partyGrid, 4, 1, 4, 1, 1);
    SaveSlotTableIV *table = gameGetSlotTable();
    u32 rows = table->stockCount / 4;
    if (table->stockCount % 4) {
        rows++;
    }
    if (table->stockCount < 12) {
        gridNavigationConfigure(&panel->stockGrid, table->stockCount, rows, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, table->stockCount + 4, rows + 1, 4, 1, 1);
    } else if (panel->page == 0) {
        gridNavigationConfigure(&panel->stockGrid, 12, 3, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, 16, 4, 4, 1, 1);
    } else {
        gridNavigationConfigure(&panel->stockGrid, table->stockCount - 12, 3, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, table->stockCount - 8, 4, 4, 1, 1);
    }
    gridNavigationConfigure(&panel->stockGridAlternate, table->stockCount, rows, 4, 1, 1);
    gridNavigationConfigure(&panel->fullGridAlternate, table->stockCount + 4, rows + 1, 4, 1, 1);
    gridNavigationConfigure(&panel->columnGrid, 6, 6, 1, 1, 1);
    panel->partySlot = -1;
    panel->listSelection = -1;
    FUN_0026b9bc();
    panel->selectedCount = 0;
    panel->helpMode = 0;
}

} /* extern "C" */

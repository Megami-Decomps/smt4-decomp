#include "ui/PartyPanelStateA.h"
#include "gamedata/SaveSlotTable.h"
#include "ui/UiSpriteApi.h"
#include "ui/ParamsClearPacket.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "shard/W6_W6Match8_FusionSelection.h"
#include "camp/PartyPanel/PartyPanel.h"
#include "event/2dEvent/2dEventTex.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "code/Code0015_Smt4a.h"
#include "code/Code002c.h"

/* The panel sprites' position, opacity and scale keys and their animation commands. */
static const u32 sPartyPanelPositionKeys[45] = {
    0x00000000, 0x0000FFFE, 0x00000004, 0x0000FFFE, 0x00000000, 0x00000002,
    0x00000000, 0x00000002, 0x00000004, 0x00000002, 0x00000000, 0x00000002,
    0x00000140, 0x00000000, 0x00000008, 0x0000FEC0, 0x00000000, 0x00000008,
    0xFFC00000, 0x00000000, 0x00000008, 0x00000000, 0x0000FEC0, 0x00000004,
    0x00000000, 0x00000140, 0x00000004, 0x00060000, 0x00000000, 0x0000000A,
    0x0000001E, 0x00000000, 0x00000004, 0x0000FFE2, 0x00000000, 0x00000004,
    0xFFC00000, 0x00000000, 0x00000004, 0x00000000, 0x0000FFE2, 0x00000003,
    0x00000000, 0x0000001E, 0x00000003
};
static const u32 sPartyPanelAlphaKeys[42] = {
    0x00000000, 0x3F800000, 0x00000004, 0x3F000000, 0x3F800000, 0x0000000A,
    0x3F800000, 0x3F000000, 0x00000014, 0x00000000, 0x3F800000, 0x00000008,
    0x3F800000, 0x00000000, 0x00000018, 0x3F800000, 0x00000000, 0x0000000A,
    0x3F800000, 0x3F800000, 0x00000014, 0x00000000, 0x3F800000, 0x0000000A,
    0x00000000, 0x3F800000, 0x00000002, 0x3F800000, 0x3F800000, 0x00000009,
    0x3F800000, 0x00000000, 0x00000005, 0x00000000, 0x00000000, 0x0000000D,
    0x00000000, 0x3F800000, 0x00000004, 0x3F800000, 0x00000000, 0x00000003
};
static const u32 sPartyPanelScaleKeys[6] = {
    0x00000000, 0x3F800000, 0x00000008, 0x3F800000, 0x3FC00000, 0x00000018
};
static const u32 sPartyPanelCommands[231] = {
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
    0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000,
    0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000005, 0x00000000, 0xFFFFFFFD,
    0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000005, 0x00000001,
    0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000005,
    0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD,
    0x00000005, 0x00000001, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000000,
    0xFFFFFFFD, 0x00000006, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD,
    0x00000000, 0xFFFFFFFD, 0xFFFFFFFE, 0x00000000, 0xFFFFFFFD, 0x00000000,
    0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF,
    0x00000000, 0x00000009, 0x00000000, 0xFFFFFFFD, 0x00000007, 0x00000000,
    0xFFFFFFFD, 0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF,
    0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD,
    0x00000008, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000000,
    0xFFFFFFFD, 0x00000009, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD,
    0x00000000, 0xFFFFFFFD, 0x0000000A, 0x00000000, 0xFFFFFFFD, 0x00000000,
    0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x0000000B, 0x00000000, 0xFFFFFFFD,
    0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0xFFFFFFFE, 0x00000000,
    0xFFFFFFFD, 0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF,
    0x00000000, 0xFFFFFFFF, 0x00000000
};

struct SlotPlacement;

extern "C" {
s32 FUN_00262874(u32 job);
void FUN_002e7a88(u32 job);
s32 FUN_002e7a8c(u32 job);
void statusAcquireSharedResources(void);
FusionRaceSelection *fusionRaceSelectionInitialize(FusionRaceSelection *selection);
void slotPlacementSetSlot(SlotPlacement *placement, s32 slot);
void partyPanelSortByMode(void);
void partyPanelRefreshFromSlotTable(void);
void FUN_00230ac0(s32 mode, s32 imageFrame, u32 flags, s32 resetAuxiliary);
void gridNavigationConfigure(GridNavigation *grid, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
/* One-instruction setters armlink inlined at every call (no copy is left in the image). */
void fusionRaceSelectionSetIncludeSameRace(FusionRaceSelection *selection, u8 include);

/* Creates the party panel: its work, jobs and files, the fusion race selection, the 28 slot widgets,
 * the sprites and the cursor grids sized to the demon stock. `showIcons` also shows the status icons. */
void partyPanelCreate(s32 showIcons)
{
    void *owner;
    s32 i;

    if (g_partyPanel == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\PartyPanel\\PartyPanel.cpp", 7404);
        g_partyPanel = static_cast<PartyPanelStateA *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(PartyPanelStateA), 1));
    }
    PartyPanelStateA *panel = g_partyPanel;
    sysMemClear(panel, sizeof(PartyPanelStateA));
    panel->alternate = saveGetUserSettingsBlock()[0x44];
    panel->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("TMD CALC"), 3, 0, 0, FUN_00262874, FUN_002e7a88, 0);
    panel->drawJob = taskCreateDraw(reinterpret_cast<const s8 *>("PPANEL DDRAW"), 234, 0, 0, FUN_002e7a8c, NULL, 0,
                                    reinterpret_cast<void *>(panel->job));
    asdLoadFileAsyncSimple("camp/partypanel.mbm", reinterpret_cast<u32 *>(&panel->files[0]), 1);
    asdLoadFileAsyncSimple("camp/partypanel.bf", reinterpret_cast<u32 *>(&panel->files[1]), 1);
    statusAcquireSharedResources();
    if (showIcons) {
        gameGlobalsSetOverlayActive(1);
        unitStatusResetSpriteState();
    } else {
        gameGlobalsSetOverlayActive(0);
    }

    FusionRaceSelection *selection = static_cast<FusionRaceSelection *>(asdOperatorNew(0x1B8, owner));
    if (selection != NULL) {
        selection = fusionRaceSelectionInitialize(selection);
    }
    panel->unite = reinterpret_cast<UniteWorkA *>(selection);
    fusionRaceSelectionSetIncludeSameRace(selection, 1);
    gameGetSlotTable();
    panel->layoutMode = 0;

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
    partyPanelSortByMode();

    panel = g_partyPanel;
    panel->previewItem = 0;
    panel->selection = -1;
    paramsClearPacket(&panel->parameters);
    paramsInit(&panel->parameters, sPartyPanelPositionKeys, sizeof(sPartyPanelPositionKeys),
               sPartyPanelAlphaKeys, sizeof(sPartyPanelAlphaKeys), sPartyPanelScaleKeys, sizeof(sPartyPanelScaleKeys),
               NULL, 0, sPartyPanelCommands, sizeof(sPartyPanelCommands));
    uiSpriteStateInitFromSource(&panel->sprites[0], 17, 36, &panel->parameters, 106, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[0], 0);
    uiSpriteStateInitFromSource(&panel->sprites[1], 17, 37, &panel->parameters, 106, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[1], 1);
    uiSpriteStateInitFromSource(&panel->sprites[PARTY_PANEL_SPRITE_PAGE], 17, 0, &panel->parameters, 106, 1.0f);
    uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_PAGE], 4, 0);
    uiSpriteStateInitFromSource(&panel->sprites[PARTY_PANEL_SPRITE_HIGHLIGHT], 17, 0, &panel->parameters, 106, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[PARTY_PANEL_SPRITE_HIGHLIGHT], 2);
    for (i = 0; i < 4; i++) {
        uiSpriteStateInitFromSource(&panel->sprites[PARTY_PANEL_SPRITE_MEMBERS + i], 17, 0, &panel->parameters, 106, 1.0f);
    }
    uiSpriteStateInitFromSource(&panel->sprites[PARTY_PANEL_SPRITE_LAYOUT], 17, 0, &panel->parameters, 106, 1.0f);
    uiSpriteStateInitFromSource(&panel->sprites[PARTY_PANEL_SPRITE_IMAGE], 17, 1, &panel->parameters, 106, 1.0f);
    FUN_00230ac0(4, -1, 0, panel->alternate != 0);
    uiSpriteStateInitFromSource(&panel->sprites[9], 17, 1000, &panel->parameters, 201, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[9], 3);
    uiSpriteStateInitFromSource(&panel->sprites[10], 17, 1000, &panel->parameters, 201, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[10], 4);
    uiSpriteStateInitFromSource(&panel->sprites[11], 17, 181, &panel->parameters, 201, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[11], 5);
    panel->unk1214 = 0;
    uiSpriteStateInitFromSource(&panel->sprites[12], 17, 352, &panel->parameters, 201, 1.0f);
    uiSpriteSelectAnim(&panel->sprites[12], 6);
    for (i = 0; i < 3; i++) {
        uiSpriteStateInitFromSource(&panel->sprites[13 + i], 17, 353 + i, &panel->parameters, 202 + i, 1.0f);
        uiSpriteSelectAnim(&panel->sprites[13 + i], 7);
    }

    /* The party row, then the stock grids: four columns, twelve demons a page. */
    gridNavigationConfigure(&panel->partyGrid, 4, 1, 4, 1, 1);
    SaveSlotTableA *table = gameGetSlotTable();
    u32 rows = table->count / 4;
    if (table->count % 4) {
        rows++;
    }
    if (table->count < 12) {
        gridNavigationConfigure(&panel->stockGrid, table->count, rows, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, table->count + 4, rows + 1, 4, 1, 1);
    } else if (panel->page == 0) {
        gridNavigationConfigure(&panel->stockGrid, 12, 3, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, 16, 4, 4, 1, 1);
    } else {
        gridNavigationConfigure(&panel->stockGrid, table->count - 12, 3, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, table->count - 8, 4, 4, 1, 1);
    }
    gridNavigationConfigure(&panel->stockGridAlternate, table->count, rows, 4, 1, 1);
    gridNavigationConfigure(&panel->fullGridAlternate, table->count + 4, rows + 1, 4, 1, 1);
    gridNavigationConfigure(&panel->columnGrid, 6, 6, 1, 1, 1);
    panel->partySlot = -1;
    panel->listSelection = -1;
    partyPanelRefreshFromSlotTable();
    panel->selectedCount = 0;
    panel->helpMode = 0;
}

} /* extern "C" */

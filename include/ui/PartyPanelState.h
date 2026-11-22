/* The party panel (IV): the camp screen listing the protagonist, the party and the demon stock, with
 * its cursors, preview copies and fusion selection. Apocalypse's panel is ui/PartyPanelStateA.h. */
#ifndef UI_PARTYPANELSTATE_H
#define UI_PARTYPANELSTATE_H
#include "common.h"
#include "shard/W6_W6Match6_PartyPanel.h"
#include "gamedata/SelectedUnitQuery.h"
#include "gamedata/PlayerInitialization.h"
#include "ui/GridNavigation.h"
#include "ui/PartyPanelParts.h"
#include <stddef.h>
#include "script/ScriptVm.h"
#include "gamedata/PackedIdentifiers.h"

/* A copy of a battle-unit record kept for previews (0x604 bytes); only the two stat arrays are named. */
struct PartyPanelUnitPreview {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u16 stats[5];
    /* 0x00E */ u8 unk00E[4];
    /* 0x012 */ u16 baseStats[5];
    /* 0x01C */ u8 unk01C[0x5E8];
};

typedef struct PartyPanelState {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u8 unk0004[4];
    /* 0x0008 */ u32 drawJob;
    /* 0x000C */ void *files[2];
    /* 0x0014 */ ScriptProcess *script;
    /* 0x0018 */ u32 phase;                 /* step within the current scene state */
    /* 0x001C */ s32 sceneState;
    /* 0x0020 */ s32 pendingState;          /* the state being entered (4: party row, 6: stock grid, 8: full grid) */
    /* 0x0024 */ s32 previousState;
    /* 0x0028 */ u32 occupiedCount;         /* party slots in use */
    /* 0x002C */ u32 page;                  /* 1 shows the second stock page */
    /* 0x0030 */ s32 pageCount;
    /* 0x0034 */ u8 unk0034;
    /* 0x0035 */ u8 unk0035;
    /* 0x0036 */ u16 previewItem;           /* the item (or skill) whose effect is previewed */
    /* 0x0038 */ s16 selection;             /* the selected unit (negative: the protagonist) */
    /* 0x003A */ s16 previousSelection;
    /* 0x003C */ s16 requestedUnitId;
    /* 0x003E */ u16 unk003E;
    /* 0x0040 */ u16 unk0040;
    /* 0x0042 */ s8 alternate;              /* the alternate layout: cursors move on the alternate grids */
    /* 0x0043 */ u8 unk0043;
    /* 0x0044 */ s8 helpMode;
    /* 0x0045 */ u8 unk0045[3];
    /* 0x0048 */ UiResourceParameters parameters; /* the sprites' animation resource */
    /* 0x0068 */ UiSpriteState sprites[11];            /* indexed by PARTY_PANEL_SPRITE_* */
    /* 0x066C */ u8 panelState;             /* PARTY_MODE_*: what the panel was opened for */
    /* 0x066D */ u8 unk066D[3];
    /* 0x0670 */ s32 partySlot;             /* selected party slot (1-3), 0 for none */
    /* 0x0674 */ s32 listSelection;
    /* 0x0678 */ u8 activeSlots[4];         /* the protagonist and the three party slots can be chosen */
    /* 0x067C */ PartyPanelTouchRegions touch;
    /* 0x06BC */ s16 selectedCount;                 /* units picked so far */
    /* 0x06BE */ u8 unk06BE[0xA];
    /* 0x06C8 */ PartyPanelWidget *characters[4];
    /* 0x06D8 */ PartyPanelWidget *demons[24];
    /* 0x0738 */ SelectedUnitListEntry entries[24];   /* the demon stock as shown (sortable) */
    /* 0x07F8 */ u8 unk07F8[0xE4];
    /* 0x08DC */ GridNavigation partyGrid;            /* state 4: the party row */
    /* 0x0940 */ GridNavigation stockGrid;            /* state 6: the stock page */
    /* 0x09A4 */ GridNavigation stockGridAlternate;
    /* 0x0A08 */ GridNavigation fullGrid;             /* state 8: the party row above the stock page */
    /* 0x0A6C */ GridNavigation fullGridAlternate;
    /* 0x0AD0 */ GridNavigation columnGrid;           /* six rows in one column */
    /* 0x0B34 */ s32 fusionParentIds[2];
    /* 0x0B3C */ s32 fusionParentCount;
    /* 0x0B40 */ u8 unk0B40[8];
    /* 0x0B48 */ PackedIdentifiers fusionPair;        /* the two parents' ids and the product's */
    /* 0x0B50 */ u8 fusionResult[0x34];               /* the result unit */
    /* 0x0B84 */ u16 fusionResultSkills[8];
    /* 0x0B94 */ u8 unk0B94[0x5C0];
    /* 0x1154 */ u32 value;
    /* 0x1158 */ u32 statusValue;
    /* 0x115C */ void *unite;                         /* the fusion work (a buffer array) */
    /* 0x1160 */ PlayerDataIV previewPlayer;
    /* 0x11EC */ PartyPanelUnitPreview previewUnit;
    /* 0x17F0 */ s8 disabled;
    /* 0x17F1 */ u8 unk17F1[7];                       /* the panel is allocated and cleared as 0x17F8 bytes */
} PartyPanelState;

typedef char PartyPanelUnitPreviewSizeCheck[sizeof(PartyPanelUnitPreview) == 0x604 ? 1 : -1];
typedef char PartyPanelStateSizeCheck[sizeof(PartyPanelState) == 0x17F8 ? 1 : -1];
typedef char PartyPanelStateOffsetCheck[
    offsetof(PartyPanelState, drawJob) == 0x8 &&
    offsetof(PartyPanelState, parameters) == 0x48 &&
    offsetof(PartyPanelState, columnGrid) == 0xAD0 &&
    offsetof(PartyPanelState, sceneState) == 0x1C &&
    offsetof(PartyPanelState, page) == 0x2C &&
    offsetof(PartyPanelState, previewItem) == 0x36 &&
    offsetof(PartyPanelState, alternate) == 0x42 &&
    offsetof(PartyPanelState, helpMode) == 0x44 &&
    offsetof(PartyPanelState, sprites) == 0x68 &&
    offsetof(PartyPanelState, panelState) == 0x66C &&
    offsetof(PartyPanelState, touch) == 0x67C &&
    offsetof(PartyPanelState, characters) == 0x6C8 &&
    offsetof(PartyPanelState, entries) == 0x738 &&
    offsetof(PartyPanelState, partyGrid) == 0x8DC &&
    offsetof(PartyPanelState, fullGridAlternate) == 0xA6C &&
    offsetof(PartyPanelState, fusionParentCount) == 0xB3C &&
    offsetof(PartyPanelState, fusionPair) == 0xB48 &&
    offsetof(PartyPanelState, fusionResultSkills) == 0xB84 &&
    offsetof(PartyPanelState, statusValue) == 0x1158 &&
    offsetof(PartyPanelState, previewUnit) == 0x11EC &&
    offsetof(PartyPanelState, disabled) == 0x17F0 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

extern PartyPanelState *g_partyPanel;

u16 *FUN_0029acb0(void);

#ifdef __cplusplus
}
#endif

#endif

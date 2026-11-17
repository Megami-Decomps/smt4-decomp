/* The party panel (Apocalypse): IV's panel (ui/PartyPanelState.h) with seventeen sprites, the fusion
 * filter flags and smaller preview copies. */
#ifndef UI_PARTYPANELSTATEA_H
#define UI_PARTYPANELSTATEA_H
#include "common.h"
#include "shard/W6_W6Match6_PartyPanel.h"
#include "gamedata/SelectedUnitQuery.h"
#include "gamedata/GameSaveDataA.h"
#include "ui/GridNavigation.h"
#include "ui/PartyPanelParts.h"
#include <stddef.h>
#include "script/ScriptVm.h"

struct UniteWorkA;

typedef struct PartyPanelStateA {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u8 unk0004[8];
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
    /* 0x0042 */ u8 alternate;              /* the alternate layout: cursors move on the alternate grids */
    /* 0x0043 */ u8 unk0043;
    /* 0x0044 */ s8 helpMode;
    /* 0x0045 */ u8 unk0045[0x23];
    /* 0x0068 */ UiSpriteState sprites[17];     /* indexed by PARTY_PANEL_SPRITE_* */
    /* 0x09B4 */ u8 panelState;             /* what the panel was opened for */
    /* 0x09B5 */ u8 unk09B5[3];
    /* 0x09B8 */ s32 partySlot;             /* selected party slot (1-3), 0 for none */
    /* 0x09BC */ s32 listSelection;
    /* 0x09C0 */ u8 activeSlots[4];         /* the protagonist and the three party slots can be chosen */
    /* 0x09C4 */ PartyPanelTouchRegions touch;
    /* 0x0A04 */ s16 selectedCount;                 /* units picked so far */
    /* 0x0A06 */ u8 unk0A06[0xA];
    /* 0x0A10 */ PartyPanelWidget *characters[4];
    /* 0x0A20 */ PartyPanelWidget *demons[24];
    /* 0x0A80 */ SelectedUnitListEntry entries[24];   /* the demon stock as shown (sortable) */
    /* 0x0B40 */ u8 unk0B40[0xE4];
    /* 0x0C24 */ GridNavigation partyGrid;            /* state 4: the party row */
    /* 0x0C88 */ GridNavigation stockGrid;            /* state 6: the stock page */
    /* 0x0CEC */ GridNavigation stockGridAlternate;
    /* 0x0D50 */ GridNavigation fullGrid;             /* state 8: the party row above the stock page */
    /* 0x0DB4 */ GridNavigation fullGridAlternate;
    /* 0x0E18 */ u8 unk0E18[0x64];
    /* 0x0E7C */ s32 fusionParentIds[2];
    /* 0x0E84 */ s32 fusionParentCount;
    /* 0x0E88 */ u8 fusionParentIsDemon[2];
    /* 0x0E8A */ u8 unk0E8A[6];
    /* 0x0E90 */ u64 fusionResultPacked;
    /* 0x0E98 */ u8 fusionResult[0x34];               /* the result unit */
    /* 0x0ECC */ u16 fusionResultSkills[8];
    /* 0x0EDC */ u8 unk0EDC[0xE8];
    /* 0x0FC4 */ u32 statusValue;                     /* returned by partyPanelGetState */
    /* 0x0FC8 */ u32 value;                           /* returned by partyPanelValueGet */
    /* 0x0FCC */ u8 unk0FCC[4];
    /* 0x0FD0 */ u32 fusionFlags[27];                 /* per slot (protagonist and party, then the stock) */
    /* 0x103C */ u8 unk103C[2];
    /* 0x103E */ u16 fusionResultIds[27];
    /* 0x1074 */ u32 selectedFusionFlags;
    /* 0x1078 */ u8 unk1078[4];
    /* 0x107C */ UniteWorkA *unite;                    /* the fusion work */
    /* 0x1080 */ PlayerDataA previewPlayer;                  /* a copy of the player data */
    /* 0x10E4 */ u8 previewUnit[0x12C];               /* a copy of a slot record */
    /* 0x1210 */ u8 disabled;
    /* 0x1211 */ u8 unk1211[7];
    /* 0x1218 */ s32 layoutMode;
    /* 0x121C */ u8 unk121C[4];
} PartyPanelStateA;

typedef char PartyPanelStateASizeCheck[sizeof(PartyPanelStateA) == 0x1220 ? 1 : -1];
typedef char PartyPanelStateAOffsetCheck[
    offsetof(PartyPanelStateA, sceneState) == 0x1C &&
    offsetof(PartyPanelStateA, page) == 0x2C &&
    offsetof(PartyPanelStateA, previewItem) == 0x36 &&
    offsetof(PartyPanelStateA, alternate) == 0x42 &&
    offsetof(PartyPanelStateA, sprites) == 0x68 &&
    offsetof(PartyPanelStateA, panelState) == 0x9B4 &&
    offsetof(PartyPanelStateA, touch) == 0x9C4 &&
    offsetof(PartyPanelStateA, characters) == 0xA10 &&
    offsetof(PartyPanelStateA, entries) == 0xA80 &&
    offsetof(PartyPanelStateA, partyGrid) == 0xC24 &&
    offsetof(PartyPanelStateA, fullGridAlternate) == 0xDB4 &&
    offsetof(PartyPanelStateA, fusionParentCount) == 0xE84 &&
    offsetof(PartyPanelStateA, fusionResultSkills) == 0xECC &&
    offsetof(PartyPanelStateA, fusionFlags) == 0xFD0 &&
    offsetof(PartyPanelStateA, fusionResultIds) == 0x103E &&
    offsetof(PartyPanelStateA, unite) == 0x107C &&
    offsetof(PartyPanelStateA, disabled) == 0x1210 &&
    offsetof(PartyPanelStateA, layoutMode) == 0x1218 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

extern PartyPanelStateA *g_partyPanel;

#ifdef __cplusplus
}
#endif

#endif

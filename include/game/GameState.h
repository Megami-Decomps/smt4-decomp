/* The global game state block of Shin Megami Tensei IV (`g_gameState`, 0x49f91c, 0x678 bytes).
 * Apocalypse's block has its own layout: game/GameStateA.h. Only the fields read so far are named;
 * unknown bytes are padding named by offset.
 *
 * The event (0x100) and map (0x200) blocks are nested because retail treats their starts as objects:
 * FUN_002080e8 reaches map.savedLocationSet through `add r1, gs, #0x200; ldrb [r1, #0xF8]`, a
 * byte a flat struct would load straight from the base, and FUN_003b992c / FUN_002080e8 keep the
 * block address in its own register. (A `g_gameState+0x100/0x200/0x400` pool word alone is not
 * evidence: armcc folds those itself for ldrsb/ldrh/vldr fields out of range.) Apocalypse's state
 * (GameStateA) has the same fields 0x34 bytes later and stays flat: no unit there needs a block. */
#ifndef GAME_GAMESTATE_H
#define GAME_GAMESTATE_H

#include "common.h"
#include "map/MapVector.h"
#include "map/MapDepartTarget.h"
#include <stddef.h>

/* A pending map jump (0x3F8): where to go, and the pose to arrive with. */
struct GameStateJumpRequest {
    /* 0x00 */ MapDepartTarget selection; /* group, map, target object (-1: none), destination */
    /* 0x10 */ MapVector position;
    /* 0x1C */ f32 heading;
    /* 0x20 */ f32 parameter;
};

/* A file the map system keeps loaded, with the buffer it was loaded into. */
struct GameStateFile {
    /* 0x00 */ void *handle;
    /* 0x04 */ u32 buffer;
};

/* The departure's block (0x41C), reset as one when a map is entered. */
struct GameStateDepartBlock {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 value;
    /* 0x54 */ u8 unk54[0x50];
    /* 0xA4 */ u16 counterA;
    /* 0xA6 */ u16 counterB;
};

/* The script and event block (0x100): script entries, event requests and the pending encounter. */
struct GameStateEventBlock {
    /* 0x00 */ u16 activeEntryValue;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ char activeEntryText[0x18];
    /* 0x1C */ u8 scriptFlag;
    /* 0x1D */ s8 bgmReleased;
    /* 0x1E */ u8 unk1E[0x26];
    /* 0x44 */ s8 faceOverview;      /* mode 5 turns the player toward overviewPosition and eases it in slowly */
    /* 0x45 */ s8 scriptPending;
    /* 0x46 */ u8 unk46[2];
    /* 0x48 */ u32 scriptId;
    /* 0x4C */ char scriptName[0x18];
    /* 0x64 */ u16 eventState;         /* nonzero blocks the quest menu */
    /* 0x66 */ s16 eventId;
    /* 0x68 */ char eventEntryName[0x10];
    /* 0x78 */ u16 transitionRequest12;
    /* 0x7A */ u16 transitionRequest13;
    /* 0x7C */ s8 encounterSourceActive;
    /* 0x7D */ u8 unk7D[3];
    /* 0x80 */ MapVector encounterSourcePosition;
    /* 0x8C */ f32 encounterSourceHeading;
    /* 0x90 */ u8 unk90[2];
    /* 0x92 */ u16 encounterSourceKind;
    /* 0x94 */ s16 encounterDelay;
    /* 0x96 */ s16 encounterEnemyIndex;
    /* 0x98 */ u8 encounterForced;
    /* 0x99 */ s8 encounterApproach;
    /* 0x9A */ u8 encounterBackAttack;
    /* 0x9B */ u8 encounterHasMarker;
    /* 0x9C */ s16 encounterMarkerX;
    /* 0x9E */ s16 encounterMarkerY;
    /* 0xA0 */ s8 encounterPending;
    /* 0xA1 */ u8 unkA1[3];
    /* 0xA4 */ u32 encounterState;
    /* 0xA8 */ MapVector encounterMarkerPosition;
    /* 0xB4 */ f32 encounterMarkerHeading;
    /* 0xB8 */ s32 encounterCount;
    /* 0xBC */ u32 encounterValue;
    /* 0xC0 */ u8 unkC0[4];
    /* 0xC4 */ s32 entryBudget;
    /* 0xC8 */ u8 unkC8[0x38];
};

/* The map block (0x200): stage, environment, destination marker, loaded files. */
struct GameStateMapBlock {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 unk14;
    /* 0x18 */ s32 stage;              /* scene model set currently shown */
    /* 0x1C */ s32 stageGroup;
    /* 0x20 */ s32 tick;
    /* 0x24 */ s16 blinkSelector;      /* -2..2 selects the blink pattern */
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ s8 darkZone;            /* the alternate environment; inverts the blink */
    /* 0x29 */ u8 unk29;
    /* 0x2A */ u8 transitionCompleted; /* the entry transition finished */
    /* 0x2B */ s8 mapRegistrationPending;
    /* 0x2C */ s8 mapLoadActive;       /* set while a departure loads the map; hides the overlay */
    /* 0x2D */ u8 destinationSet;      /* also: the group update flag */
    /* 0x2E */ u8 unk2E[2];
    /* 0x30 */ MapVector destination;
    /* 0x3C */ u32 destinationFloor;
    /* 0x40 */ s32 destinationKind;
    /* 0x44 */ u16 unk44;
    /* 0x46 */ u16 unk46;
    /* 0x48 */ s32 actionState;
    /* 0x4C */ s8 actionOption;
    /* 0x4D */ u8 unk4D[4];
    /* 0x51 */ s8 bgResetPending;      /* set when the common background must be rebuilt */
    /* 0x52 */ u8 unk52[2];
    /* 0x54 */ f32 unk54;
    /* 0x58 */ f32 unk58;
    /* 0x5C */ s32 unk5C;
    /* 0x60 */ u8 unk60[0x1A];
    /* 0x7A */ s16 entryLimit;
    /* 0x7C */ s16 entryMinimum;
    /* 0x7E */ s16 enemyModelCapacity;
    /* 0x80 */ u32 departureMode;
    /* 0x84 */ u8 unk84;
    /* 0x85 */ u8 unk85[3];
    /* 0x88 */ void *scriptFile;
    /* 0x8C */ void *messageFile;
    /* 0x90 */ GameStateFile files[13]; /* the map system's shared files; 1-4 are the player arm models */
    /* 0xF8 */ s8 savedLocationSet;
    /* 0xF9 */ u8 unkF9[3];
};

typedef struct GameState {
    /* 0x000 */ s32 mapId;              /* the current map: >= 100 are field/dungeon maps */
    /* 0x004 */ s32 areaId;             /* the area within the map */
    /* 0x008 */ u32 currentObjectId;
    /* 0x00C */ u8 unk00C[8];
    /* 0x014 */ s32 resumeMode;         /* 1-3: what the resume point records */
    /* 0x018 */ s8 inputBlocked;        /* nonzero while the map ignores input (indoors, busy, paused) */
    /* 0x019 */ u8 unk019[3];
    /* 0x01C */ void *owner;
    /* 0x020 */ s8 unk020;
    /* 0x021 */ u8 unk021;
    /* 0x022 */ s8 loading;             /* set while a departure loads the map: hides followers and map-range models */
    /* 0x023 */ u8 mapReady;            /* the departure's destination map is ready (shows the debug overlay) */
    /* 0x024 */ u8 unk024;
    /* 0x025 */ s8 unk025;
    /* 0x026 */ s8 returning;           /* nonzero: entering the map from spawn points */
    /* 0x027 */ s8 progressEnabled;
    /* 0x028 */ u32 bgmId;
    /* 0x02C */ s16 defaultKind;
    /* 0x02E */ s8 selectedKind;        /* the ambient effect category / selection */
    /* 0x02F */ s8 overrideKinds[3];    /* -1: none */
    /* 0x032 */ s8 eventKind;
    /* 0x033 */ s8 overrideKind;
    /* 0x034 */ u8 retainCampResources; /* also set when the ending is requested */
    /* 0x035 */ u8 unk035[3];
    /* 0x038 */ s32 area;               /* the cull volume, -1: none */
    /* 0x03C */ s32 activeGroupId;
    /* 0x040 */ s32 pendingGroupId;
    /* 0x044 */ s32 unk044;
    /* 0x048 */ s32 unk048;
    /* 0x04C */ s32 unk04C;
    /* 0x050 */ s32 requested;
    /* 0x054 */ u32 entryValue;         /* the script entry's id (the save id) */
    /* 0x058 */ u32 unk058;
    /* 0x05C */ char entryText[0x18];   /* the script entry's text (the save name) */
    /* 0x074 */ s32 argument;
    /* 0x078 */ u32 unk078;
    /* 0x07C */ u32 unk07C;
    /* 0x080 */ s32 overviewRecord;
    /* 0x084 */ MapVector overviewPosition;
    /* 0x090 */ f32 overviewHeading;
    /* 0x094 */ MapVector position;
    /* 0x0A0 */ f32 heading;
    /* 0x0A4 */ s32 tableKind;
    /* 0x0A8 */ u32 recordId;
    /* 0x0AC */ s8 statusActive;
    /* 0x0AD */ u8 statusAlternate;
    /* 0x0AE */ u8 unk0AE;
    /* 0x0AF */ u8 statusPending;
    /* 0x0B0 */ s32 unk0B0;
    /* 0x0B4 */ s32 unk0B4;
    /* 0x0B8 */ s8 unk0B8;
    /* 0x0B9 */ u8 unk0B9;
    /* 0x0BA */ u8 unk0BA;
    /* 0x0BB */ u8 unk0BB;
    /* 0x0BC */ u8 unk0BC;
    /* 0x0BD */ u8 unk0BD;
    /* 0x0BE */ u16 unk0BE;
    /* 0x0C0 */ u16 unk0C0;
    /* 0x0C2 */ u8 unk0C2[2];
    /* 0x0C4 */ MapVector cameraEye;
    /* 0x0D0 */ MapVector cameraTarget;
    /* 0x0DC */ f32 cameraFov;
    /* 0x0E0 */ u8 unk0E0[0x18];
    /* 0x0F8 */ u8 unk0F8;
    /* 0x0F9 */ u8 unk0F9;
    /* 0x0FA */ u8 unk0FA;
    /* 0x0FB */ u8 unk0FB;
    /* 0x0FC */ u8 unk0FC;
    /* 0x0FD */ u8 unk0FD;
    /* 0x0FE */ u8 activeEntrySet;
    /* 0x0FF */ u8 unk0FF;
    /* 0x100 */ GameStateEventBlock event;
    /* 0x200 */ GameStateMapBlock map;
    /* 0x2FC */ s32 savedMapId;
    /* 0x300 */ s32 savedAreaId;
    /* 0x304 */ u32 savedObjectId;
    /* 0x308 */ MapVector savedPosition;
    /* 0x314 */ f32 savedHeading;
    /* 0x318 */ f32 savedHeadingCopy;
    /* 0x31C */ s32 targetMapId;
    /* 0x320 */ s32 targetAreaId;
    /* 0x324 */ MapVector targetPosition;
    /* 0x330 */ f32 targetHeading;
    /* 0x334 */ f32 targetHeadingCopy;
    /* 0x338 */ u8 unk338[0x10];
    /* 0x348 */ s8 suppressStep;        /* also pauses the effect motions */
    /* 0x349 */ u8 unk349[3];
    /* 0x34C */ s32 unk34C;
    /* 0x350 */ u8 unk350[4];
    /* 0x354 */ s32 unk354;
    /* 0x358 */ u8 unk358[8];
    /* 0x360 */ s32 skyDisabled;
    /* 0x364 */ s32 encounterBlocked;
    /* 0x368 */ u32 unk368;
    /* 0x36C */ s32 encounterChangeMapId; /* also: map talk enabled */
    /* 0x370 */ u32 mapMode;
    /* 0x374 */ u8 unk374[0x10];
    /* 0x384 */ s32 unk384;
    /* 0x388 */ u8 unk388[8];
    /* 0x390 */ s32 environmentPreset;
    /* 0x394 */ s32 unk394;
    /* 0x398 */ s32 environmentId;
    /* 0x39C */ s32 unk39C;
    /* 0x3A0 */ s32 unk3A0;
    /* 0x3A4 */ s32 unk3A4;
    /* 0x3A8 */ s32 overlayKind;        /* 0 none, 1 and 2 plain overlays, else blink overlay */
    /* 0x3AC */ s32 overlayX;
    /* 0x3B0 */ s32 overlayY;
    /* 0x3B4 */ u32 overlayTexture;
    /* 0x3B8 */ u32 overlayAlpha;
    /* 0x3BC */ s32 overlayAdditive;
    /* 0x3C0 */ u32 overlayRed;
    /* 0x3C4 */ u32 overlayGreen;
    /* 0x3C8 */ u32 overlayBlue;
    /* 0x3CC */ s8 unk3CC;
    /* 0x3CD */ u8 unk3CD[3];
    /* 0x3D0 */ s32 unk3D0;
    /* 0x3D4 */ s32 unk3D4;
    /* 0x3D8 */ u8 unk3D8[8];
    /* 0x3E0 */ s32 showAllEntries;     /* nonzero: every entry is visible, requirements ignored */
    /* 0x3E4 */ u8 unk3E4[8];
    /* 0x3EC */ s32 stageOverride;      /* -1: derive the stage from the data table */
    /* 0x3F0 */ s32 groupOverride;      /* -1: derive the group from the data table */
    /* 0x3F4 */ u8 unk3F4[4];
    /* 0x3F8 */ GameStateJumpRequest jumpRequest;
    /* 0x41C */ GameStateDepartBlock depart;
    /* 0x4C4 */ u8 unk4C4[0x1B4];
} GameState;

typedef char GameStateLayoutCheck[sizeof(GameState) == 0x678 && sizeof(GameStateEventBlock) == 0x100 &&
    sizeof(GameStateMapBlock) == 0xFC && offsetof(GameState, event) == 0x100 && offsetof(GameState, map) == 0x200 ? 1 : -1];
typedef char GameStateHeadOffsets[offsetof(GameState, resumeMode) == 0x14 && offsetof(GameState, loading) == 0x22 &&
    offsetof(GameState, bgmId) == 0x28 && offsetof(GameState, retainCampResources) == 0x34 &&
    offsetof(GameState, activeGroupId) == 0x3C && offsetof(GameState, entryValue) == 0x54 ? 1 : -1];
typedef char GameStatePositionOffsets[offsetof(GameState, overviewRecord) == 0x80 && offsetof(GameState, position) == 0x94 &&
    offsetof(GameState, statusActive) == 0xAC && offsetof(GameState, cameraEye) == 0xC4 &&
    offsetof(GameState, activeEntrySet) == 0xFE && offsetof(GameState, event.bgmReleased) == 0x11D ? 1 : -1];
typedef char GameStateEncounterOffsets[offsetof(GameState, event.scriptPending) == 0x145 && offsetof(GameState, event.eventState) == 0x164 &&
    offsetof(GameState, event.encounterSourceActive) == 0x17C && offsetof(GameState, event.encounterDelay) == 0x194 &&
    offsetof(GameState, event.encounterMarkerPosition) == 0x1A8 && offsetof(GameState, event.encounterCount) == 0x1B8 ? 1 : -1];
typedef char GameStateMapOffsets[offsetof(GameState, map.tick) == 0x220 && offsetof(GameState, map.darkZone) == 0x228 &&
    offsetof(GameState, map.destination) == 0x230 && offsetof(GameState, map.bgResetPending) == 0x251 &&
    offsetof(GameState, map.departureMode) == 0x280 && offsetof(GameState, map.files) == 0x290 && offsetof(GameState, map.savedLocationSet) == 0x2F8 ? 1 : -1];
typedef char GameStateLocationOffsets[offsetof(GameState, savedMapId) == 0x2FC && offsetof(GameState, savedHeading) == 0x314 &&
    offsetof(GameState, targetMapId) == 0x31C && offsetof(GameState, targetPosition) == 0x324 &&
    offsetof(GameState, suppressStep) == 0x348 && offsetof(GameState, encounterBlocked) == 0x364 ? 1 : -1];
typedef char GameStateTailOffsets[offsetof(GameState, mapMode) == 0x370 && offsetof(GameState, environmentPreset) == 0x390 &&
    offsetof(GameState, overlayKind) == 0x3A8 && offsetof(GameState, showAllEntries) == 0x3E0 &&
    offsetof(GameState, jumpRequest) == 0x3F8 && offsetof(GameState, depart) == 0x41C &&
    offsetof(GameState, depart.counterB) == 0x4C2 && sizeof(GameStateJumpRequest) == 0x24 ? 1 : -1];

extern "C" {
extern GameState g_gameState;
}

#endif

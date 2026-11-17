/* The global game state (Shin Megami Tensei IV: Apocalypse), g_gameState at 0x5F15FC. */
#ifndef GAME_GAMESTATEA_H
#define GAME_GAMESTATEA_H

#include "common.h"
#include "map/MapVector.h"
#include <stddef.h>

/* A screen fade the game state requests (0x628). */
struct GameStateFadeRequestA {
    /* 0x00 */ s32 mode;
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
    /* 0x0C */ u32 texture;
    /* 0x10 */ u32 alpha;
    /* 0x14 */ s32 additive;
    /* 0x18 */ s32 red;
    /* 0x1C */ s32 green;
    /* 0x20 */ s32 blue;
};

/* A camera's eye and look-at target. */
struct GameStateCameraPoseA {
    /* 0x00 */ MapVector eye;
    /* 0x0C */ MapVector target;
};

struct SceneModel;
struct MapIfResource;

/* Only the fields read so far are named; unkXXX fields are accessed but not yet understood. */
struct GameStateA {
    /* 0x000 */ s32 mapId;
    /* 0x004 */ s32 areaId;
    /* 0x008 */ u32 currentObjectId;
    /* 0x00C */ u8 unk00C[8];
    /* 0x014 */ s32 resumeMode;          /* 1-3: what the resume point records */
    /* 0x018 */ s8 inputBlocked;
    /* 0x019 */ u8 unk019[3];
    /* 0x01C */ u32 unk01C;
    /* 0x020 */ s8 unk020;
    /* 0x021 */ u8 paused;               /* nonzero: map actors and controllers do not update */
    /* 0x022 */ u8 loading;
    /* 0x023 */ s8 departLoading;        /* set while the departure loads the destination map */
    /* 0x024 */ u8 mapReady;             /* the destination map is ready (shows the debug overlay) */
    /* 0x025 */ u8 unk025[2];
    /* 0x027 */ s8 progressEnabled;
    /* 0x028 */ u8 unk028;
    /* 0x029 */ u8 unk029[3];
    /* 0x02C */ u32 bgmId;
    /* 0x030 */ u16 defaultKind;
    /* 0x032 */ s8 selectedKind;
    /* 0x033 */ s8 overrideKinds[5];     /* the last one not -1 wins over defaultKind */
    /* 0x038 */ u8 retainCampResources;  /* nonzero: the camp keeps its script-panel resources cached */
    /* 0x039 */ u8 unk039[3];
    /* 0x03C */ s32 activeGroupId;
    /* 0x040 */ s32 groupA;
    /* 0x044 */ s32 groupB;
    /* 0x048 */ s32 unk048;
    /* 0x04C */ s32 unk04C;
    /* 0x050 */ s32 unk050;
    /* 0x054 */ s32 unk054;
    /* 0x058 */ s32 unk058;
    /* 0x05C */ u32 scriptValue;
    /* 0x060 */ u32 unk060;
    /* 0x064 */ char scriptText[0x30];
    /* 0x094 */ MapVector position;
    /* 0x0A0 */ u8 unk0A0[4];
    /* 0x0A4 */ u32 unk0A4;
    /* 0x0A8 */ u32 unk0A8;
    /* 0x0AC */ u32 unk0AC;
    /* 0x0B0 */ s32 overviewRecord;
    /* 0x0B4 */ MapVector overviewPosition;
    /* 0x0C0 */ f32 overviewHeading;
    /* 0x0C4 */ MapVector pointPosition;
    /* 0x0D0 */ f32 pointHeading;
    /* 0x0D4 */ s32 table2FType;         /* 1-3: data table 0x2F type 0-2 */
    /* 0x0D8 */ u32 table2FId;
    /* 0x0DC */ s8 unk0DC;
    /* 0x0DD */ u8 unk0DD[3];
    /* 0x0E0 */ s32 unk0E0;
    /* 0x0E4 */ s32 unk0E4;
    /* 0x0E8 */ s8 unk0E8;
    /* 0x0E9 */ u8 unk0E9;
    /* 0x0EA */ u8 unk0EA;
    /* 0x0EB */ u8 unk0EB;
    /* 0x0EC */ u8 unk0EC;
    /* 0x0ED */ u8 unk0ED;
    /* 0x0EE */ u16 unk0EE;
    /* 0x0F0 */ u16 unk0F0;
    /* 0x0F2 */ u8 unk0F2[2];
    /* 0x0F4 */ MapVector scriptCameraEye;
    /* 0x100 */ MapVector scriptCameraTarget;
    /* 0x10C */ f32 scriptCameraFov;
    /* 0x110 */ MapVector rayStart;
    /* 0x11C */ MapVector rayEnd;
    /* 0x128 */ u8 unk128;
    /* 0x129 */ s8 unk129;
    /* 0x12A */ u8 unk12A;
    /* 0x12B */ s8 unk12B;
    /* 0x12C */ u8 unk12C;
    /* 0x12D */ s8 unk12D;
    /* 0x12E */ u8 unk12E;
    /* 0x12F */ u8 requestPending;
    /* 0x130 */ s16 requestId;
    /* 0x132 */ s16 scriptEntry;
    /* 0x134 */ char requestName[0x10];
    /* 0x144 */ u8 unk144;
    /* 0x145 */ u8 scriptPending;
    /* 0x146 */ u8 unk146[2];
    /* 0x148 */ u32 scriptId;
    /* 0x14C */ u8 unk14C;
    /* 0x14D */ s8 musicInitialized;
    /* 0x14E */ u8 unk14E[0x2C];
    /* 0x17A */ s8 textActive;           /* also keeps the map BGM from changing */
    /* 0x17B */ u8 unk17B;
    /* 0x17C */ u32 textId;
    /* 0x180 */ char text[0x14];
    /* 0x194 */ u8 unk194[4];
    /* 0x198 */ u16 eventResult;
    /* 0x19A */ s16 eventId;             /* event/eNNN/eNNN.bf */
    /* 0x19C */ char eventEntryName[0x10];
    /* 0x1AC */ s16 menuRequestPrimary;
    /* 0x1AE */ s16 menuRequestSecondary;
    /* 0x1B0 */ s8 unk1B0;
    /* 0x1B1 */ u8 unk1B1[3];
    /* 0x1B4 */ f32 unk1B4;
    /* 0x1B8 */ f32 unk1B8;
    /* 0x1BC */ f32 unk1BC;
    /* 0x1C0 */ f32 unk1C0;
    /* 0x1C4 */ u8 unk1C4[2];
    /* 0x1C6 */ s16 unk1C6;
    /* 0x1C8 */ u16 unk1C8;
    /* 0x1CA */ u8 unk1CA[2];
    /* 0x1CC */ u8 unk1CC;
    /* 0x1CD */ u8 unk1CD;
    /* 0x1CE */ u8 unk1CE;
    /* 0x1CF */ u8 unk1CF[5];
    /* 0x1D4 */ u8 unk1D4;
    /* 0x1D5 */ u8 unk1D5[3];
    /* 0x1D8 */ u32 unk1D8;
    /* 0x1DC */ f32 unk1DC;
    /* 0x1E0 */ f32 unk1E0;
    /* 0x1E4 */ f32 unk1E4;
    /* 0x1E8 */ f32 unk1E8;
    /* 0x1EC */ u8 unk1EC[8];
    /* 0x1F4 */ s32 unk1F4;
    /* 0x1F8 */ s32 result;              /* the value scripts read back as their result */
    /* 0x1FC */ u8 unk1FC[4];
    /* 0x200 */ u32 unk200;
    /* 0x204 */ u8 unk204[0xC];
    /* 0x210 */ s32 trapCount;
    /* 0x214 */ u8 unk214[4];
    /* 0x218 */ s32 stage;               /* scene model set currently shown */
    /* 0x21C */ s32 stageGroup;
    /* 0x220 */ u8 unk220[8];
    /* 0x228 */ u8 alternateEnvironment;
    /* 0x229 */ u8 unk229;
    /* 0x22A */ u8 entryTransitionCompleted;
    /* 0x22B */ u8 mapRegistrationPending;
    /* 0x22C */ u8 mapLoadActive;        /* set while a departure loads the destination map */
    /* 0x22D */ u8 groupUpdate;
    /* 0x22E */ u8 unk22E[0x1A];
    /* 0x248 */ u32 unk248;
    /* 0x24C */ s32 areaTypeA;
    /* 0x250 */ s32 areaTypeB;
    /* 0x254 */ s32 ticks;
    /* 0x258 */ s16 selection;
    /* 0x25A */ s16 previousSelection;
    /* 0x25C */ u8 darkZone;
    /* 0x25D */ s8 unk25D;
    /* 0x25E */ u8 transitionCompleted;
    /* 0x25F */ s8 unk25F;
    /* 0x260 */ u8 departMapLoading;     /* set from the departure's tenth frame until the map is loaded */
    /* 0x261 */ u8 unk261;
    /* 0x262 */ s8 dialogRequested;
    /* 0x263 */ u8 unk263;
    /* 0x264 */ u32 unk264;
    /* 0x268 */ u32 unk268;
    /* 0x26C */ u32 unk26C;
    /* 0x270 */ u32 unk270;
    /* 0x274 */ u32 unk274;
    /* 0x278 */ u32 unk278;
    /* 0x27C */ u32 unk27C;
    /* 0x280 */ u8 unk280;
    /* 0x281 */ u8 unk281;
    /* 0x282 */ s16 wideArea;
    /* 0x284 */ s16 motionId;
    /* 0x286 */ s16 selectionArea;
    /* 0x288 */ s16 warpId;
    /* 0x28A */ u8 unk28A[2];
    /* 0x28C */ s32 requestState;
    /* 0x290 */ u8 requestOption;
    /* 0x291 */ u8 unk291[4];
    /* 0x295 */ s8 menuOpen;
    /* 0x296 */ u8 unk296[2];
    /* 0x298 */ f32 unk298;
    /* 0x29C */ f32 unk29C;
    /* 0x2A0 */ s32 unk2A0;
    /* 0x2A4 */ u8 unk2A4[0x1A];
    /* 0x2BE */ s16 limit;
    /* 0x2C0 */ s16 minimum;
    /* 0x2C2 */ u8 unk2C2[2];
    /* 0x2C4 */ u32 unk2C4;
    /* 0x2C8 */ u8 skipTransitionSnapshot;
    /* 0x2C9 */ u8 unk2C9;
    /* 0x2CA */ u8 unk2CA[0x1E];
    /* 0x2E8 */ s32 unk2E8;
    /* 0x2EC */ u8 unk2EC[0x1C];
    /* 0x308 */ u32 unk308;
    /* 0x30C */ s32 popupElapsedFrames;
    /* 0x310 */ u32 pendingEntryIds[32];
    /* 0x390 */ s32 statusTimer;
    /* 0x394 */ s32 giftCounter;
    /* 0x398 */ u8 unk398[4];
    /* 0x39C */ s32 unk39C;
    /* 0x3A0 */ u8 unk3A0[2];
    /* 0x3A2 */ s8 unk3A2;
    /* 0x3A3 */ s8 unk3A3;
    /* 0x3A4 */ u32 resumeMovementState;
    /* 0x3A8 */ s8 unk3A8;
    /* 0x3A9 */ u8 unk3A9[3];
    /* 0x3AC */ f32 unk3AC;
    /* 0x3B0 */ f32 unk3B0;
    /* 0x3B4 */ u8 unk3B4[4];
    /* 0x3B8 */ f32 unk3B8;
    /* 0x3BC */ f32 unk3BC;
    /* 0x3C0 */ f32 unk3C0;
    /* 0x3C4 */ u8 unk3C4[0x14];
    /* 0x3D8 */ s8 unk3D8;
    /* 0x3D9 */ u8 unk3D9[3];
    /* 0x3DC */ MapVector breakableCheckPosition; /* compared with the player's distance to a breakable */
    /* 0x3E8 */ s32 unk3E8;
    /* 0x3EC */ s32 stageOverride;       /* -1: derive the stage from the data table */
    /* 0x3F0 */ s32 groupOverride;       /* -1: derive the group from the data table */
    /* 0x3F4 */ u8 unk3F4;
    /* 0x3F5 */ s8 scriptRequestPending; /* a three-value script request (quest center) is queued */
    /* 0x3F6 */ u8 unk3F6[2];
    /* 0x3F8 */ u32 scriptRequestValues[3];
    /* 0x404 */ s8 unk404;
    /* 0x405 */ u8 unk405[0x17];
    /* 0x41C */ GameStateCameraPoseA followCameraPose;
    /* 0x434 */ GameStateCameraPoseA followCameraTargetPose;
    /* 0x44C */ s32 unk44C;
    /* 0x450 */ s8 unk450;
    /* 0x451 */ u8 unk451;
    /* 0x452 */ u8 unk452[2];
    /* 0x454 */ s32 unk454;
    /* 0x458 */ u8 unk458[8];
    /* 0x460 */ u8 alternateNaviMap;
    /* 0x461 */ u8 unk461;
    /* 0x462 */ s8 naviMapPending;
    /* 0x463 */ u8 unk463;
    /* 0x464 */ u8 naviRefresh;
    /* 0x465 */ u8 positionRequestPending;
    /* 0x466 */ u8 unk466[2];
    /* 0x468 */ MapVector positionRequest;
    /* 0x474 */ s32 positionRequestParameters[4];
    /* 0x484 */ s32 unk484;
    /* 0x488 */ u8 unk488[0xC];
    /* 0x494 */ f32 unk494;
    /* 0x498 */ u8 unk498;
    /* 0x499 */ u8 sceneReady;
    /* 0x49A */ u8 unk49A[5];
    /* 0x49F */ u8 unk49F;
    /* 0x4A0 */ u8 unk4A0[4];
    /* 0x4A4 */ f32 unk4A4;
    /* 0x4A8 */ s8 unk4A8;
    /* 0x4A9 */ u8 unk4A9[3];
    /* 0x4AC */ s32 unk4AC;
    /* 0x4B0 */ s32 unk4B0;
    /* 0x4B4 */ s32 unk4B4;
    /* 0x4B8 */ s32 lastPick;
    /* 0x4BC */ s32 earlierPick;
    /* 0x4C0 */ u8 unk4C0[4];
    /* 0x4C4 */ s32 randomPopupCountdown;
    /* 0x4C8 */ s32 popupCountdown;
    /* 0x4CC */ u8 mapRequested;
    /* 0x4CD */ u8 unk4CD;
    /* 0x4CE */ s8 unk4CE;
    /* 0x4CF */ u8 unk4CF;
    /* 0x4D0 */ void *current;
    /* 0x4D4 */ void *target;
    /* 0x4D8 */ u8 unk4D8;
    /* 0x4D9 */ u8 unk4D9;
    /* 0x4DA */ u8 unk4DA[6];
    /* 0x4E0 */ s8 unk4E0;
    /* 0x4E1 */ u8 unk4E1[0x1B];
    /* 0x4FC */ s32 modeCounter;         /* steps taken in the current map mode */
    /* 0x500 */ u8 overrideMapName;
    /* 0x501 */ u8 unk501[3];
    /* 0x504 */ u32 mapNameId;
    /* 0x508 */ u8 unk508[4];
    /* 0x50C */ u32 unk50C;
    /* 0x510 */ u8 unk510[8];
    /* 0x518 */ SceneModel *areaModels[4];
    /* 0x528 */ SceneModel *model528;
    /* 0x52C */ SceneModel *model52C;
    /* 0x530 */ SceneModel *model530;
    /* 0x534 */ MapIfResource *sceneControllerResources[3];
    /* 0x540 */ u8 unk540[0x10];
    /* 0x550 */ SceneModel *model550;
    /* 0x554 */ u8 unk554[0x10];
    /* 0x564 */ SceneModel *model564;
    /* 0x568 */ u8 unk568[8];
    /* 0x570 */ SceneModel *model570;
    /* 0x574 */ u8 transitionActive;
    /* 0x575 */ u8 unk575[3];
    /* 0x578 */ u32 sourceMap;
    /* 0x57C */ u32 sourceArea;
    /* 0x580 */ u32 sourceObjectId;
    /* 0x584 */ MapVector sourcePosition;
    /* 0x590 */ f32 sourceHeading;
    /* 0x594 */ f32 sourceHeadingCopy;
    /* 0x598 */ u32 destinationMap;
    /* 0x59C */ u32 destinationArea;
    /* 0x5A0 */ MapVector destinationPosition;
    /* 0x5AC */ f32 destinationHeading;
    /* 0x5B0 */ f32 destinationHeadingCopy;
    /* 0x5B4 */ u8 unk5B4[0x14];
    /* 0x5C8 */ u8 unk5C8;
    /* 0x5C9 */ u8 unk5C9[3];
    /* 0x5CC */ s32 collisionDebugMode;  /* 1: draw every collision shape, 2: only those near the player */
    /* 0x5D0 */ u8 unk5D0[0x20];
    /* 0x5F0 */ u32 unk5F0;
    /* 0x5F4 */ u8 unk5F4[0x1C];
    /* 0x610 */ s32 environmentPreset;
    /* 0x614 */ u8 unk614[4];
    /* 0x618 */ s32 unk618;
    /* 0x61C */ s32 unk61C;
    /* 0x620 */ s32 unk620;
    /* 0x624 */ s32 unk624;
    /* 0x628 */ GameStateFadeRequestA fade;
    /* 0x64C */ u8 unk64C[0x14];
    /* 0x660 */ s32 showAllEntries;      /* nonzero: every map-list entry is available */
    /* 0x664 */ u8 unk664[8];
    /* 0x66C */ s32 areaTypeOverrideA;
    /* 0x670 */ s32 areaTypeOverrideB;
    /* 0x674 */ u8 unk674[2];
    /* 0x676 */ u8 scriptOverride;
    /* 0x677 */ u8 unk677[0x1E];
    /* 0x695 */ u8 transitionPending;
    /* 0x696 */ u8 unk696[2];
};

typedef char GameStateAOffsetsCheck[
    offsetof(GameStateA, inputBlocked) == 0x18 && offsetof(GameStateA, bgmId) == 0x2C &&
    offsetof(GameStateA, overrideKinds) == 0x33 && offsetof(GameStateA, position) == 0x94 &&
    offsetof(GameStateA, pointPosition) == 0xC4 && offsetof(GameStateA, scriptCameraEye) == 0xF4 &&
    offsetof(GameStateA, rayStart) == 0x110 && offsetof(GameStateA, scriptId) == 0x148 &&
    offsetof(GameStateA, text) == 0x180 && offsetof(GameStateA, eventId) == 0x19A &&
    offsetof(GameStateA, unk1B4) == 0x1B4 && offsetof(GameStateA, result) == 0x1F8 &&
    offsetof(GameStateA, trapCount) == 0x210 && offsetof(GameStateA, darkZone) == 0x25C &&
    offsetof(GameStateA, requestState) == 0x28C && offsetof(GameStateA, skipTransitionSnapshot) == 0x2C8 &&
    offsetof(GameStateA, pendingEntryIds) == 0x310 && offsetof(GameStateA, resumeMovementState) == 0x3A4 &&
    offsetof(GameStateA, scriptRequestValues) == 0x3F8 && offsetof(GameStateA, followCameraTargetPose) == 0x434 &&
    offsetof(GameStateA, alternateNaviMap) == 0x460 &&
    offsetof(GameStateA, positionRequestParameters) == 0x474 && offsetof(GameStateA, popupCountdown) == 0x4C8 &&
    offsetof(GameStateA, modeCounter) == 0x4FC && offsetof(GameStateA, areaModels) == 0x518 &&
    offsetof(GameStateA, sourceMap) == 0x578 && offsetof(GameStateA, destinationHeadingCopy) == 0x5B0 &&
    offsetof(GameStateA, collisionDebugMode) == 0x5CC && offsetof(GameStateA, fade) == 0x628 &&
    offsetof(GameStateA, showAllEntries) == 0x660 && offsetof(GameStateA, transitionPending) == 0x695 &&
    sizeof(GameStateA) == 0x698 ? 1 : -1];

extern "C" GameStateA g_gameState;

#endif

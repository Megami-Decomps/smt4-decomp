/* gamedata/GameData.c (Apocalypse): the map block of the save body (GameSaveBodyA.mapBlock, save block + 0x3E74),
 * returned by gameFlagsGetBlock() (IV's gameGetMapBlock()). Up to the first flag set it is IV's MapSaveBlock
 * (gamedata/MapSaveBlock.h); the first flag set has 16 words instead of 3, so the fields IV keeps from +0x750 on
 * sit 0x34 bytes later, and 0x600 bytes follow IV's end (the navigation slots, the restoration slots, more bit
 * sets). The game flag block (gameFlagBlockGet) follows it at body + 0x54D0. */
#ifndef GAMEDATA_MAPSAVEBLOCKA_H
#define GAMEDATA_MAPSAVEBLOCKA_H

#include "common.h"
#include "gamedata/MapSaveRecords.h"
#include "map/MapCellGrid.h"
#include "map/MapVector.h"
#include <stddef.h>

/* A navigation slot: the destination id in a word (gameFlagsGetWord1590Ptr hands out the word). */
typedef union MapNaviSlotA {
    /* 0x00 */ u32 word;
    /* 0x00 */ u8 id;
} MapNaviSlotA;

/* A navigation request deferred until the navigation screen can take it (FUN_003de188). */
typedef struct MapNaviRequestA {
    /* 0x00 */ s32 pending;
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 third;
    /* 0x0C */ s32 x;
    /* 0x10 */ s32 y;
    /* 0x14 */ u32 second;
} MapNaviRequestA;

/* Apocalypse: the map block (0x16E4 bytes). */
typedef struct MapSaveBlockA {
    /* 0x0000 */ u8 resumeMode;     /* GameStateA.resumeMode when saved */
    /* 0x0001 */ u8 resumeMapId;
    /* 0x0002 */ u8 resumeAreaId;
    /* 0x0003 */ u8 departureIndex;
    /* 0x0004 */ MapVector resumePosition;
    /* 0x0010 */ f32 resumeHeading;
    /* 0x0014 */ f32 resumeViewHeading; /* the map view's heading (g_lmapView) */
    /* 0x0018 */ u32 unk0018;
    /* 0x001C */ u8 unk001C;
    /* 0x001D */ u8 cameraPresetOffset; /* added to the map camera's follow preset */
    /* 0x001E */ u16 quest;          /* the quest the quest screens selected */
    /* 0x0020 */ s16 unk0020;
    /* 0x0022 */ s16 mapId;          /* also the quest screens' selection */
    /* 0x0024 */ s32 departureMapId;
    /* 0x0028 */ MapSavePoint savePoint;
    /* 0x003A */ u8 sizeX;
    /* 0x003B */ u8 sizeY;
    /* 0x003C */ MapCellGrid grid;
    /* 0x0744 */ u32 flagBits[16];
    /* 0x0784 */ u32 savedFlagBits[16];
    /* 0x07C4 */ s8 registrationPending; /* a pending map registration step (FUN_002d2000 reads it signed) */
    /* 0x07C5 */ s8 layer;
    /* 0x07C6 */ u8 option;
    /* 0x07C7 */ u8 unk07C7;
    /* 0x07C8 */ u32 slotBits[16];
    /* 0x0808 */ u32 clearedGroups[16]; /* one bit per group */
    /* 0x0848 */ u8 unk0848[0x3C4];
    /* 0x0C0C */ u8 timedFlags[64];     /* gameFlagsGet/Set: count down every 0x709 frames, 0xFF never expires */
    /* 0x0C4C */ u8 timedCounters[128]; /* gameFlags2Get: count down every 0x709 frames */
    /* 0x0CCC */ u32 markBits[16];
    /* 0x0D0C */ u32 testBits[16];
    /* 0x0D4C */ u32 blockBits[16];
    /* 0x0D8C */ s16 currentZone;
    /* 0x0D8E */ s8 layout;
    /* 0x0D8F */ s8 hintProgress;
    /* 0x0D90 */ s16 timedValues[16];  /* script values (scrComm), count down every 0x709 frames */
    union {
        /* 0x0DB0 */ u8 explorationCells[3][8]; /* five-by-seven cell bits of exploration regions 101-103 */
        /* 0x0DB0 */ u8 fineCells[18];          /* the ten-by-fourteen grid's cell bits (areaDiscoveryMarkCell) */
    };
    /* 0x0DC8 */ s32 moveRequest;
    /* 0x0DCC */ u8 unk0DCC[4];
    /* 0x0DD0 */ u8 discoveredApps[0x12]; /* one bit per app id */
    /* 0x0DE2 */ u8 unk0DE2[0x12];
    /* 0x0DF4 */ s32 eventEnabled;
    /* 0x0DF8 */ f32 eventTime;
    /* 0x0DFC */ u8 eventPending;
    /* 0x0DFD */ u8 unk0DFD[3];
    /* 0x0E00 */ MapMazeState maze;
    /* 0x0E0C */ s32 resumeObjectId; /* -1 = none */
    /* 0x0E10 */ u32 savePointObjectId;
    /* 0x0E14 */ u8 unk0E14[3];
    /* 0x0E17 */ s8 slotCount;      /* the flag slots (slotActive..slotKey) in use */
    /* 0x0E18 */ u8 unk0E18[0x30];   /* IV's 8 flag slots; Apocalypse keeps 16 at +0x15F4 */
    /* 0x0E48 */ u8 placeStates[0x40]; /* by place id (0-63) */
    /* 0x0E88 */ u32 lastEvent;
    /* 0x0E8C */ u32 eventBits[2];
    /* 0x0E94 */ s32 timers[48];
    /* 0x0F54 */ MapMarkerSlot markers[16];
    /* 0x1094 */ s16 progressedItem;      /* the quest item whose count a gain advanced */
    /* 0x1096 */ s16 completedItem;       /* the quest item whose count a gain completed */
    /* 0x1098 */ u16 secondCompletedItem;
    /* 0x109A */ u16 secondProgressedItem;
    /* 0x109C */ u32 fadeActive;
    /* 0x10A0 */ f32 fadeElapsed;
    /* 0x10A4 */ u32 unk10A4;
    /* 0x10A8 */ u8 unk10A8[0x400];
    /* 0x14A8 */ u32 bits14A8[16];
    /* 0x14E8 */ u32 resetActive;     /* flagBanksResetPendingState */
    /* 0x14EC */ f32 resetTime;
    /* 0x14F0 */ u32 resetValue;
    /* 0x14F4 */ u8 unk14F4[4];
    /* 0x14F8 */ u32 bits14F8[5];
    /* 0x150C */ u32 overrideEnabled;
    /* 0x1510 */ u32 unk1510;
    /* 0x1514 */ s32 naviFeedbackMode;
    /* 0x1518 */ u32 unk1518[2];
    /* 0x1520 */ u32 unk1520;
    /* 0x1524 */ u32 unk1524;
    /* 0x1528 */ f32 moveDistance;
    /* 0x152C */ u32 bits152C[16];
    /* 0x156C */ u32 bits156C[8];
    /* 0x158C */ s32 currentNavi;
    /* 0x1590 */ MapNaviSlotA naviSlots[8];
    /* 0x15B0 */ s32 naviSlotCount;
    /* 0x15B4 */ s32 followState;
    /* 0x15B8 */ s32 naviRefresh;
    /* 0x15BC */ s32 naviRefreshSecond;
    /* 0x15C0 */ f32 fadeDuration;
    /* 0x15C4 */ f32 unk15C4;
    /* 0x15C8 */ u8 unk15C8[4];
    /* 0x15CC */ s32 sceneResult;     /* the scene a script step requested (scrReleaseHandleResult) */
    /* 0x15D0 */ u32 scriptFlag;
    /* 0x15D4 */ u32 tableValue;
    /* 0x15D8 */ u8 unk15D8[0x18];
    /* 0x15F0 */ f32 unk15F0;           /* gameDataResetFloat clears it */
    /* 0x15F4 */ s8 slotActive[16];
    /* 0x1604 */ u16 slotValues[16];
    /* 0x1624 */ s16 slotFlag[16];      /* game flag raised when the slot retires */
    /* 0x1644 */ s16 slotKey[16];
    /* 0x1664 */ s8 spawnPending;
    /* 0x1665 */ s8 pendingSpawnX;
    /* 0x1666 */ s8 pendingSpawnZ;
    /* 0x1667 */ u8 unk1667;
    /* 0x1668 */ s16 random4;
    /* 0x166A */ s16 random100;
    /* 0x166C */ s8 entranceHeading;  /* 0x40-0x43: the side the maze is entered from */
    /* 0x166D */ u8 unk166D[3];
    /* 0x1670 */ u32 bits1670[3];
    /* 0x167C */ u32 thirdBits[3];
    /* 0x1688 */ MapNaviRequestA naviRequest;
    /* 0x16A0 */ s32 pending;
    /* 0x16A4 */ u8 unk16A4[0x40];
} MapSaveBlockA;

typedef char MapSaveBlockALayoutCheck[offsetof(MapSaveBlockA, savePoint) == 0x28 && offsetof(MapSaveBlockA, grid) == 0x3C &&
    offsetof(MapSaveBlockA, flagBits) == 0x744 && offsetof(MapSaveBlockA, savedFlagBits) == 0x784 &&
    offsetof(MapSaveBlockA, slotBits) == 0x7C8 && offsetof(MapSaveBlockA, timedFlags) == 0xC0C &&
    offsetof(MapSaveBlockA, markBits) == 0xCCC && offsetof(MapSaveBlockA, blockBits) == 0xD4C &&
    offsetof(MapSaveBlockA, timedValues) == 0xD90 && offsetof(MapSaveBlockA, eventEnabled) == 0xDF4 &&
    offsetof(MapSaveBlockA, maze.width) == 0xE04 && offsetof(MapSaveBlockA, slotCount) == 0xE17 &&
    offsetof(MapSaveBlockA, placeStates) == 0xE48 && offsetof(MapSaveBlockA, timers) == 0xE94 &&
    offsetof(MapSaveBlockA, markers) == 0xF54 && offsetof(MapSaveBlockA, progressedItem) == 0x1094 &&
    offsetof(MapSaveBlockA, fadeActive) == 0x109C && offsetof(MapSaveBlockA, bits14A8) == 0x14A8 &&
    offsetof(MapSaveBlockA, overrideEnabled) == 0x150C && offsetof(MapSaveBlockA, currentNavi) == 0x158C &&
    offsetof(MapSaveBlockA, naviSlots) == 0x1590 && offsetof(MapSaveBlockA, sceneResult) == 0x15CC &&
    offsetof(MapSaveBlockA, tableValue) == 0x15D4 && offsetof(MapSaveBlockA, slotActive) == 0x15F4 &&
    offsetof(MapSaveBlockA, slotKey) == 0x1644 && offsetof(MapSaveBlockA, spawnPending) == 0x1664 &&
    offsetof(MapSaveBlockA, random100) == 0x166A && offsetof(MapSaveBlockA, thirdBits) == 0x167C && offsetof(MapSaveBlockA, naviRequest) == 0x1688 &&
    offsetof(MapSaveBlockA, pending) == 0x16A0 && sizeof(MapSaveBlockA) == 0x16E4 ? 1 : -1];

extern "C" {
/* The map block of the save body (save block + 0x3E74); IV's gameGetMapBlock. */
MapSaveBlockA *gameFlagsGetBlock(void);
}

#endif

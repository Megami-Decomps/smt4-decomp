/* gamedata/GameData.c (IV): the map block of the save body (GameSaveBody.mapBlock, save block + 0xA8C0), returned by
 * gameGetMapBlock(): where the game resumes, the last save point, the dungeon cell grid, the map's flag and bit
 * sets, cooldowns, the flag slots and the 16 location markers. Apocalypse's block is MapSaveBlockA
 * (gamedata/MapSaveBlockA.h): the same layout with a 16-word first flag set (0x34 bytes more from +0x750 on) and
 * 0x600 more bytes at the end. */
#ifndef GAMEDATA_MAPSAVEBLOCK_H
#define GAMEDATA_MAPSAVEBLOCK_H

#include "common.h"
#include "gamedata/MapSaveRecords.h"
#include "map/MapCellGrid.h"
#include "map/MapVector.h"
#include <stddef.h>

/* IV: the map block (0x10E4 bytes). */
typedef struct MapSaveBlock {
    /* 0x000 */ u8 resumeMode;     /* GameState.resumeMode when saved: 1 local map, 2 field, 3 by id only */
    /* 0x001 */ u8 resumeMapId;
    /* 0x002 */ u8 resumeAreaId;
    /* 0x003 */ u8 departureIndex; /* mapGetDepartureIndex */
    /* 0x004 */ MapVector resumePosition;
    /* 0x010 */ f32 resumeHeading;
    /* 0x014 */ f32 resumeViewHeading; /* the map camera's heading */
    /* 0x018 */ u32 unk018;
    /* 0x01C */ u8 unk01C;
    /* 0x01D */ u8 cameraPresetOffset; /* added to the map camera's follow preset */
    /* 0x01E */ u16 quest;          /* the quest the quest screens selected */
    /* 0x020 */ s16 unk020;
    /* 0x022 */ s16 mapId;
    /* 0x024 */ s32 departureMapId;  /* the map a departure request targets (MapDepart_Init) */
    /* 0x028 */ MapSavePoint savePoint;
    /* 0x03A */ u8 sizeX;
    /* 0x03B */ u8 sizeY;
    /* 0x03C */ MapCellGrid grid;
    /* 0x744 */ u32 flagBits[3];
    /* 0x750 */ u32 savedFlagBits[16];
    /* 0x790 */ u8 registrationPending;
    /* 0x791 */ s8 layer;
    /* 0x792 */ u8 option;
    /* 0x793 */ u8 unk793;
    /* 0x794 */ u32 slotBits[16];
    /* 0x7D4 */ u32 clearedGroups[16]; /* one bit per group */
    /* 0x814 */ u8 unk814[0x3C4];
    /* 0xBD8 */ u8 timedFlags[64];     /* gameFlagsGet/Set: count down every 0x709 frames, 0xFF never expires */
    /* 0xC18 */ u8 timedCounters[128]; /* gameFlags2Get: count down every 0x709 frames */
    /* 0xC98 */ u32 markBits[16];
    /* 0xCD8 */ u32 testBits[16];
    /* 0xD18 */ u32 blockBits[16];
    /* 0xD58 */ s16 currentZone;
    /* 0xD5A */ s8 layout;         /* the navigation icon layout */
    /* 0xD5B */ s8 hintProgress;
    /* 0xD5C */ s16 timedValues[16];  /* script values (scrComm), count down every 0x709 frames */
    /* 0xD7C */ u8 explorationCells[3][8]; /* five-by-seven cell bits of exploration regions 101-103 */
    /* 0xD94 */ s32 moveRequest;
    /* 0xD98 */ u8 unkD98[4];
    /* 0xD9C */ u8 discoveredApps[0x12]; /* one bit per app id (1-140) */
    /* 0xDAE */ u8 unkDAE[0x12];
    /* 0xDC0 */ s32 eventEnabled;  /* talk events are enabled */
    /* 0xDC4 */ f32 eventTime;
    /* 0xDC8 */ u8 eventPending;
    /* 0xDC9 */ u8 unkDC9[3];
    /* 0xDCC */ MapMazeState maze;
    /* 0xDD8 */ s32 resumeObjectId; /* -1 = none */
    /* 0xDDC */ u32 savePointObjectId;
    /* 0xDE0 */ u8 unkDE0[3];
    /* 0xDE3 */ s8 slotCount;
    /* 0xDE4 */ u8 slotActive[8];
    /* 0xDEC */ s8 slotEntry[8];
    /* 0xDF4 */ s16 slotFlag[8];   /* game flag raised when the slot retires */
    /* 0xE04 */ s16 slotKey[8];
    /* 0xE14 */ u8 placeStates[0x40]; /* by place id (0-63): 1 = selectable, 3 = fully visited */
    /* 0xE54 */ u32 lastEvent;
    /* 0xE58 */ u32 eventBits[2];
    /* 0xE60 */ s32 timers[48];
    /* 0xF20 */ MapMarkerSlot markers[16];
    /* 0x1060 */ s16 progressedItem;  /* the quest item whose count a gain advanced (FUN_00348e88) */
    /* 0x1062 */ s16 completedItem;   /* the quest item whose count a gain completed */
    /* 0x1064 */ u16 secondCompletedItem;
    /* 0x1066 */ u16 secondProgressedItem;
    /* 0x1068 */ u8 unk1068[0x7C];
} MapSaveBlock;

typedef char MapSaveBlockLayoutCheck[offsetof(MapSaveBlock, savePoint) == 0x28 && offsetof(MapSaveBlock, grid) == 0x3C &&
    offsetof(MapSaveBlock, flagBits) == 0x744 && offsetof(MapSaveBlock, savedFlagBits) == 0x750 &&
    offsetof(MapSaveBlock, slotBits) == 0x794 && offsetof(MapSaveBlock, timedFlags) == 0xBD8 &&
    offsetof(MapSaveBlock, markBits) == 0xC98 && offsetof(MapSaveBlock, blockBits) == 0xD18 &&
    offsetof(MapSaveBlock, moveRequest) == 0xD94 && offsetof(MapSaveBlock, eventEnabled) == 0xDC0 &&
    offsetof(MapSaveBlock, maze.width) == 0xDD0 && offsetof(MapSaveBlock, slotCount) == 0xDE3 &&
    offsetof(MapSaveBlock, placeStates) == 0xE14 && offsetof(MapSaveBlock, timers) == 0xE60 &&
    offsetof(MapSaveBlock, markers) == 0xF20 && offsetof(MapSaveBlock, progressedItem) == 0x1060 &&
    sizeof(MapSaveBlock) == 0x10E4 ? 1 : -1];

extern "C" {
/* The map block of the save body (save block + 0xA8C0). */
MapSaveBlock *gameGetMapBlock(void);
}

#endif

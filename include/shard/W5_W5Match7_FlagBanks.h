#ifndef SHARD_W5_W5MATCH7_FLAGBANKS_H
#define SHARD_W5_W5MATCH7_FLAGBANKS_H
#include "common.h"
#include "map/MapCellGrid.h"
#include "map/mapDepart.h"
#include <stddef.h>
struct FlagWorkBanks {
    union {
        /* 0x0000 */ u8 unk0000[0x744];
        struct {
            /* 0x0000 */ u8 unk0000BeforeContext[0x1D];
            /* 0x001D */ u8 unk001D;
        } context;
        struct {
            /* 0x0000 */ u8 unk0000[0x3c];
            /* 0x003c */ MapCellGrid grid;
        } mapCells;
        struct {
            /* 0x0000 */ u8 unk0000BeforeTable4c[0x3a];
            /* 0x003a */ u8 unk3a;
            /* 0x003b */ u8 unk3b;
        } table4cHead;
        struct {
            /* 0x0000 */ u8 unk0000BeforeTable[0x28];
            /* 0x0028 */ s16 tableType;
            /* 0x002a */ s16 tableId;
            /* 0x002c */ s16 scale;
            /* 0x002e */ s16 mapId;
            /* 0x0030 */ s16 areaId;
            /* 0x0032 */ s16 x;
            /* 0x0034 */ s16 y;
            /* 0x0036 */ s16 z;
            /* 0x0038 */ s16 heading;
        } savePoint;
        struct {
            /* 0x0000 */ u8 mode;
            /* 0x0001 */ u8 mapId;
            /* 0x0002 */ u8 areaId;
            /* 0x0003 */ u8 unk0003;
            /* 0x0004 */ MapVector position;
            /* 0x0010 */ f32 heading;
            /* 0x0014 */ u32 viewValue;
        } resumePoint;
    };
    /* 0x0744 */ u32 first[16];
    /* 0x0784 */ u32 second[16];
    union {
        /* 0x07c4 */ u8 unk07c4[0xeb8];
        struct {
            /* 0x07c4 */ u8 unk07c4BeforeSavePoint[0x64c];
            /* 0x0e10 */ u32 objectId;
        } savePointObject;
        struct {
            /* 0x07c4 */ u8 unk07c4BeforeResumePoint[0x648];
            /* 0x0e0c */ s32 objectId; /* -1 = none */
        } resumePointObject;
        struct {
            /* 0x07c4 */ u8 unk07c4BeforeReset[0xd24];
            /* 0x14e8 */ u32 active;
            /* 0x14ec */ f32 time;
            /* 0x14f0 */ u32 value;
            /* 0x14f4 */ u8 unk14f4[0x18];
            /* 0x150c */ u32 overrideEnabled;
            /* 0x1510 */ u8 unk1510[8];
            /* 0x1518 */ u32 unk1518[2];
        } reset;
        struct {
            /* 0x07c4 */ u8 unk07c4BeforeBits[0xeac];
            /* 0x1670 */ u32 words[3];
        } bitFlags;
        struct {
            /* 0x07C4 */ u8 unk07C4BeforeRestore[0x653];
            /* 0x0E17 */ s8 count;
            /* 0x0E18 */ u8 unk0E18[0x7DC];
            /* 0x15F4 */ u8 active[16];
            /* 0x1604 */ u16 values[16];
            /* 0x1624 */ s16 completionFlags[16];
            /* 0x1644 */ s16 keys[16];
        } restoration;
        struct {
            /* 0x07c4 */ u8 unk07c4BeforeTable4c[1];
            /* 0x07c5 */ s8 level;
            /* 0x07c6 */ u8 rate;
            /* 0x07c7 */ u8 unk07c7[0xd59];
            /* 0x1520 */ u32 unk1520;
            /* 0x1524 */ u8 unk1524[0xa0];
            /* 0x15c4 */ f32 id;
            /* 0x15c8 */ u8 unk15c8[0xa0];
            /* 0x1668 */ u16 random4;
            /* 0x166a */ u16 random100;
        } table4c;
        struct {
            /* 0x07c4 */ u8 unk07c4BeforeScene[0x8d8];
            /* 0x109c */ u32 unk109c;
            /* 0x10a0 */ f32 unk10a0;
            /* 0x10a4 */ u32 unk10a4;
        } sceneEntry;
        struct {
            /* 0x07C4 */ u8 unk07C4BeforeSpawn[0xEA0];
            /* 0x1664 */ u8 pending;
            /* 0x1665 */ s8 x;
            /* 0x1666 */ s8 z;
        } spawnRequest;
        struct {
            u8 unk07c4BeforeMappedFlags[0x548];
            u32 words[5]; // 0x0d0c
        } mappedFlags;
        struct {
            u8 unk07c4BeforeGridSize[0x640];
            s8 width; // 0x0e04
            s8 height; // 0x0e05
        } gridSize;
        struct {
            u8 unk07c4BeforeGridSetup[0x63c];
            s8 firstX; // 0x0e00
            s8 firstY; // 0x0e01
            s8 secondX; // 0x0e02
            s8 secondY; // 0x0e03
            u8 unk0e04[2];
            u8 startX; // 0x0e06
            u8 startY; // 0x0e07
            u8 specialCount; // 0x0e08
            u8 ready; // 0x0e09
            u8 displayX; // 0x0e0a
            u8 displayY; // 0x0e0b
        } gridSetup;
        struct {
            u8 unk07c4BeforeSavePointMap[0xe08];
            u32 handle; // 0x15cc
        } savePointMap;
        struct {
            u8 prefix[0x8D0];
            /* 0x1094 */ u16 incomplete;
            /* 0x1096 */ u16 completed;
        } questProgress;
        struct {
            u8 unk07c4BeforeFade[0x8d8];
            /* 0x109c */ u32 active;
            /* 0x10a0 */ f32 elapsed;
            u8 unk10a4[0x51c];
            /* 0x15c0 */ f32 duration;
        } mapFade;
        struct {
            u8 unk07c4BeforeNavi[0xdc8];
            /* 0x158c */ s32 currentId;
            /* 0x1590 */ struct { u8 id; u8 pad[3]; } slots[8];
            /* 0x15b0 */ s32 slotCount;
            /* 0x15b4 */ u8 unk15b4[4];
            /* 0x15b8 */ u32 refresh;
            /* 0x15bc */ u32 refreshSecond;
        } navi;
    };
    /* 0x167c */ u32 third[1];
};
typedef char FlagWorkBanksSizeCheck[sizeof(FlagWorkBanks) == 0x1680 ? 1 : -1];
typedef char FlagWorkBanksGridSetupOffsets[
    offsetof(FlagWorkBanks, gridSetup.firstX) == 0xe00 &&
    offsetof(FlagWorkBanks, gridSetup.firstY) == 0xe01 &&
    offsetof(FlagWorkBanks, gridSetup.secondX) == 0xe02 &&
    offsetof(FlagWorkBanks, gridSetup.secondY) == 0xe03 &&
    offsetof(FlagWorkBanks, gridSetup.specialCount) == 0xe08 &&
    offsetof(FlagWorkBanks, gridSetup.ready) == 0xe09 &&
    offsetof(FlagWorkBanks, gridSetup.displayX) == 0xe0a &&
    offsetof(FlagWorkBanks, gridSetup.displayY) == 0xe0b &&
    sizeof(FlagWorkBanks) == 0x1680 ? 1 : -1];
typedef char FlagWorkBanksMappedFlagsOffsetCheck[
    offsetof(FlagWorkBanks, mappedFlags.words) == 0xd0c &&
    offsetof(FlagWorkBanks, gridSize.width) == 0xe04 &&
    offsetof(FlagWorkBanks, gridSize.height) == 0xe05 ? 1 : -1];
typedef char FlagWorkBanksSavePointMapOffsetCheck[
    offsetof(FlagWorkBanks, savePointMap.handle) == 0x15cc ? 1 : -1];
typedef char FlagWorkBanksTable4cOffsetsCheck[
    offsetof(FlagWorkBanks, table4cHead.unk3a) == 0x3a &&
    offsetof(FlagWorkBanks, table4c.level) == 0x7c5 &&
    offsetof(FlagWorkBanks, table4c.unk1520) == 0x1520 &&
    offsetof(FlagWorkBanks, table4c.id) == 0x15c4 &&
    offsetof(FlagWorkBanks, table4c.random100) == 0x166a ? 1 : -1];
typedef char FlagWorkBanksContextOffsetCheck[
    offsetof(FlagWorkBanks, context.unk001D) == 0x1D ? 1 : -1];
typedef char FlagWorkBanksFirstBankOffsetCheck[
    offsetof(FlagWorkBanks, first) == 0x744 ? 1 : -1];
typedef char FlagWorkBanksMapGridOffsetCheck[
    offsetof(FlagWorkBanks, mapCells.grid) == 0x3c &&
    offsetof(FlagWorkBanks, reset.unk1518) == 0x1518 ? 1 : -1];
typedef char FlagWorkBanksRestoreOffsetsCheck[
    offsetof(FlagWorkBanks, restoration.count) == 0xE17 &&
    offsetof(FlagWorkBanks, restoration.active) == 0x15F4 &&
    offsetof(FlagWorkBanks, restoration.values) == 0x1604 &&
    offsetof(FlagWorkBanks, restoration.completionFlags) == 0x1624 &&
    offsetof(FlagWorkBanks, restoration.keys) == 0x1644 ? 1 : -1];
typedef char FlagWorkBanksSceneEntryOffsetsCheck[
    offsetof(FlagWorkBanks, sceneEntry.unk109c) == 0x109c &&
    offsetof(FlagWorkBanks, sceneEntry.unk10a4) == 0x10a4 ? 1 : -1];
typedef char FlagWorkBanksSavePointOffsetsCheck[
    offsetof(FlagWorkBanks, savePoint.scale) == 0x2c &&
    offsetof(FlagWorkBanks, savePoint.heading) == 0x38 &&
    offsetof(FlagWorkBanks, savePointObject.objectId) == 0xe10 ? 1 : -1];
typedef char FlagWorkBanksSpawnOffsetsCheck[
    offsetof(FlagWorkBanks, spawnRequest.pending) == 0x1664 &&
    offsetof(FlagWorkBanks, spawnRequest.x) == 0x1665 &&
    offsetof(FlagWorkBanks, spawnRequest.z) == 0x1666 ? 1 : -1];
typedef char FlagWorkBanksQuestProgressOffsetsCheck[
    offsetof(FlagWorkBanks, questProgress.incomplete) == 0x1094 &&
    offsetof(FlagWorkBanks, questProgress.completed) == 0x1096 ? 1 : -1];
extern "C" FlagWorkBanks *gameFlagsGetBlock(void);

struct FlagValueRange {
    /* 0x00 */ s32 firstId;
    /* 0x04 */ u32 lastId;
    /* 0x08 */ u8 bank;
    /* 0x09 */ u8 width;
    /* 0x0A */ u8 unk0a[2];
};
struct FlagValueStorage {
    /* 0x000 */ u8 bank0[0xF0];
    /* 0x0F0 */ u8 bank1[0x78];
    /* 0x168 */ u8 bank2[0xF0];
    /* 0x258 */ u8 bank3[0xF0];
    /* 0x348 */ u8 bank4[0xF0];
    /* 0x438 */ u8 bank5[0xF0];
    /* 0x528 */ u8 bank6[0xF0];
    /* 0x618 */ u8 bank7[0xF0];
    /* 0x708 */ u8 bank8[0x64];
    /* 0x76C */ u8 bank9[0x190];
    /* 0x8FC */ u8 bank10[0x640];
    /* 0xF3C */ u8 bank12[1];
};
typedef char FlagValueRangeSizeCheck[sizeof(FlagValueRange) == 0x0C ? 1 : -1];
typedef char FlagValueStorageSizeCheck[sizeof(FlagValueStorage) == 0xF3D ? 1 : -1];

#endif

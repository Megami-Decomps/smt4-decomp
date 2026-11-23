/* NON_MATCHING: retail addresses the second cleared record through a base at DAT_005f1cbc+0xb8 and keeps the fourth key table's address in ip (stack-argument stm grouping differs); stores and calls otherwise identical. */
#include "ui/UiSpriteApi.h"
#include "shard/W5_W5Match7_SceneState.h"
#include "game/GameStateA.h"
#include "gamedata/MapSaveBlockA.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/ParamsClearPacket.h"
#include "map/MapDepartJobWorkA.h"
#include "gamedata/GameDataAccess.h"

/* A 0x8C-byte UI sprite; only the data the initializers below pass around. */

/* Animation key rows handed to paramsInit (frame, scale pair, count/mode). */
struct SceneScaleKey {
    f32 first;
    f32 last;
    s32 mode;
};

/* Two blocks of cleared globals at the start of the scene state. */
struct SceneRecordA {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 unk50;
    /* 0x54 */ u8 unk54[0x60];
    /* 0xb4 */ s16 unkb4;
    /* 0xb6 */ s16 unkb6;
};
struct SceneRecordB {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 unk50;
    /* 0x54 */ u8 unk54[0x50];
    /* 0xa4 */ s16 unka4;
    /* 0xa6 */ s16 unka6;
    /* 0xa8 */ u8 unka8[0x10];
};
struct SceneRecords {
    SceneRecordA first;
    SceneRecordB second;
};

/* Key tables for paramsInit; the original file defined them statically. */
static const s32 sKeysFourth[2] = {0xfffe, 0xffff};
static const s32 sKeysFirst[6] = {400, 0, 8, 0, 0xfe70, 4};
static const SceneScaleKey sKeysThird[2] = {{1.0f, 1.0f, 1}, {1.0f, 1.0f, 5}};
static const SceneScaleKey sKeysSecond[2] = {{0.0f, 1.0f, 2}, {1.0f, 0.0f, 0x12}};
static const s32 sKeysFifth[21] = {
    -3, 0, -3, 0, 0, 0, 0, -3, 0, -3, 1, 0, 1, 0, -1, 0, -1, -1, 0, -1, 0};

extern "C" {
extern SceneRecords DAT_005f1cbc;
void FUN_00352eec(void);

/* Clear the scene's work areas; when `savePoint` is set, record the current map point into the flags block first. */
void mapDepartInitState(MapDepartJobWorkA *work, s32 savePoint)
{
    s32 i;
    MapSaveBlockA *flags = gameFlagsGetBlock();
    work->state = 0;
    work->counter = 0;
    work->unk050 = 0;
    work->unk054 = 0;
    work->unk058 = 0;
    work->unk05c = 0;
    work->unk060 = 0;
    work->unk061 = 0;
    work->unk064 = 0;
    work->unk068 = 0;
    work->unk06c = 0;
    work->unk070 = 0;
    work->unk074 = 0;
    work->unk078 = 0;
    work->unk08c = 0;
    work->unk08d = 0;
    work->unk08e = 0;
    work->unk090 = 0;
    work->unk094 = 0;
    work->unk098 = 0;
    work->unk09c = 0;
    work->unk0a0 = 0;
    work->unk0ac = 0;
    work->unk0a4 = 0;
    work->unk0a8 = 0;
    work->unk0a1 = 0;
    work->unk0b0 = 0;
    work->completionFlag = 0;
    work->totalValue = 0;
    work->categoryCounts[0] = 0;
    work->unk0d4[0] = 0;
    work->unk0e8[0] = 0;
    work->categoryCounts[1] = 0;
    work->unk0d4[1] = 0;
    work->unk0e8[1] = 0;
    work->categoryCounts[2] = 0;
    work->unk0d4[2] = 0;
    work->unk0e8[2] = 0;
    work->categoryCounts[3] = 0;
    work->unk0d4[3] = 0;
    work->unk0e8[3] = 0;
    work->categoryCounts[4] = 0;
    work->unk0d4[4] = 0;
    work->unk0e8[4] = 0;
    work->unk0fc = 0;
    work->flaggedItemCount = 0;
    for (i = 0; i < 10; i++) {
        work->unk4a0[i] = 0;
    }
    mapProbePositionDownward(&g_gameState.pointPosition);
    if (savePoint != 0) {
        flags->savePoint.scale = (s16)(s32)g_gameState.overviewHeading;
        flags->savePoint.mapId = g_gameState.mapId;
        flags->savePoint.areaId = g_gameState.areaId;
        flags->savePointObjectId = g_gameState.currentObjectId;
        flags->savePoint.x = (s16)(s32)g_gameState.pointPosition.x;
        flags->savePoint.y = (s16)(s32)g_gameState.pointPosition.y;
        flags->savePoint.z = (s16)(s32)g_gameState.pointPosition.z;
        flags->savePoint.heading = (s16)(s32)g_gameState.pointHeading;
        flags->savePoint.tableType = g_gameState.table2FType;
        flags->savePoint.tableId = g_gameState.table2FId;
    }
    FUN_00352eec();
    SceneRecordA *first = &DAT_005f1cbc.first;
    SceneRecordB *second = &DAT_005f1cbc.second;
    first->unk50 = 0;
    first->unkb4 = 0;
    first->unkb6 = 0;
    second->unk50 = 0;
    second->unka4 = 0;
    second->unka6 = 0;
    paramsClearPacket(&work->packet);
    paramsInit(&work->packet, sKeysFirst, sizeof(sKeysFirst), sKeysSecond, sizeof(sKeysSecond),
               sKeysThird, sizeof(sKeysThird), sKeysFourth, sizeof(sKeysFourth),
               sKeysFifth, sizeof(sKeysFifth));
    work->unk490 = 0;
    uiSpriteStateInitFromSource(&work->sprite, 0x1d, 0, &work->packet, 1, 1.0f);
    uiSpriteSetKeyframe(&work->sprite, 0, 0);
    for (i = 0; i < 5; i++) {
        uiSpriteStateInitFromSource(&work->sprites[i], 0x13, 0x11d4, &work->packet, 0xb, 1.0f);
        uiSpriteSelectAnim(&work->sprites[i], 0);
    }
}

} /* extern "C" */

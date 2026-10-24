/* NON_MATCHING: retail addresses the second cleared record through a base at DAT_005f1cbc+0xb8 and keeps the fourth key table's address in ip (stack-argument stm grouping differs); stores and calls otherwise identical. */
#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match7_DrawParameters.h"

/* A 0x8C-byte UI sprite; only the data the initializers below pass around. */
struct SceneSprite {
    u8 unk00[0x8c];
};

/* Animation key rows handed to paramsInit (frame, scale pair, count/mode). */
struct SceneScaleKey {
    f32 first;
    f32 last;
    s32 mode;
};

/* The object this resets; its packet (+0x128) and sprites (+0x148, +0x1d4) are built at the end. */
struct SceneWork {
    /* 0x000 */ u8 unk000[0x48];
    /* 0x048 */ u32 unk048;
    /* 0x04c */ u32 unk04c;
    /* 0x050 */ u8 unk050;
    /* 0x051 */ u8 unk051[3];
    /* 0x054 */ u32 unk054;
    /* 0x058 */ u32 unk058;
    /* 0x05c */ u32 unk05c;
    /* 0x060 */ u8 unk060;
    /* 0x061 */ u8 unk061;
    /* 0x062 */ u8 unk062[2];
    /* 0x064 */ u32 unk064;
    /* 0x068 */ u8 unk068;
    /* 0x069 */ u8 unk069[3];
    /* 0x06c */ u32 unk06c;
    /* 0x070 */ u8 unk070;
    /* 0x071 */ u8 unk071[3];
    /* 0x074 */ u32 unk074;
    /* 0x078 */ u32 unk078;
    /* 0x07c */ u8 unk07c[0x10];
    /* 0x08c */ u8 unk08c;
    /* 0x08d */ u8 unk08d;
    /* 0x08e */ u8 unk08e;
    /* 0x08f */ u8 unk08f;
    /* 0x090 */ u32 unk090;
    /* 0x094 */ u32 unk094;
    /* 0x098 */ u32 unk098;
    /* 0x09c */ u32 unk09c;
    /* 0x0a0 */ u8 unk0a0;
    /* 0x0a1 */ u8 unk0a1;
    /* 0x0a2 */ u8 unk0a2[2];
    /* 0x0a4 */ u32 unk0a4;
    /* 0x0a8 */ u32 unk0a8;
    /* 0x0ac */ u8 unk0ac;
    /* 0x0ad */ u8 unk0ad[3];
    /* 0x0b0 */ u32 unk0b0[20];
    /* 0x100 */ u8 unk100[0x28];
    /* 0x128 */ Params002c312c packet;
    /* 0x148 */ SceneSprite sprite;
    /* 0x1d4 */ SceneSprite sprites[5];
    /* 0x490 */ u32 unk490;
    /* 0x494 */ u8 unk494[0xc];
    /* 0x4a0 */ u32 unk4a0[10];
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
FlagWorkBanks *gameFlagsGetBlock(void);
void mapProbePositionDownward(MapVector *position);
void FUN_00352eec(void);
void paramsClearPacket(Params002c312c *packet);
void paramsInit(Params002c312c *packet, const void *first, u32 firstBytes,
                const void *second, u32 secondBytes, const void *third, u32 thirdBytes,
                const void *fourth, u32 fourthBytes, const void *fifth, u32 fifthBytes);
void FUN_0014e188(SceneSprite *sprite, u32 group, u32 image, Params002c312c *owner, u16 id, f32 scale);
void uiSpriteSetKeyframe(SceneSprite *sprite, s32 keyframe, s32 restart);
void uiSpriteSelectAnim(SceneSprite *sprite, s32 animation);

/* Clear the scene's work areas; when `savePoint` is set, record the current map point into the flags block first. */
void FUN_0029a794(SceneWork *work, s32 savePoint)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();
    work->unk048 = 0;
    work->unk04c = 0;
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
    work->unk0b0[0] = 0;
    work->unk0b0[1] = 0;
    work->unk0b0[2] = 0;
    work->unk0b0[3] = 0;
    work->unk0b0[9] = 0;
    work->unk0b0[14] = 0;
    work->unk0b0[4] = 0;
    work->unk0b0[10] = 0;
    work->unk0b0[15] = 0;
    work->unk0b0[5] = 0;
    work->unk0b0[11] = 0;
    work->unk0b0[16] = 0;
    work->unk0b0[6] = 0;
    work->unk0b0[12] = 0;
    work->unk0b0[17] = 0;
    work->unk0b0[7] = 0;
    work->unk0b0[13] = 0;
    work->unk0b0[18] = 0;
    work->unk0b0[19] = 0;
    work->unk0b0[8] = 0;
    for (s32 i = 0; i < 10; i++) {
        work->unk4a0[i] = 0;
    }
    mapProbePositionDownward(&g_gameState.point.position);
    if (savePoint != 0) {
        flags->savePoint.scale = (s16)(s32)g_gameState.point.scale;
        flags->savePoint.mapId = g_gameState.mode;
        flags->savePoint.areaId = g_gameState.submode;
        flags->savePointObject.objectId = g_gameState.currentObjectId;
        flags->savePoint.x = (s16)(s32)g_gameState.point.position.x;
        flags->savePoint.y = (s16)(s32)g_gameState.point.position.y;
        flags->savePoint.z = (s16)(s32)g_gameState.point.position.z;
        flags->savePoint.heading = (s16)(s32)g_gameState.point.heading;
        flags->savePoint.tableType = g_gameState.table2F.type;
        flags->savePoint.tableId = g_gameState.table2F.id;
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
    FUN_0014e188(&work->sprite, 0x1d, 0, &work->packet, 1, 1.0f);
    uiSpriteSetKeyframe(&work->sprite, 0, 0);
    for (s32 i = 0; i < 5; i++) {
        FUN_0014e188(&work->sprites[i], 0x13, 0x11d4, &work->packet, 0xb, 1.0f);
        uiSpriteSelectAnim(&work->sprites[i], 0);
    }
}

} /* extern "C" */

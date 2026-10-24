#ifndef GFX_ENGINE_RECORD_LIST_H
#define GFX_ENGINE_RECORD_LIST_H
#include "common.h"
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include "gfx/ControllerModel.h"
#include <stddef.h>

struct EngineRecordModelList {
    u32 unk00;
    union {
        u32 registryHandle;
        ControllerModel *model;
    };
};
struct EngineRecordModelSlot {
    EngineRecordModelList *models;
    u32 unk04;
};
struct EngineEffectRecord {
    u8 active, unk01[3];
    u32 state, phase;
    union {
        f32 position[4];
        struct {
            BattleVector3 position;
            f32 fourth;
        } spatial;
    };
    u32 variant;
    u8 visible, unk21;
    u16 frame, duration;
    u8 unk26[2];
    s32 delay;
    u8 flag2C, unk2D[3];
    union {
        u32 counter30;
        EngineRecordModelList *ownModels;
    };
    u8 flag34, unk35[3];
    s32 modelSlot;
    union {
        u8 unk3C[0x1C];
        struct {
            /* 0x3C */ u8 eligible;
            u8 unk3D[3];
            /* 0x40 */ s32 order;
            /* 0x44 */ f32 distance;
            /* 0x48 */ s32 selectedOrder;
        } proximity;
        struct {
            /* 0x3C */ u8 unmanaged;
            u8 unk3D[0x0F];
            /* 0x4C */ s32 follow;
            /* 0x50 */ u8 followHold;
            u8 unk51[7];
        } control;
    };
};
struct EngineRecordList {
    u32 unk00;
    u16 capacity, enabled, count;
    s16 modelSlot, selectedRecord;
    u8 unk0E[2];
    u32 activeCount;
    u8 unk14[4];
    u32 counter18;
    u8 unk1C[4];
    EngineRecordModelSlot models[16];
    u8 unkA0[4];
    EngineEffectRecord records[32];
    union {
        u8 unkBA4[0x13C];
        /* 0xBA4 */ EngineEffectRecord nearest[3];
    };
    u32 counterCE0;
};
typedef char EngineRecordListOffsets[sizeof(EngineEffectRecord) == 0x58 &&
    offsetof(EngineEffectRecord, position) == 0xC &&
    offsetof(EngineEffectRecord, modelSlot) == 0x38 &&
    offsetof(EngineRecordList, models) == 0x20 &&
    offsetof(EngineRecordList, records) == 0xA4 &&
    offsetof(EngineRecordList, counterCE0) == 0xCE0 &&
    sizeof(EngineRecordList) == 0xCE4 ? 1 : -1];
typedef char EngineRecordProximityOffsetsCheck[
    offsetof(EngineEffectRecord, spatial.position) == 0xC &&
    offsetof(EngineEffectRecord, proximity.eligible) == 0x3C &&
    offsetof(EngineEffectRecord, proximity.order) == 0x40 &&
    offsetof(EngineEffectRecord, proximity.distance) == 0x44 &&
    offsetof(EngineEffectRecord, proximity.selectedOrder) == 0x48 &&
    offsetof(EngineRecordList, nearest) == 0xBA4 &&
    sizeof(EngineEffectRecord) == 0x58 && sizeof(EngineRecordList) == 0xCE4 ? 1 : -1];
#endif

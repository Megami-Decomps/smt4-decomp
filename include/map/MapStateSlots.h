/* Map-state slot storage and its pending selection values. */
#ifndef MAP_MAPSTATESLOTS_H
#define MAP_MAPSTATESLOTS_H
#include "common.h"
#include "map/mapDepart.h"
#include <stddef.h>
typedef struct MapStateModelReference {
    u32 unk00;
    void *model;
} MapStateModelReference;
typedef struct MapStateSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 state;
    union {
        /* 0x08 */ u8 unk08[0x44];
        struct {
            u8 unk08[0x24];
            /* 0x2C */ u8 ready;
            u8 unk2d[3];
            /* 0x30 */ void *model;
        } resources;
        struct {
            /* 0x08 */ u32 flags;
            union {
                /* 0x0C */ f32 position[3];
                /* 0x0C */ MapVector point;
            };
            /* 0x18 */ f32 heading;
            /* 0x1C */ u32 elapsed;
            /* 0x20 */ u8 mode;
            /* 0x21 */ u8 unk21;
            /* 0x22 */ u16 timer;
            /* 0x24 */ u16 modelIndex;
            /* 0x26 */ u8 unk26[2];
            /* 0x28 */ s32 speed;
            /* 0x2C */ u8 ready;
            /* 0x2D */ u8 unk2D[3];
            /* 0x30 */ void *model;
            /* 0x34 */ u8 pending;
            /* 0x35 */ u8 unk35[3];
            /* 0x38 */ s32 sourceIndex;
            /* 0x3C */ u8 resourcePending;
            /* 0x3D */ u8 unk3D[3];
            /* 0x40 */ s32 resourceId;
        } motion;
        struct {
            /* 0x08 */ u8 unk08BeforeRanking[0x34];
            /* 0x3C */ u8 eligible;
            /* 0x3D */ u8 unk3D[3];
            /* 0x40 */ s32 rank;
            /* 0x44 */ f32 distance;
            /* 0x48 */ s32 pendingRank;
        } ranking;
    };
} MapStateSlot;
typedef struct MapStateSlots {
    union {
        /* 0x00 */ u8 unk00[4];
        /* 0x00 */ u32 state;
    };
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u16 unk0A;
    union {
        /* 0x0C */ u8 unk0C[0x4C];
        struct {
            u8 unk0c[0xc];
            /* 0x18 */ MapStateModelReference models[8];
        } references;
        struct {
            /* 0x0C */ s16 selected;
            /* 0x0E */ u8 unk0E[2];
            /* 0x10 */ u32 count;
        } allocation;
        struct {
            u8 unk0C[8];
            /* 0x14 */ u8 atCapacity;
        } reward;
    };
    /* 0x58 */ MapStateSlot slots[32];
} MapStateSlots;

/* Retail 32-bit layout invariants. */
typedef char MapStateSlotSizeCheck[sizeof(MapStateSlot) == 0x4C ? 1 : -1];
typedef char MapStateSlotsSizeCheck[sizeof(MapStateSlots) == 0x9D8 ? 1 : -1];
typedef char MapStateSlotResourceOffsets[offsetof(MapStateSlot, resources.ready) == 0x2c &&
    offsetof(MapStateSlot, resources.model) == 0x30 &&
    offsetof(MapStateSlots, references.models) == 0x18 &&
    offsetof(MapStateModelReference, model) == 4 && sizeof(MapStateModelReference) == 8 ? 1 : -1];

typedef char MapStateSlotMotionOffsetCheck[
    offsetof(MapStateSlot, motion.flags) == 0x08 &&
    offsetof(MapStateSlot, motion.position) == 0x0C &&
    offsetof(MapStateSlot, motion.heading) == 0x18 &&
    offsetof(MapStateSlot, motion.elapsed) == 0x1C &&
    offsetof(MapStateSlot, motion.mode) == 0x20 &&
    offsetof(MapStateSlot, motion.timer) == 0x22 &&
    offsetof(MapStateSlot, motion.modelIndex) == 0x24 &&
    offsetof(MapStateSlot, motion.speed) == 0x28 &&
    offsetof(MapStateSlot, motion.ready) == 0x2C &&
    offsetof(MapStateSlot, motion.model) == 0x30 &&
    offsetof(MapStateSlot, motion.pending) == 0x34 &&
    offsetof(MapStateSlot, motion.sourceIndex) == 0x38 &&
    offsetof(MapStateSlots, allocation.selected) == 0x0C &&
    offsetof(MapStateSlots, allocation.count) == 0x10 ? 1 : -1];
typedef char MapStateSlotResetOffsets[
    offsetof(MapStateSlot, motion.resourcePending) == 0x3C &&
    offsetof(MapStateSlot, motion.resourceId) == 0x40 &&
    offsetof(MapStateSlots, state) == 0 && sizeof(MapStateSlot) == 0x4C &&
    sizeof(MapStateSlots) == 0x9D8 ? 1 : -1];
typedef char MapStateSlotRankingOffsets[
    offsetof(MapStateSlot, ranking.eligible) == 0x3C &&
    offsetof(MapStateSlot, ranking.rank) == 0x40 &&
    offsetof(MapStateSlot, ranking.distance) == 0x44 &&
    offsetof(MapStateSlot, ranking.pendingRank) == 0x48 &&
    sizeof(MapStateSlot) == 0x4C && sizeof(MapStateSlots) == 0x9D8 ? 1 : -1];
typedef char MapStateSlotPointOffsetCheck[
    offsetof(MapStateSlot, motion.point) == 0xC &&
    sizeof(MapStateSlot) == 0x4C && sizeof(MapStateSlots) == 0x9D8 ? 1 : -1];
typedef char MapStateSlotsRewardCapacityOffsetCheck[
    offsetof(MapStateSlots, reward.atCapacity) == 0x14 && sizeof(MapStateSlots) == 0x9D8 ? 1 : -1];

#endif

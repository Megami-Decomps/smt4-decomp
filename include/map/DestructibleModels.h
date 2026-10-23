#ifndef MAP_DESTRUCTIBLE_MODELS_H
#define MAP_DESTRUCTIBLE_MODELS_H
#include "map/mapDepart.h"
#include <stddef.h>
struct ControllerPose;
struct MapDestructibleModel { u32 unk00; ControllerPose *controller; };
struct MapDestructibleGroup { MapDestructibleModel *models[8]; };
struct MapDestructibleEntry {
    u8 active;
    u8 unk01[3];
    s32 state;
    u8 unk08[4];
    MapVector position;
    f32 heading;
    s32 motion;
    u8 changed;
    u8 unk21[7];
    u8 direct;
    u8 unk29[3];
    MapDestructibleModel *model;
    u8 unk30[4];
    s32 group;
    u8 unk38[0x18];
    s16 index;
    u8 unk52[2];
};
struct MapDestructibleModels {
    union {
        u8 prefix[0x5C];
        struct {
            u8 prefix20[0x20];
            MapDestructibleGroup entries[1]; // Strided view; the physical group count is not recovered.
        } groups;
    };
    MapDestructibleEntry entries[16];
};
typedef char MapDestructibleModelsLayoutCheck[
    sizeof(MapDestructibleEntry) == 0x54 && offsetof(MapDestructibleEntry, position) == 0xC &&
    offsetof(MapDestructibleEntry, model) == 0x2C && offsetof(MapDestructibleEntry, index) == 0x50 &&
    offsetof(MapDestructibleModels, groups.entries) == 0x20 &&
    offsetof(MapDestructibleModels, entries) == 0x5C ? 1 : -1];
#endif

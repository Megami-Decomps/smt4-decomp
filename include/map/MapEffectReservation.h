#ifndef MAP_MAPEFFECTRESERVATION_H
#define MAP_MAPEFFECTRESERVATION_H
#include "common.h"
#include "shard/W6_W6Match6_CollisionQuad.h"
#include <stddef.h>

union MapEffectFloatWord { u32 bits; f32 value; };
struct MapEffectRotation {
    u32 kind;
    f32 x, y, z;
    u8 unk10[0xC];
};
struct MapEffectAppearance {
    u32 kind;
    u32 resource;
    MapEffectFloatWord scale[3];
    u8 color[6];
    u16 enabled;
};
struct MapEffectTransform {
    f32 x, y, z;
    f32 offsetX, heading, offsetZ;
};
struct MapEffectAttachmentRequest {
    u32 unk00;
    u32 unk04;
    u32 owner;
    MapEffectTransform* transform;
    u32 unk10;
    MapEffectAppearance* appearance;
};
struct MapEffectReservation {
    u8 unk00[8];
    /* 0x08 */ MapEffectRotation rotation;
    /* 0x24 */ MapEffectAppearance appearance;
    /* 0x40 */ MapEffectRotation* rotationSource;
    /* 0x44 */ MapEffectTransform transform;
    /* 0x5C */ MapEffectAttachmentRequest attachment;
    u8 unk74[0x18];
};
struct MapEffectInstance {
    /* 0x000 */ CollisionVector corners[8];
    /* 0x060 */ CollisionVector center;
    /* 0x06C */ CollisionVector direction;
    /* 0x078 */ u8 unk078[4];
    /* 0x07C */ CollisionVector planeNormals[6];
    /* 0x0C4 */ f32 planeDistances[6];
    /* 0x0DC */ u8 unk0DC[0x48];
    /* 0x124 */ u32 effect;
    /* 0x128 */ u8 flags;
    /* 0x129 */ u8 unk129[3];
    /* 0x12C */ u32 resource;
    /* 0x130 */ u32 kind;
    /* 0x134 */ s32 target;
    union {
        /* 0x138 */ char name[0x40];
        struct {
            /* 0x138 */ u8 unk138[0x24];
            /* 0x15C */ u16 frame;
            /* 0x15E */ s16 previous;
            /* 0x160 */ s16 requiredFlag;
            /* 0x162 */ s16 forbiddenFlag;
            /* 0x164 */ s8 disabled;
            /* 0x165 */ u8 unk165;
            /* 0x166 */ u16 firstParameter;
            /* 0x168 */ u16 secondParameter;
            /* 0x16A */ u16 unk16A;
            /* 0x16C */ u8 channel;
            /* 0x16D */ u8 mode;
            /* 0x16E */ u8 pending;
            /* 0x16F */ u8 unk16F[5];
            /* 0x174 */ u16 unk174;
            /* 0x176 */ u16 unk176;
        } state;
    };
};
struct MapEffectReservationState {
    /* 0x00 */ s32 boundsCount;
    /* 0x04 */ s32 count;
};
typedef char MapEffectReservationLayoutCheck[
    sizeof(MapEffectReservation) == 0x8C &&
    offsetof(MapEffectReservation, appearance) == 0x24 &&
    offsetof(MapEffectReservation, attachment) == 0x5C &&
    offsetof(MapEffectReservation, attachment.owner) == 0x64 &&
    sizeof(MapEffectInstance) == 0x178 &&
    offsetof(MapEffectInstance, effect) == 0x124 &&
    offsetof(MapEffectInstance, state.requiredFlag) == 0x160 &&
    offsetof(MapEffectInstance, state.forbiddenFlag) == 0x162 &&
    offsetof(MapEffectInstance, state.disabled) == 0x164 &&
    offsetof(MapEffectInstance, state.channel) == 0x16C ? 1 : -1];

extern "C" {
extern MapEffectReservationState g_entryTableInfo;
extern MapEffectInstance g_namedEntryTable[160];
} /* extern "C" */

// The three scale payloads are passed as words, not as VFP arguments.
extern "C" s32 mapEffectReserveAndSpawn(u32 resource, u32 kind, u32 owner, u32 appearanceResource,
    u32 first, u32 second, u8 red, u8 green, u8 blue, u8 secondaryRed, u8 secondaryGreen,
    u8 secondaryBlue, s8 channel, u8 mode, u8 flags, u32 scaleX, u32 scaleY, u32 scaleZ,
    u32 option, f32 x, f32 y, f32 z, f32 rotationY, f32 rotationX, f32 rotationZ, f32 heading);
#endif

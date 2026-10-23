#ifndef MAP_MAPEFFECTRESERVATION_H
#define MAP_MAPEFFECTRESERVATION_H
#include "common.h"
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
    u8 unk000[0x124];
    /* 0x124 */ u32 effect;
    /* 0x128 */ u8 flags;
    u8 unk129[3];
    /* 0x12C */ u32 resource;
    /* 0x130 */ u32 kind;
    /* 0x134 */ s32 target;
    u8 unk138[0x24];
    /* 0x15C */ u16 frame;
    /* 0x15E */ s16 previous;
    /* 0x160 */ u16 first;
    /* 0x162 */ u16 second;
    /* 0x164 */ u8 active;
    u8 unk165[7];
    /* 0x16C */ u8 channel;
    /* 0x16D */ u8 mode;
    /* 0x16E */ u8 pending;
    u8 unk16F[9];
};
struct MapEffectReservationState { u32 unk00; s32 count; };
typedef char MapEffectReservationLayoutCheck[
    sizeof(MapEffectReservation) == 0x8C &&
    offsetof(MapEffectReservation, appearance) == 0x24 &&
    offsetof(MapEffectReservation, attachment) == 0x5C &&
    offsetof(MapEffectReservation, attachment.owner) == 0x64 &&
    sizeof(MapEffectInstance) == 0x178 &&
    offsetof(MapEffectInstance, effect) == 0x124 &&
    offsetof(MapEffectInstance, channel) == 0x16C ? 1 : -1];
#endif

#ifndef GFX_ASDLIGHTSET_H
#define GFX_ASDLIGHTSET_H

#include "common.h"

struct AsdLight;

/* Vector of the lights registered with an owner (begin at +0x04, end at +0x08). */
struct AsdLightVector {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ AsdLight **begin;
    /* 0x08 */ AsdLight **end;
};

struct AsdLightOwner {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ AsdLightVector lights;
};

struct AsdLight {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ AsdLightOwner *owner; /* the owner this light is registered with */
};

struct AsdLightSlot {
    /* 0x00 */ AsdLight *light;
    /* 0x04 */ u8 unk04[0x18];
};

struct AsdLightBuffer {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 count;
};

/* An object that owns a light buffer and the slots of the lights it created. */
struct AsdLightSet {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 active;
    /* 0x58 */ u8 unk58[0x44];
    /* 0x9C */ AsdLightBuffer *buffer;
    /* 0xA0 */ AsdLightSlot *slots;
    /* 0xA4 */ void *extra;
};

typedef char AsdLightSetOffsets[sizeof(AsdLightOwner) == 0x20 ? 1 : -1];

#endif

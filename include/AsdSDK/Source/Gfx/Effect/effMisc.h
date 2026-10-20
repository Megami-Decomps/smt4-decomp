/* AsdSDK/Source/Gfx/Effect/effMisc.c: miscellaneous effect objects.
 *
 * An EffMiscObject is one running effect. Its `kind` indexes a table of EffMiscKind callbacks; the
 * kind's work area follows the object header. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFMISC_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFMISC_H

#include "common.h"

typedef struct EffMiscVec4 {
    f32 x, y, z, w;
} EffMiscVec4;

typedef struct EffMiscObject EffMiscObject;

/* Callback table entry (stride 0x18, indexed by EffMiscObject.kind). */
typedef struct EffMiscKind {
    /* 0x00 */ void *(*create)(void *params);        /* optional: builds the object's state */
    /* 0x04 */ void (*destroy)(void *state);         /* optional: frees the state */
    /* 0x08 */ void (*update)(EffMiscObject *obj);
    /* 0x0C */ void (*lateUpdate)(EffMiscObject *obj);
    /* 0x10 */ u8 sharesData;                        /* the shared resource is passed on when cloning */
    /* 0x14 */ s32 workSize;
} EffMiscKind;

/* A resource shared between an object and its clones. */
typedef struct EffMiscShared {
    /* 0x00 */ u32 type;       /* 1 texture file, 4 texture id, 9 effect texture */
    /* 0x04 */ s32 refCount;
    /* 0x08 */ void *resource;
} EffMiscShared;

struct EffMiscObject {
    /* 0x00 */ EffMiscVec4 rotation;  /* identity quaternion (0, 0, 0, 1) when created */
    /* 0x10 */ s32 unk10;             /* -1 when created */
    /* 0x14 */ f32 scale;             /* 1.0 when created */
    /* 0x18 */ u32 kind;
    /* 0x1C */ s32 frame;
    /* 0x20 */ void *state;           /* result of the kind's create */
    /* 0x24 */ u8 *work;              /* points at workData */
    /* 0x28 */ EffMiscShared *shared;
    /* 0x2C */ u8 unk2c[4];
    /* 0x30 */ u8 workData[1];
};

/* Common head of an emitter object: how many particles it can hold. */
typedef struct EffEmitter {
    /* 0x00 */ u32 maxCount;
    /* 0x04 */ s32 unk04;           /* -1 when created */
    /* 0x08 */ f32 scale;           /* 1.0 when created */
    /* 0x0C */ u8 unk0c[0x28];
    /* 0x34 */ u16 unk34;          /* 1 in the small variant */
    /* 0x36 */ u8 unk36[2];
    /* 0x38 */ u8 unk38[0x24];
} EffEmitter;

/* The emitter description a particle count is derived from. */
typedef struct EffEmitterDesc {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 countOverride;   /* 0 = use countDefault */
    /* 0x24 */ s32 multiplier;
    /* 0x28 */ u8 unk28[0x90];
    /* 0xB8 */ s32 countDefault;
} EffEmitterDesc;

/* Description of an effect to spawn (from effect data). */
typedef struct EffMiscDesc {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 kind;            /* index into the kind table */
    /* 0x0E */ u8 unk0e[0xE];
    /* 0x1C */ u16 resourceType;    /* see EffMiscShared.type */
} EffMiscDesc;

/* The parts of the render context the effect update looks at. */
typedef struct EffRenderState {
    /* 0x000 */ u8 unk000[0x5F4];
    /* 0x5F4 */ u8 mode;            /* 1 = skip the generic update, 3/4 = no post step, 5 = restore */
    /* 0x5F5 */ u8 unk5f5[0x103];
    /* 0x6F8 */ u32 unk6f8;
} EffRenderState;

#endif

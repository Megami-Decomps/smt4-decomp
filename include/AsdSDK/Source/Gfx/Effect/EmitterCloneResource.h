#ifndef ASDSDK_EFFECT_EMITTER_CLONE_RESOURCE_H
#define ASDSDK_EFFECT_EMITTER_CLONE_RESOURCE_H
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"

struct EmitterCloneResource {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ void *data;
    /* 0x0C */ u8 unk0c[0x18];
    /* 0x24 */ EffEmitterDesc *description;
};
struct EmitterCloneRenderState {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 enabled;
};
struct EmitterCloneRenderStateOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ EmitterCloneRenderState *state;
};
struct EmitterCloneModelBody {
    union {
        /* 0x000 */ u8 unk000[0x220];
        struct {
            u8 prefix[8];
            void *resource;
        } source;
    };
    /* 0x220 */ EmitterCloneRenderStateOwner *renderState;
};
struct EmitterCloneModelObject {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ EmitterCloneModelBody *body;
};
struct EmitterCloneModel {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ EmitterCloneModelObject *object;
};
typedef char EmitterCloneResourceOffsets[
    offsetof(EmitterCloneResource, data) == 8 &&
    offsetof(EmitterCloneResource, description) == 0x24 &&
    offsetof(EmitterCloneRenderState, enabled) == 0x28 &&
    offsetof(EmitterCloneRenderStateOwner, state) == 8 &&
    offsetof(EmitterCloneModelBody, renderState) == 0x220 &&
    offsetof(EmitterCloneModelObject, body) == 0x2c &&
    offsetof(EmitterCloneModel, object) == 8 ? 1 : -1];
typedef char EmitterCloneModelBodyResourceOffsetCheck[
    offsetof(EmitterCloneModelBody, source.resource) == 8 &&
    sizeof(EmitterCloneModelBody) == 0x224 ? 1 : -1];
#endif

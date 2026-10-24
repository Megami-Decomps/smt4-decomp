/* NON_MATCHING: nw::gfx light-set registration with the inlined MoveArray push_back (grow policy, allocator vtable calls); the grow path and the temporary parameter block are laid out differently from retail */
#include "common.h"

struct NwAllocator;

struct NwAllocatorVtable {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void *unk04;
    /* 0x08 */ void *(*allocate)(NwAllocator *allocator, u32 bytes, u32 alignment);
    /* 0x0C */ void (*release)(NwAllocator *allocator, void *block);
};

struct NwAllocator {
    NwAllocatorVtable *vtable;
};

struct SceneLightObject {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 owner;
};

/* nw::ut::MoveArray<SceneLightObject *>: allocator, begin, end, capacity (low 30 bits) and the
 * allocation mode in the top two bits. */
struct SceneLightArray {
    /* 0x00 */ NwAllocator *allocator;
    /* 0x04 */ SceneLightObject **begin;
    /* 0x08 */ SceneLightObject **end;
    /* 0x0C */ u32 capacityAndMode;
};

struct SceneLightSet {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ SceneLightObject *current;
    /* 0x10 */ u32 id;
    /* 0x14 */ SceneLightArray lights;
};

struct SceneLightParams {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 visible;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 wordSize;
    /* 0x08 */ u32 elementSize;
    /* 0x0C */ u32 count;
    /* 0x10 */ u32 alignment;
    /* 0x14 */ u32 unk14[3];
};

struct LightResource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 handle;
};

struct LightSource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ LightResource *resource;
    /* 0x0C */ u8 unk0C[0x20];
    /* 0x2C */ LightResource *data;
};

struct LightBinding {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 count;
};

struct EffAsdLight {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ struct { u8 unk00[8]; LightSource *source; } *scene;
    /* 0x58 */ u8 unk58[0x44];
    /* 0x9C */ LightBinding *binding;
    /* 0xA0 */ SceneLightObject **slots;   /* 0x1C-byte records, first word is the light */
};

#define NW_ARRAY_CAPACITY_MASK 0x3FFFFFFF
#define NW_ARRAY_MODE_MASK 0xC0000000
#define NW_ARRAY_MODE_ALLOCATOR 0x40000000

extern "C" {
extern u32 g_effAsdLightHandle;
extern u32 g_asdModelTransformBuilder;
extern s32 g_asdLightCount;

void sceneTraverserVisit(u32 handle, u32 builder);
u32 asdMemoryGetAllocatorA(void);
SceneLightObject *FUN_001b6d08(SceneLightParams *params, u32 unused, u32 handle, u32 allocator);
SceneLightSet *asdLightSelectActive(s32 index);
s32 nw_gfx_SceneNode_IsCircularReference(void);

/* Builds one light per bound entry, registers each in the active light set and then walks the
 * scene. */
void FUN_003b8ecc(EffAsdLight *effect)
{
    if (effect->scene == NULL)
        return;
    LightResource *resource = effect->scene->source->data;
    SceneLightSet *set = asdLightSelectActive(1);
    SceneLightObject **slot = effect->slots;
    for (u32 i = 0; i < effect->binding->count; i++) {
        SceneLightParams params;
        params.enabled = 1;
        params.visible = 1;
        params.wordSize = 4;
        params.elementSize = 8;
        params.count = 1;
        params.alignment = 4;
        params.unk14[0] = 0;
        params.unk14[1] = 0;
        params.unk14[2] = 0;
        SceneLightObject *light = FUN_001b6d08(&params, 0, resource->handle, asdMemoryGetAllocatorA());
        *slot = light;

        SceneLightObject *current = set->current;
        if ((current == NULL || current == light
             || (nw_gfx_SceneNode_IsCircularReference(), current == NULL))
            && light->owner == 0) {
            SceneLightArray *array = &set->lights;
            u32 capacity = array->capacityAndMode & NW_ARRAY_CAPACITY_MASK;
            s32 size = array->end - array->begin;
            bool added = true;
            if (size <= (s32)capacity) {
                u32 grown = capacity == 0 ? 1 : capacity << 1;
                added = false;
                if (capacity < grown && array->allocator != NULL
                    && (array->capacityAndMode & NW_ARRAY_MODE_MASK) == NW_ARRAY_MODE_ALLOCATOR) {
                    SceneLightObject **block = (SceneLightObject **)
                        array->allocator->vtable->allocate(array->allocator, grown << 2, 0x20);
                    if (block != NULL) {
                        SceneLightObject **dst = block;
                        u32 used = 0;
                        SceneLightObject **src = array->begin;
                        if (src != array->end) {
                            for (; src != array->end; src++, dst++) {
                                if (dst != NULL)
                                    *dst = *src;
                            }
                            src = array->begin;
                            used = array->end - src;
                        }
                        if (src != NULL) {
                            array->end = src;
                            array->allocator->vtable->release(array->allocator, src);
                        }
                        array->begin = block;
                        array->end = block + used;
                        array->capacityAndMode = grown | (array->capacityAndMode & NW_ARRAY_MODE_MASK);
                        added = true;
                    }
                }
            }
            if (added) {
                if (array->end != NULL)
                    *array->end = light;
                array->end++;
            }
            if (added)
                light->owner = set->id;
        }
        slot += 7;
        g_asdLightCount++;
    }
    sceneTraverserVisit(g_effAsdLightHandle, g_asdModelTransformBuilder);
}

} /* extern "C" */

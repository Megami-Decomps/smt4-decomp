/* NON_MATCHING: twin of smt4 asdCameraCreateFromResource: the self-relative pointer helper codegen and register assignment differ from retail (187 vs 186 rows); the camera creation logic is the same. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

struct SceneObject;

/* A type descriptor: each type points at its parent. */
typedef struct TypeInfo {
    const struct TypeInfo *parent;
} TypeInfo;

typedef struct SceneObjectVTable {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void *unk04;
    /* 0x08 */ const TypeInfo *(*typeInfo)(struct SceneObject *object);
    /* 0x0C */ void (*attach)(struct SceneObject *object, void *owner);
} SceneObjectVTable;

typedef struct SceneObject {
    const SceneObjectVTable *vtable;
} SceneObject;

typedef struct AllocatorVTable {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void *unk04;
    /* 0x08 */ void *(*allocate)(void *allocator, u32 size, u32 alignment);
} AllocatorVTable;

typedef struct Allocator {
    const AllocatorVTable *vtable;
} Allocator;

/* The scene builder request (only the fields set here). */
typedef struct SceneBuilderParams {
    /* 0x00 */ void *data;
    /* 0x04 */ u8 flag;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 stage;
    /* 0x0C */ s32 count;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ s32 unk18;
    /* 0x1C */ s32 count2;
    /* 0x20 */ s32 unk20;
    /* 0x24 */ u8 flag2;
} SceneBuilderParams;

/* The camera animation parameters handed to the animated camera constructor. */
typedef struct CameraAnimParams {
    /* 0x00 */ void *clip;
    /* 0x04 */ f32 length;
    /* 0x08 */ u32 flags;
    /* 0x0C */ s8 loop;
} CameraAnimParams;

/* The animated camera object (only the fields touched here). */
typedef struct AnimatedCamera {
    /* 0x00 */ SceneObject base;
    /* 0x04 */ u8 unk04[0x30];
    /* 0x34 */ u8 unk34[4];
    /* 0x38 */ f32 current;
    /* 0x3C */ f32 previous;
    /* 0x40 */ u8 unk40[4];
    /* 0x44 */ f32 range[2];
    /* 0x4C */ f32 (*evaluate)(void *state, f32 a, f32 b, f32 c);
    /* 0x50 */ void *state;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u8 dirty;
} AnimatedCamera;

/* The result block: the cameras created from the resource. */
typedef struct CameraSet {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ AnimatedCamera *animation;
    /* 0x08 */ void *scene;
    /* 0x0C */ SceneObject *object;
    /* 0x10 */ u8 *resource;
} CameraSet;

typedef struct CameraSceneGroup {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 *begin;
    /* 0x10 */ s32 *end;
    /* 0x14 */ u8 unk14[0x14];
    /* 0x28 */ s32 capacity;
} CameraSceneGroup;

typedef struct CameraScene {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ CameraSceneGroup *group;
    /* 0x02C */ u8 unk02c[0x23C];
    /* 0x268 */ u8 *camera;
} CameraScene;

extern const TypeInfo DAT_005c0f30;
extern const TypeInfo DAT_0059daac;

void *asdMemoryAlloc(u32 size, u32 alignment, u32 a, u32 b, u32 c);
Allocator *asdMemoryGetDefaultAllocator(void);
u32 asdMemoryGetAllocatorA(void);
SceneObject *nw_gfx_SceneBuilder_CreateObject(SceneBuilderParams *params, Allocator *allocator, u32 allocatorA);
AnimatedCamera *_ZN9Obj55b56cC1Ej(void *memory, Allocator *allocator);
void FUN_001b0e44(AnimatedCamera *camera, CameraAnimParams *params, u32 lengthBits, u32 flags, s32 loop);
s32 FUN_00455748(CameraScene *scene, AnimatedCamera *camera);

/* Walks the object's type chain looking for `wanted`; returns the object when found, else null. */
static __inline SceneObject *castTo(SceneObject *object, const TypeInfo *wanted)
{
    if (object != NULL) {
        for (const TypeInfo *type = object->vtable->typeInfo(object); type != NULL; type = type->parent) {
            if (type == wanted) {
                return object;
            }
        }
    }
    return NULL;
}

/* Creates the scene objects described by the camera resource `resource`: one scene per entry of
 * its table, and for every camera animation of that scene an animated camera registered with it. */
CameraSet *FUN_003a4448(u8 *resource)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Camera\\AsdCamera.cpp", 1159);
    CameraSet *set = (CameraSet *)asdMemoryAlloc(0x100, 0x100, 0, 0x18, 1);
    s32 tableOffset = *(s32 *)(resource + 0x48);
    u8 *table = tableOffset != 0 ? resource + 0x48 + tableOffset : NULL;
    u8 *entry = table != NULL ? table + 0x1C : NULL;
    u8 *entryEnd = entry + *(s32 *)(resource + 0x44) * 0x10;

    set->resource = resource;
    for (; entry != entryEnd; entry += 0x10) {
        s32 dataOffset = *(s32 *)(entry + 0xC);
        void *data = dataOffset != 0 ? entry + 0xC + dataOffset : NULL;
        SceneBuilderParams params;

        params.data = data;
        params.flag = 1;
        params.stage = 8;
        params.count = 4;
        params.unk10 = 0;
        params.unk14 = 0;
        params.unk18 = 0;
        params.count2 = 4;
        params.unk20 = 0;
        params.flag2 = 1;
        SceneObject *created = nw_gfx_SceneBuilder_CreateObject(&params, asdMemoryGetDefaultAllocator(),
                                                               asdMemoryGetAllocatorA());
        SceneObject *object = castTo(created, &DAT_005c0f30);
        CameraScene *scene = (CameraScene *)castTo(object, &DAT_0059daac);

        set->object = object;
        set->scene = scene;
        u8 *camera = scene->camera;
        s32 animationCount = *(s32 *)(resource + 0x7C);

        if (camera != NULL && animationCount > 0) {
            f32 length = *(f32 *)(*(u8 **)(camera + 8) + 0x10);

            for (s32 i = 0; i < animationCount; i++) {
                s32 animOffset = *(s32 *)(resource + 0x80);
                u8 *animations = animOffset != 0 ? resource + 0x80 + animOffset : NULL;
                void *clip = NULL;

                if (animations != NULL) {
                    s32 clipOffset = *(s32 *)(animations + i * 0x10 + 0x28);

                    clip = clipOffset != 0 ? animations + i * 0x10 + 0x28 + clipOffset : NULL;
                }
                CameraAnimParams animParams;

                animParams.clip = clip;
                animParams.length = length;
                animParams.flags = 0x40;
                animParams.loop = 1;
                Allocator *allocator = asdMemoryGetDefaultAllocator();
                void *memory = allocator->vtable->allocate(allocator, 0x74, 4);
                AnimatedCamera *animation = NULL;

                if (memory != NULL) {
                    animation = _ZN9Obj55b56cC1Ej(memory, allocator);
                    FUN_001b0e44(animation, &animParams, *(u32 *)&animParams.length, animParams.flags, animParams.loop);
                }
                set->animation = animation;
                animation->base.vtable->attach(&animation->base, camera);
                animation = set->animation;
                f32 value = animation->evaluate(animation->state, animation->range[0], animation->range[1], 0.0f);

                animation->previous = animation->current;
                animation->current = value;
                animation->dirty = 1;
                animation = set->animation;
                if (FUN_00455748(scene, animation) != 0) {
                    CameraSceneGroup *group = scene->group;
                    s32 slots = group->end - group->begin;

                    if (slots > 0) {
                        slots = group->capacity;
                    }
                    if (slots > 0) {
                        *(AnimatedCamera **)group->begin = animation;
                    }
                }
            }
        }
    }
    return set;
}

}

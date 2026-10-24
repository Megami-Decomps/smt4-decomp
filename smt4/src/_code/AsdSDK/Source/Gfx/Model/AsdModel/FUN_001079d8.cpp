/* NON_MATCHING: creates the model scene cameras (two default dynamic cameras, the lens camera chosen by the lens mode, a look-at camera) and attaches them to the scene roots; written from the decompilation and the retail disassembly, the inlined shared-resource release and vector set-up are not compared with retail */
#include "common.h"

struct NwResource;

struct NwResourceOwnerVtable {
    void *slots[3];
    void (*release)(void *owner, NwResource *resource);
};

struct NwResourceOwner {
    NwResourceOwnerVtable *vtable;
};

struct NwResourceVtable {
    void (*finalize)(NwResource *resource);
};

struct NwResource {
    NwResourceVtable *vtable;
    NwResourceOwner *owner;
    u8 owned;
};

struct NwVec3 {
    NwVec3(f32 vx, f32 vy, f32 vz) : x(vx), y(vy), z(vz) {}
    void set(f32 vx, f32 vy, f32 vz) { x = vx; y = vy; z = vz; }
    f32 x, y, z;
};

struct NwVec2 {
    f32 x, y;
};

/* The shared pointer a builder keeps its resources in. */
struct NwResourceRef {
    NwResource *resource;
    u8 owns;
};

struct NwCameraBuilder {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 visible;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ NwResourceRef transform;
    /* 0x18 */ NwResourceRef projection;
};

struct NwCamera {
    /* 0x000 */ u8 unk000[0x294];
    /* 0x294 */ f32 distance;
};

#define MODEL_CAMERA_LENS_ORTHOGRAPHIC 0
#define MODEL_CAMERA_LENS_CUSTOM 2

extern "C" {
extern u8 DAT_00464af4;             /* lens mode */
extern u32 DAT_00464b10;            /* look-at camera */
extern NwCamera *DAT_00464b14;      /* default camera A */
extern NwCamera *DAT_00464b18;      /* default camera B */
extern NwCamera *DAT_00464b1c;      /* preview camera */
extern NwCamera *DAT_00464b34;      /* lens camera */
extern NwVec2 DAT_00464b3c;         /* lens x, y */
extern u32 g_asdModelSlotArray0;
extern u32 DAT_00464ba0;

u32 asdMemoryGetDefaultAllocator(void);
NwCamera *FUN_002c05f4(u32 allocator, const NwVec3 *eye, const NwVec3 *target, u32 flags, NwVec2 lens, f32 near);
NwCamera *FUN_00119e54(u32 allocator, const NwVec3 *eye, const NwVec3 *target, const NwVec3 *up, u8 mode,
                       NwVec2 lens, f32 near);
NwCamera *nw_gfx_Camera_DynamicBuilder_Create(NwCameraBuilder *builder, u32 allocator);
void nw_gfx_SceneNode_AttachChild(u32 parent, u32 child);
void drawableSetRectangle(NwCamera *camera, NwVec2 rectangle, f32 aspect);

static __inline void nwResourceRelease(NwResourceRef *ref)
{
    NwResource *resource = ref->resource;
    if (resource != NULL && ref->owns != 0) {
        resource->vtable->finalize(resource);
        resource->owner->vtable->release(resource->owner, resource);
    }
}

/* A camera made from an empty dynamic builder. */
static __inline NwCamera *modelDefaultCamera(u32 allocator)
{
    NwCameraBuilder builder;
    builder.enabled = 1;
    builder.visible = 1;
    builder.unk04 = 0;
    builder.unk08 = 0;
    builder.unk0C = 1;
    builder.transform.resource = NULL;
    builder.transform.owns = 1;
    builder.projection.resource = NULL;
    builder.projection.owns = 1;
    NwCamera *camera = nw_gfx_Camera_DynamicBuilder_Create(&builder, allocator);
    nwResourceRelease(&builder.transform);
    nwResourceRelease(&builder.projection);
    return camera;
}

void FUN_001079d8(void)
{
    NwVec3 eye(20.0f, 15.0f, 20.0f);
    NwVec3 target(0.0f, 10.0f, 0.0f);
    NwVec2 defaultLens = { 1.0f, 5000.0f };
    const f32 lensNear = 0.66f;

    u32 allocator = asdMemoryGetDefaultAllocator();
    DAT_00464b10 = (u32)FUN_002c05f4(allocator, &eye, &target, 0, defaultLens, lensNear);
    DAT_00464b14 = modelDefaultCamera(allocator);
    DAT_00464b18 = modelDefaultCamera(allocator);
    nw_gfx_SceneNode_AttachChild(g_asdModelSlotArray0, DAT_00464b10);

    if (DAT_00464af4 == MODEL_CAMERA_LENS_ORTHOGRAPHIC) {
        eye.set(20.0f, 15.0f, 20.0f);
        target.set(0.0f, 10.0f, 0.0f);
        NwCamera *camera = FUN_002c05f4(asdMemoryGetDefaultAllocator(), &eye, &target, 0, DAT_00464b3c, lensNear);
        DAT_00464b34 = camera;
        camera->distance = 1.0f / DAT_00464b3c.y;
        drawableSetRectangle(camera, DAT_00464b3c, 1.6666666f);
    } else if (DAT_00464af4 == MODEL_CAMERA_LENS_CUSTOM) {
        eye.set(20.0f, 15.0f, 20.0f);
        target.set(0.0f, 10.0f, 0.0f);
        NwVec3 up(0.0f, 0.0f, 0.0f);
        DAT_00464b34 = FUN_00119e54(asdMemoryGetDefaultAllocator(), &eye, &target, &up, DAT_00464af4,
                                    DAT_00464b3c, 0.0f);
    }
    nw_gfx_SceneNode_AttachChild(g_asdModelSlotArray0, (u32)DAT_00464b34);

    eye.set(20.0f, 15.0f, 20.0f);
    target.set(0.0f, 10.0f, 0.0f);
    DAT_00464b1c = FUN_002c05f4(asdMemoryGetDefaultAllocator(), &eye, &target, 0, defaultLens, lensNear);
    nw_gfx_SceneNode_AttachChild(DAT_00464ba0, (u32)DAT_00464b1c);
}

} /* extern "C" */

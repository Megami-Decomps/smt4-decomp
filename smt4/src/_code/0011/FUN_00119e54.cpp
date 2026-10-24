/* NON_MATCHING: nw::gfx camera creation; retail inlines the shared-resource holder assign/swap (self-assignment tests, ownership flag copies) which are written here as plain stores, so ~50 rows are missing */
#include "common.h"

/* A resource owned through its allocator: finalize through vtable slot 0, free through the
 * owner's vtable slot 3. */
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
    void *slots[3];
    s32 (*editable)(NwResource *resource);   /* returns the writable data block */
};

struct NwResource {
    NwResourceVtable *vtable;
    NwResourceOwner *owner;
    u8 owned;
};

struct NwVec3 {
    f32 x, y, z;
};

struct NwVec2 {
    f32 x, y;
};

/* The shared pointer the builder keeps its resources in. */
struct NwResourceRef {
    NwResource *resource;
    u8 owns;
};

struct NwCameraBuilder {
    /* 0x00 */ NwResourceRef projection;
    /* 0x08 */ u8 enabled;
    /* 0x09 */ u8 visible;
    /* 0x0C */ u32 unk0C[2];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ NwResourceRef transform;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24;
};

struct NwCamera {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ f32 viewX;
    /* 0x5C */ u8 unk5C[0xC];
    /* 0x68 */ f32 viewY;
    /* 0x6C */ u8 unk6C[0xC];
    /* 0x78 */ f32 viewZ;
    /* 0x7C */ u8 unk7C[0xC];
    /* 0x88 */ u32 flags;
    /* 0x8C */ u8 unk8C[0x208];
    /* 0x294 */ f32 distance;
};

#define NW_CAMERA_FLAG_DYNAMIC 0x800

extern "C" {
NwResource *FUN_0012d318(void);
NwResource *FUN_0012d1fc(u32 id);
NwCamera *nw_gfx_Camera_DynamicBuilder_Create(NwCameraBuilder *builder, u32 id);

static __inline void nwResourceRelease(NwResourceRef *ref)
{
    NwResource *resource = ref->resource;
    if (resource != NULL && ref->owns != 0) {
        resource->vtable->finalize(resource);
        resource->owner->vtable->release(resource->owner, resource);
    }
}

/* Creates a camera object: fills its projection and transform resources, wraps them in the
 * dynamic builder and stamps the view vectors and the dynamic flag. */
NwCamera *FUN_00119e54(u32 id, const NwVec3 *view, const NwVec3 *position, const NwVec2 *range,
                       u8 mode, NwVec2 lens, f32 near)
{
    NwResource *transform = FUN_0012d318();
    f32 *transformData = (f32 *)transform->vtable->editable(transform);
    transformData[2] = position->x;
    transformData[3] = position->y;
    transformData[4] = position->z;
    transformData[5] = 0.0f;
    transformData[6] = 1.0f;
    transformData[7] = 0.0f;

    NwResource *projection = FUN_0012d1fc(id);
    *((u8 *)projection + 8) = mode;
    f32 *projectionData = (f32 *)projection->vtable->editable(projection);
    projectionData[1] = lens.x;
    projectionData[2] = lens.y;
    projectionData[4] = near;
    projectionData[5] = range->x;
    projectionData[6] = range->y;

    NwCameraBuilder builder;
    builder.enabled = 1;
    builder.visible = 1;
    builder.unk0C[0] = 0;
    builder.unk0C[1] = 0;
    builder.unk14 = 0;
    builder.unk20 = 0;
    builder.projection.resource = transform;
    builder.projection.owns = 1;
    builder.transform.resource = projection;
    builder.transform.owns = 1;
    builder.unk24 = 1;

    NwCamera *camera = nw_gfx_Camera_DynamicBuilder_Create(&builder, id);
    nwResourceRelease(&builder.transform);
    nwResourceRelease(&builder.projection);

    camera->viewX = view->x;
    camera->viewY = view->y;
    camera->viewZ = view->z;
    camera->flags |= NW_CAMERA_FLAG_DYNAMIC;
    camera->distance = 0.0f;
    return camera;
}

} /* extern "C" */

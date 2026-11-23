/* NON_MATCHING: the builder's two updater pointers are moved in and released as retail does (one shared temporary,
 * the same swaps); armcc still predicates the pointers' owner tests where retail branches, forwards the temporary's
 * known ownership flag where retail reloads it, and allocates the parameters to other registers. */
#include "common.h"
#include "gfx/AsdSceneRoot.h"

struct NwVec3 {
    f32 x, y, z;
};

struct NwVec2 {
    f32 x, y;
};

/* The view updater's data block: the camera's target and up vectors. */
struct NwCameraViewData {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ NwVec3 target;
    /* 0x14 */ NwVec3 up;
};

/* The projection updater's data block. */
struct NwCameraProjectionData {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ NwVec2 lens;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ f32 near;
    /* 0x14 */ NwVec2 range;
};

/* A camera updater (view or projection): a scene object whose data block its fifth slot returns. */
class NwCameraUpdater : public AsdSceneObject {
public:
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void *data();   /* +0x10 */

    /* 0x08 */ u8 mode;
};

/* unit-local: nw::gfx's Camera::DynamicBuilder, the builder this function fills and destroys: its description
 * (field names after NintendoWare's, inferred from the defaults) and the two updaters the camera takes over.
 * Its setters are the library's ViewUpdater/ProjectionUpdater, inlined: retail moves both updaters through one
 * shared temporary pointer, which only the setters' own scopes give. */
struct NwCameraBuilder {
    /* 0x00 */ bool isFixedSizeMemory;
    /* 0x01 */ bool isAnimationEnabled;
    /* 0x04 */ u32 maxCallbacks;
    /* 0x08 */ u32 maxChildren;
    /* 0x0C */ u32 maxAnimObjectsPerGroup;
    /* 0x10 */ AsdSceneMovePtr<NwCameraUpdater> view;
    /* 0x18 */ AsdSceneMovePtr<NwCameraUpdater> projection;

    NwCameraBuilder()
        : isFixedSizeMemory(true), isAnimationEnabled(true), maxCallbacks(0), maxChildren(0), maxAnimObjectsPerGroup(1)
    {
    }

    NwCameraBuilder &ViewUpdater(NwCameraUpdater *updater)
    {
        view = AsdSceneMovePtr<NwCameraUpdater>(updater);
        return *this;
    }

    NwCameraBuilder &ProjectionUpdater(NwCameraUpdater *updater)
    {
        projection = AsdSceneMovePtr<NwCameraUpdater>(updater);
        return *this;
    }
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
NwCameraUpdater *FUN_0012d318(AsdAllocatorObject *allocator);
NwCameraUpdater *FUN_0012d1fc(AsdAllocatorObject *allocator);
NwCamera *nw_gfx_Camera_DynamicBuilder_Create(NwCameraBuilder *builder, AsdAllocatorObject *allocator);

/* Creates a camera object: fills its view and projection updaters, hands them to the dynamic builder and
 * stamps the view vector and the dynamic flag. */
NwCamera *cameraCreateDynamic(AsdAllocatorObject *allocator, const NwVec3 *view, const NwVec3 *position, const NwVec2 *range,
                       u8 mode, NwVec2 lens, f32 near)
{
    NwCamera *camera;

    NwCameraUpdater *viewUpdater = FUN_0012d318(allocator);
    NwCameraViewData *viewData = (NwCameraViewData *)viewUpdater->data();
    viewData->target = *position;
    viewData->up.x = 0.0f;
    viewData->up.y = 1.0f;
    viewData->up.z = 0.0f;

    NwCameraUpdater *projectionUpdater = FUN_0012d1fc(allocator);
    projectionUpdater->mode = mode;
    NwCameraProjectionData *projectionData = (NwCameraProjectionData *)projectionUpdater->data();
    projectionData->lens = lens;
    projectionData->near = near;
    projectionData->range = *range;

    /* The builder releases what it still owns before the camera is stamped (retail's destructor calls come
     * before the stores). */
    {
        NwCameraBuilder builder;
        builder.ViewUpdater(viewUpdater).ProjectionUpdater(projectionUpdater);
        camera = nw_gfx_Camera_DynamicBuilder_Create(&builder, allocator);
    }

    camera->viewX = view->x;
    camera->viewY = view->y;
    camera->viewZ = view->z;
    camera->flags |= NW_CAMERA_FLAG_DYNAMIC;
    camera->distance = 0.0f;
    return camera;
}

} /* extern "C" */

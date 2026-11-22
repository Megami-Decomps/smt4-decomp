/* NON_MATCHING: the view updater is found by nw::ut::DynamicCast (retail's type walk, the hoisted 1 and the early type-info load now match); remaining: model/camera saved registers (r4/r5 swapped, one register fewer and a 52-byte frame), retail's hoisted zero in r8 (predicated zero store of the stereo flag, the cast's NULL) where armcc here places the zero store out of line. */
#include "gfx/CameraManager.h"
#include "gfx/CameraParameters.h"
#include "classes/Obj4215f4.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include <new>
#include "nw/math/MTX34.h"
#include "code/Code0015.h"
#include <stddef.h>
#include "nw/ut/RuntimeTypeInfo.h"

extern "C" {
ManagedCamera *FUN_0019e31c();
u32 gxIsStereoscopic3dEnabled();
f32 workScalarGet(const WorkScalar *);
void nn_math_ARMv6_MTX34CopyAsm(void *, const void *);
extern u8 DAT_005c0f14[];
extern MovedPart *g_asdModelSlotArray0[];
}

/* The camera's view updater (nw::gfx): slot 2 its type tag, slot 4 its resource. */
class CameraViewUpdater {
public:
    virtual ~CameraViewUpdater();
    virtual const nw::ut::RuntimeTypeInfo *getRuntimeTypeInfo() const;
    virtual void unk0c();
    virtual void *getResource();
};

extern "C" void FUN_00191bec(MovedPart *model, s32 cameraIndex)
{
    struct CameraDescription {
        u8 enabled;
        u8 mirrored;
        u8 padding[2];
        CameraParameters pose;
    };
    struct ModelCameraFields {
        u8 prefix[0x258];
        CameraViewUpdater *view;
        u8 padding25C[4];
        Obj4215f4 *projection;
        u8 padding264[0x30];
        f32 scalar;
    };
    struct LensTypeHeader { u32 flags; };
    struct ViewResource {
        u8 prefix[8];
        Vec3f target;
        Vec3f up;
    };
    struct CameraTransform {
        u8 prefix[0x4C];
        f32 matrix[3][4];
    };
    typedef char ModelCameraOffsets[
        offsetof(ModelCameraFields, view) == 0x258 &&
        offsetof(ModelCameraFields, projection) == 0x260 &&
        offsetof(ModelCameraFields, scalar) == 0x294 &&
        offsetof(CameraTransform, matrix) == 0x4C ? 1 : -1];
    ManagedCamera *camera;
    if (cameraIndex == 0)
        camera = reinterpret_cast<ManagedCamera *>(asdCameraGetSavedRenderPairs());
    else
        camera = FUN_0019e31c();
    const CameraDescription *description = reinterpret_cast<const CameraDescription *>(camera);
    /* Camera-specific fields and the view virtual slots exceed the shared prefixes. */
    ModelCameraFields *fields = reinterpret_cast<ModelCameraFields *>(model);
    fields->scalar = workScalarGet(reinterpret_cast<const WorkScalar *>(camera));
    ProjectionLens *lens = static_cast<ProjectionLens *>(fields->projection->getResource());
    if (lens != NULL && (reinterpret_cast<const LensTypeHeader *>(lens)->flags & 0x20000000) == 0)
        lens = NULL;
    lens->aspect = description->pose.aspect;
    lens->nearClip = description->pose.nearClip;
    lens->farClip = description->pose.farClip;
    lens->fieldOfView = description->pose.fieldOfView * 0.017453292f;
    if (cameraIndex != 0 || gxIsStereoscopic3dEnabled() != 1)
        fields->projection->unk08 = 1;
    else
        fields->projection->unk08 = 0;
    Vec3f eye = description->pose.eye;
    model->x = eye.x;
    model->y = eye.y;
    model->z = eye.z;
    model->flags |= MOVED_PART_DIRTY;

    CameraViewUpdater *view = nw::ut::DynamicCast<CameraViewUpdater>(
        fields->view, reinterpret_cast<const nw::ut::RuntimeTypeInfo *>(DAT_005c0f14));
    ViewResource *resource = static_cast<ViewResource *>(view->getResource());
    resource->target = description->pose.target;
    resource->up = description->pose.up;

    f32 transform[3][4];
    nn_math_ARMv6_MTX34CopyAsm(transform, &nw::math::MTX34::Identity());
    if (description->mirrored)
        transform[2][2] = -1.0f;
    MovedPart *slot = g_asdModelSlotArray0[cameraIndex];
    nn_math_ARMv6_MTX34CopyAsm(reinterpret_cast<CameraTransform *>(slot)->matrix, transform);
    slot->flags |= MOVED_PART_DIRTY;
}

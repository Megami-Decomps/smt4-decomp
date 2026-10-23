/* NON_MATCHING: getter/RTTI block layout, cached flag registers and transform-copy address bases differ. */
#include "gfx/CameraManager.h"
#include "gfx/CameraParameters.h"
#include "classes/Obj4215f4.h"
#include "classes/Obj4216b4.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include <new>
#include <stddef.h>

extern "C" {
ManagedCamera *FUN_0019e31c();
ManagedCamera *FUN_00152f54();
u32 FUN_001696f4();
f32 workScalarGet(const WorkScalar *);
void nn_math_ARMv6_MTX34CopyAsm(void *, const void *);
int __cxa_guard_acquire(u32 *);
extern u8 DAT_005c0f14[];
extern u32 DAT_005c4c2c;
extern Mtx34 DAT_0064c054;
extern MovedPart *g_asdModelSlotArray0[];
}

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
        Obj4216b4 *view;
        u8 padding25C[4];
        Obj4215f4 *projection;
        u8 padding264[0x30];
        f32 scalar;
    };
    struct LensTypeHeader { u32 flags; };
    struct TypeInfo { const TypeInfo *parent; };
    struct ViewResource {
        u8 prefix[8];
        Vec3f target;
        Vec3f up;
    };
    struct ViewMethods {
        u8 prefix[8];
        const TypeInfo *(*getType)(Obj4216b4 *);
        u8 padding0C[4];
        ViewResource *(*getResource)(Obj4216b4 *);
    };
    struct CameraTransform {
        u8 prefix[0x4C];
        f32 matrix[3][4];
    };
    typedef char ModelCameraOffsets[
        offsetof(ModelCameraFields, view) == 0x258 &&
        offsetof(ModelCameraFields, projection) == 0x260 &&
        offsetof(ModelCameraFields, scalar) == 0x294 &&
        offsetof(ViewMethods, getResource) == 0x10 &&
        offsetof(CameraTransform, matrix) == 0x4C ? 1 : -1];
    ManagedCamera *camera = cameraIndex != 0 ? FUN_0019e31c() : FUN_00152f54();
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
    if (cameraIndex == 0 && FUN_001696f4() == 1)
        fields->projection->unk08 = 0;
    else
        fields->projection->unk08 = 1;
    model->x = description->pose.eye.x;
    model->y = description->pose.eye.y;
    model->z = description->pose.eye.z;
    model->flags |= MOVED_PART_DIRTY;

    Obj4216b4 *view = fields->view;
    if (view != NULL) {
        const ViewMethods *methods = *reinterpret_cast<const ViewMethods *const *>(view);
        const TypeInfo *type = methods->getType(view);
        while (type != reinterpret_cast<const TypeInfo *>(DAT_005c0f14)) {
            type = type->parent;
            if (type == NULL) {
                view = NULL;
                break;
            }
        }
    }
    const ViewMethods *methods = *reinterpret_cast<const ViewMethods *const *>(view);
    ViewResource *resource = methods->getResource(view);
    resource->target = description->pose.target;
    resource->up = description->pose.up;

    if ((DAT_005c4c2c & 1) == 0 && __cxa_guard_acquire(&DAT_005c4c2c))
        new (&DAT_0064c054) Mtx34;
    f32 transform[3][4];
    nn_math_ARMv6_MTX34CopyAsm(transform, DAT_0064c054.m);
    if (description->mirrored)
        transform[2][2] = -1.0f;
    MovedPart *slot = g_asdModelSlotArray0[cameraIndex];
    nn_math_ARMv6_MTX34CopyAsm(reinterpret_cast<CameraTransform *>(slot)->matrix, transform);
    slot->flags |= MOVED_PART_DIRTY;
}

/* NON_MATCHING: saved-register assignment differs (retail keeps the allocator in r9 and the transform part in r7) and the reference swap is a branch around a five-instruction body in retail (it loads the temporary's flag as a word) where ours is conditionally executed; call order and fields match. */
#include "classes/AsdAllocatorObject.h"

struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
};

/* A scene object the engine allocated: virtual destructor in slot 0, the allocator it came from at +4,
 * and a data block behind virtual slot 4. */
class SceneObject {
public:
    virtual ~SceneObject();
    virtual void reservedA();
    virtual void reservedB();
    virtual void *getData();

    AsdAllocatorObject *allocator;
};

/* The transform part's data block (observed fields). */
struct TransformData {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Vector3 lookAt;
    /* 0x14 */ Vector3 up;
};

/* The projection part's data block (observed fields). */
struct TargetData {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ f32 first;
    /* 0x08 */ f32 second;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ f32 third;
};

/* A reference to a scene object that destroys it when it still owns it. */
class OwnedRef {
public:
    OwnedRef(SceneObject *target) : object(target), owned(true) {}

    ~OwnedRef()
    {
        if (object != NULL && owned) {
            object->~SceneObject();
            object->allocator->release(object);
        }
    }

    /* Makes the reference hold `replacement`; the object it held before is released with the
     * temporary. */
    void reset(SceneObject *replacement)
    {
        OwnedRef temporary(replacement);

        if (this != &temporary) {
            SceneObject *previous = object;
            bool previousOwned;

            object = temporary.object;
            temporary.object = previous;
            previousOwned = owned;
            owned = temporary.owned;
            temporary.owned = previousOwned;
        }
    }

    SceneObject *object;
    bool owned;
};

/* nw::gfx::Camera::DynamicBuilder: the camera's parts are created on demand through the allocator. */
struct CameraBuilder {
    bool flagA;
    bool flagB;
    s32 unk04;
    s32 unk08;
    s32 unk0C;
    OwnedRef transform;
    OwnedRef lookAt;

    CameraBuilder() : flagA(true), flagB(true), unk04(0), unk08(0), unk0C(1), transform(NULL), lookAt(NULL) {}
};

/* The camera as it leaves the builder: translation column and a flag word (observed fields). */
struct BuiltCamera {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ f32 x;
    /* 0x5C */ u8 unk5C[0xC];
    /* 0x68 */ f32 y;
    /* 0x6C */ u8 unk6C[0xC];
    /* 0x78 */ f32 z;
    /* 0x7C */ u8 unk7C[0xC];
    /* 0x88 */ u32 flags;
};

extern "C" {

SceneObject *FUN_0012d318(void);
SceneObject *FUN_0012d618(AsdAllocatorObject *allocator);
BuiltCamera *nw_gfx_Camera_DynamicBuilder_Create(CameraBuilder *builder, AsdAllocatorObject *allocator);

/* Creates a camera at `position` with the given look-at point and projection values. */
BuiltCamera *FUN_002c05f4(AsdAllocatorObject *allocator, const Vector3 *position, const Vector3 *lookAt,
                          u8 mode, f32 firstValue, f32 secondValue, f32 thirdValue)
{
    SceneObject *transform = FUN_0012d318();
    TransformData *transformData = (TransformData *)transform->getData();
    SceneObject *target;
    TargetData *targetData;
    BuiltCamera *camera;

    transformData->lookAt = *lookAt;
    transformData->up.x = 0.0f;
    transformData->up.y = 1.0f;
    transformData->up.z = 0.0f;
    target = FUN_0012d618(allocator);
    *(u8 *)((u8 *)target + 8) = mode;
    targetData = (TargetData *)target->getData();
    targetData->third = thirdValue;
    targetData->first = firstValue;
    targetData->second = secondValue;
    {
        CameraBuilder builder;

        builder.transform.reset(transform);
        builder.lookAt.reset(target);
        camera = nw_gfx_Camera_DynamicBuilder_Create(&builder, allocator);
    }
    camera->x = position->x;
    camera->y = position->y;
    camera->z = position->z;
    camera->flags |= 0x800;
    return camera;
}

} /* extern "C" */

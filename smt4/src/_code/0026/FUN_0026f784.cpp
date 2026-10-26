#include "common.h"
#include "code/Code0026_Smt4.h"

struct Vec3f {
    f32 x, y, z;
};

struct PlacedObject {
    Vec3f position;     // 0x00
    Vec3f angles;       // 0x0C
    f32 scale;          // 0x18
    void *object;       // 0x1C
};

extern "C" {

void FUN_00297684(void *object);
s32 objSlotsAllEmpty(void *object);
void nodeOwnerSetTranslations(void *object, const Vec3f *translation);
void nodeGroupSetScale(void *object, Vec3f scale);
void objSetAnglesDegrees(void *object, const Vec3f *angles);
void lmapSceneSetUnk134(s32 value);

/* Applies the placement's position, scale and angles to its object once the object's slots are empty; 1 when applied. */
s32 FUN_0026f784(PlacedObject *placed)
{
    s32 applied = 0;

    if (placed->object != NULL) {
        FUN_00297684(placed->object);
        if (objSlotsAllEmpty(placed->object) != 0) {
            Vec3f position = placed->position;

            nodeOwnerSetTranslations(placed->object, &position);
            Vec3f scale;

            scale.x = placed->scale;
            scale.z = placed->scale;
            scale.y = placed->scale;
            nodeGroupSetScale(placed->object, scale);
            objSetAnglesDegrees(placed->object, &placed->angles);
            lmapSceneSetUnk134(0);
            applied = 1;
        }
    }
    return applied;
}

} /* extern "C" */

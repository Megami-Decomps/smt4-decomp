/* NON_MATCHING: readable rewrite; the axis is derived from the global matrix at DAT_00407ed0 in retail but is folded to the draft's constants here, and the scheduling of the float math differs. */
#include "common.h"
#include <math.h>
#include "script/scrScriptProcess.h"

struct Vec3f {
    f32 x, y, z;
};

// Config/unite preview screen: only the orbit camera members set up here.
struct OrbitScreen {
    u8 unk000[0x20];
    u8 camera[0x528 - 0x20];    // 0x20: camera node
    Vec3f position;             // 0x528: camera position
    Vec3f direction;            // 0x534: view direction (relative)
    f32 distance;               // 0x540
    f32 unk544;
    f32 fov;                    // 0x548
    f32 nearPlane;              // 0x54c
};

extern "C" {

void FUN_002ad314(f32* sine, f32* cosine);
void FUN_002c159c(void* camera);
void FUN_002c1edc(void* camera, Vec3f* position, Vec3f* target, s32* result);
void FUN_002c1e30(void* camera, s32 flag);

// Places the screen's camera at its default position and aims it by rotating the
// default view direction around the screen axis.
void FUN_0018a104(OrbitScreen* screen)
{
    screen->fov = 35.0f;
    screen->direction.x = 0.0f;
    screen->position.x = 0.0f;
    screen->direction.y = 0.0f;
    screen->direction.z = -1.0f;
    screen->position.y = 6.3f;
    screen->position.z = 44.5f;
    screen->distance = screen->position.z;
    screen->unk544 = 0.0f;
    screen->nearPlane = 5.0f;

    s32 result = 0;
    f32 sine, cosine;
    Vec3f axis;
    axis.x = 0.0f * screen->direction.x + 0.0f * screen->direction.y + 1.0f * screen->direction.z;
    axis.y = -1.0f * screen->direction.x + 0.0f * screen->direction.y + 0.0f * screen->direction.z;
    axis.z = 0.0f * screen->direction.x + 1.0f * screen->direction.y + 0.0f * screen->direction.z;
    FUN_002ad314(&sine, &cosine);

    f32 complement = 1.0f - cosine;
    f32 length = sqrtf(axis.x * axis.x + axis.z * axis.z + axis.y * axis.y);
    f32 inverse = 1.0f / length;
    axis.z *= inverse;
    axis.y *= inverse;
    axis.x *= inverse;
    f32 yz = complement * axis.z * axis.y;
    f32 xy = complement * axis.x * axis.y;
    f32 xz = complement * axis.x * axis.z;
    Vec3f target;
    target.x = ((cosine + complement * axis.x * axis.x) * screen->direction.x + (xz - sine * axis.y) * screen->direction.y +
                (xy + sine * axis.z) * screen->direction.z) * screen->distance + screen->position.x;
    target.y = ((xz + sine * axis.y) * screen->direction.x + (cosine + complement * axis.z * axis.z) * screen->direction.y +
                (yz - sine * axis.x) * screen->direction.z) * screen->distance + screen->position.y;
    target.z = ((xy - sine * axis.z) * screen->direction.x + (yz + sine * axis.x) * screen->direction.y +
                (cosine + complement * axis.y * axis.y) * screen->direction.z) * screen->distance + screen->position.z;
    FUN_002c159c(screen->camera);
    FUN_002c1edc(screen->camera, &screen->position, &target, &result);
    FUN_002c1e30(screen->camera, 1);
    FUN_00298d50(reinterpret_cast<u32>(screen->camera));
}

} /* extern "C" */

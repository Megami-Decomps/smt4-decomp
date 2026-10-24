/* NON_MATCHING: twin of smt4 FUN_0018a104; readable rewrite; the axis is derived from the global matrix at DAT_00407ed0 in retail but is folded to the draft's constants here, and the scheduling of the float math differs. */
#include "common.h"
#include <math.h>

struct Vec3f {
    f32 x, y, z;
};

// Config/unite preview screen: only the orbit camera members set up here.
struct OrbitScreen {
    u8 unk000[0x20];
    u8 camera[0x52c - 0x20];    // 0x20: camera node
    Vec3f position;             // 0x52c: camera position
    Vec3f direction;            // 0x538: view direction (relative)
    f32 distance;               // 0x544
    f32 unk548;
    f32 fov;                    // 0x54c
    f32 nearPlane;              // 0x550
};

extern "C" {

void FUN_0018a924(f32* sine, f32* cosine);
void uiSetFloatPair(void* camera);
void FUN_0014f0dc(void* camera, Vec3f* position, Vec3f* target, s32* result);
void FUN_001523b8(void* camera, s32 flag);
void FUN_0036b824(void* camera);

// Places the screen's camera at its default position and aims it by rotating the
// default view direction around the screen axis.
void FUN_001ffba8(OrbitScreen* screen)
{
    screen->fov = 35.0f;
    screen->direction.x = 0.0f;
    screen->position.x = 0.0f;
    screen->direction.y = 0.0f;
    screen->direction.z = -1.0f;
    screen->position.y = 7.5f;
    screen->position.z = 44.5f;
    screen->distance = screen->position.z;
    screen->unk548 = 0.0f;
    screen->nearPlane = 5.0f;

    s32 result = 0;
    f32 sine, cosine;
    Vec3f axis;
    axis.x = 0.0f * screen->direction.x + 0.0f * screen->direction.y + 1.0f * screen->direction.z;
    axis.y = -1.0f * screen->direction.x + 0.0f * screen->direction.y + 0.0f * screen->direction.z;
    axis.z = 0.0f * screen->direction.x + 1.0f * screen->direction.y + 0.0f * screen->direction.z;
    FUN_0018a924(&sine, &cosine);

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
    uiSetFloatPair(screen->camera);
    FUN_0014f0dc(screen->camera, &screen->position, &target, &result);
    FUN_001523b8(screen->camera, 1);
    FUN_0036b824(screen->camera);
}

} /* extern "C" */

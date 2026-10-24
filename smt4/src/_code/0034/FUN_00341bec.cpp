/* NON_MATCHING: the sine/cosine lookups and the camera math compile differently (register allocation; the identity matrix is built by a local static in the original, retail names it _ZZN2nw4math5MTX348IdentityEvE8identity) */
#include "shard/S1Mover.h"

extern "C" {

extern f32 DAT_00407ed0[]; /* sine/cosine table: per entry base sine, base cosine, sine slope, cosine slope */

Vec3f *FUN_002a86a4(MovedPart *part);
void FUN_002a8638(MovedPart *part, f32 *a, f32 *b, f32 *c, f32 *d);
void *FUN_002c501c(void);
void FUN_002c1edc(void *camera, Vec3f *eye, Vec3f *target, Vec3f *up);
void FUN_002c1e30(void *camera, s32 flag, f32 a, f32 b, f32 c, f32 d);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(Vec3f *out, const Mtx34 *m, const Vec3f *in);

enum {
    SIN_COS_TABLE_SIZE = 256,
    SIN_COS_WRAP = 65536
};

/* Sine and cosine of an angle (radians) by linear interpolation of the 256-entry table. */
static void sinCosFromTable(f32 radians, f32 *sine, f32 *cosine)
{
    f32 scaled = radians * 40.764328f;
    f32 magnitude = scaled < 0.0f ? -scaled : scaled;

    while (magnitude >= (f32)SIN_COS_WRAP) {
        magnitude -= (f32)SIN_COS_WRAP;
    }
    u32 whole = (u32)magnitude;
    f32 fraction = magnitude - (f32)(whole & 0xFFFF);
    const f32 *entry = &DAT_00407ed0[(whole & 0xFF) * 4];

    *sine = entry[0] + fraction * entry[2];
    *cosine = entry[1] + fraction * entry[3];
    if (scaled < 0.0f) {
        *sine = -*sine;
    }
}

/* Aim the scene camera along the moved part's orientation: eye at the part, looking along its -Z
 * axis with its Y axis up. */
void FUN_00341bec(Mover *mover)
{
    MovedPart *part = mover->parts[mover->slot];
    Vec3f *rotation = FUN_002a86a4(mover->parts[mover->slot]);
    f32 sinX, cosX, sinY, cosY, sinZ, cosZ;

    sinCosFromTable(rotation->x, &sinX, &cosX);
    sinCosFromTable(rotation->y, &sinY, &cosY);
    sinCosFromTable(rotation->z, &sinZ, &cosZ);

    Mtx34 matrix;

    matrix.m[0][0] = cosZ * cosY;
    matrix.m[0][1] = sinX * cosZ * sinY - cosX * sinZ;
    matrix.m[0][2] = sinX * sinZ + cosX * cosZ * sinY;
    matrix.m[0][3] = 0.0f;
    matrix.m[1][0] = sinZ * cosY;
    matrix.m[1][1] = cosX * cosZ + sinX * sinZ * sinY;
    matrix.m[1][2] = cosX * sinZ * sinY - sinX * cosZ;
    matrix.m[1][3] = 0.0f;
    matrix.m[2][0] = -sinY;
    matrix.m[2][1] = sinX * cosY;
    matrix.m[2][2] = cosX * cosY;
    matrix.m[2][3] = 0.0f;

    Vec3f forward = {0.0f, 0.0f, -1.0f};
    Vec3f direction;

    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&direction, &matrix, &forward);
    mover->cameraEye.x = part->x;
    mover->cameraEye.y = part->y;
    mover->cameraEye.z = part->z;
    mover->cameraTarget.x = part->x + direction.x;
    mover->cameraTarget.y = part->y + direction.y;
    mover->cameraTarget.z = part->z + direction.z;

    Vec3f upAxis = {0.0f, 1.0f, 0.0f};

    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&mover->cameraUp, &matrix, &upAxis);

    void *camera = FUN_002c501c();
    f32 fov[4];

    FUN_002c1edc(camera, &mover->cameraEye, &mover->cameraTarget, &mover->cameraUp);
    FUN_002a8638(mover->parts[mover->slot], &fov[0], &fov[3], &fov[1], &fov[2]);
    fov[0] = fov[0] * 180.0f * 0.31830987f;
    FUN_002c1e30(camera, 1, fov[0], fov[1], fov[2], fov[3]);
}

} /* extern "C" */

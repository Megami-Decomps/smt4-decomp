/* NON_MATCHING: VFP register allocation and the grouping of the multiply-accumulate chains of the rotated offsets differ from retail; the algorithm is the same. */
#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

/* The scene camera's look-at record: two (x, z) points and the field of view. */
typedef struct LookAtCamera {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ f32 fromX;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ f32 fromZ;
    /* 0x10 */ f32 toX;
    /* 0x14 */ u32 toY;
    /* 0x18 */ f32 toZ;
    /* 0x1C */ u8 unk1c[0xC];
    /* 0x28 */ f32 fov;
} LookAtCamera;

/* The resulting camera parameters: position, a yaw in table units, a distance scale, a pitch
 * offset and an orbit distance. */
typedef struct OrbitCamera {
    /* 0x00 */ f32 position[3];
    /* 0x0C */ f32 zoom;
    /* 0x10 */ f32 yaw;
    /* 0x14 */ f32 pitchOffset;
    /* 0x18 */ f32 distance;
} OrbitCamera;

extern const f32 DAT_00536d14[]; /* sine/cosine table: per entry base sine, base cosine, sine slope, cosine slope */

f32 FUN_001bbde0(f32 value);
f32 FUN_0050dda4(f32 value);
extern f32 __sqrtf(f32);

/* Aims the orbit camera along the look-at camera's horizontal direction: derives the yaw from the
 * direction, offsets the position by the pitch-rotated pitch offset and the orbit distance, and
 * sets the zoom from the field of view. */
void FUN_00411e8c(void *unused, OrbitCamera *out)
{
    LookAtCamera *look = reinterpret_cast<LookAtCamera *>(FUN_00152f54());
    f32 dx = look->toX - look->fromX;
    f32 dy = 0.0f;
    f32 dz = look->toZ - look->fromZ;
    f32 length = __sqrtf(dx * dx + dy * dy + dz * dz);
    f32 inverse = 1.0f / length;
    f32 nx = dx * inverse;
    f32 ny = dy * inverse;
    f32 nz = dz * inverse;
    f32 facing = dy * nx + dy * ny + -1.0f * nz;

    if (facing == 1.0f) {
        out->yaw = 0.0f;
    } else if (facing == -1.0f) {
        out->yaw = 128.0f;
    } else {
        out->yaw = FUN_001bbde0(facing) * 40.743664f;
        if (dy > -1.0f * nx - dy * nz) {
            out->yaw = -out->yaw;
        }
    }
    f32 sinA = DAT_00536d14[0] + dy * DAT_00536d14[2];
    f32 cosA = DAT_00536d14[1] + dy * DAT_00536d14[3];
    f32 sinB = DAT_00536d14[256] + dy * DAT_00536d14[258];
    f32 cosB = DAT_00536d14[257] + dy * DAT_00536d14[259];

    out->position[0] = look->toX;
    out->position[1] = dy;
    out->position[2] = look->toZ;
    f32 pitch = out->pitchOffset;
    f32 negCos = -cosB;

    out->position[0] = out->position[0] + (cosA * sinB * dx + (sinA * cosA * negCos - cosA * sinA) * dy
                                            + (sinA * sinA + cosA * cosA * negCos) * dz) * pitch * 0.1f;
    out->position[1] = out->position[1] + (sinA * sinB * dx + (cosA * cosA + sinA * sinA * negCos) * dy
                                            + (cosA * sinA * negCos - sinA * cosA) * dz) * pitch * 0.1f;
    out->position[2] = look->toZ + (-negCos * dx + sinA * sinB * dy + cosA * sinB * dz) * pitch * 0.1f;
    f32 back = -out->distance;

    out->position[0] = out->position[0] + nx * back;
    out->position[1] = out->position[1] + ny * back;
    out->position[2] = out->position[2] + nz * back;
    f32 halfFov = look->fov * 0.5f * 0.0055555557f * 3.1415927f;

    out->zoom = length / (120.0f / FUN_0050dda4(halfFov));
}

}

/* NON_MATCHING: register allocation and the cone-angle constant handling differ (retail keeps pi and 256/2pi in r9/s20 across the loop; 8 rows fewer here) */
#include "common.h"

/* One light as the shader setup reads it (0x70 bytes). */
struct ShaderLight {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ f32 position[3];
    /* 0x28 */ u8 type;            /* 5: directional, 7: spot-like (w = 1) */
    /* 0x29 */ u8 unk29;
    /* 0x2a */ u8 flags;           /* bit 1: enabled for the second pass */
    /* 0x2b */ u8 unk2b[0x25];
    /* 0x50 */ f32 direction[3];
    /* 0x5c */ f32 color[3];
    /* 0x68 */ f32 intensity;
    /* 0x6c */ f32 coneAngle;      /* radians; 0 < angle < pi selects a spot cone */
};

/* The shader-state block: the lights and the vec4 tables they are packed into. */
struct ShaderLightState {
    /* 0x000 */ ShaderLight lights[8];
    /* 0x380 */ f32 positionA[8][4];
    /* 0x400 */ f32 positionB[8][4];
    /* 0x480 */ f32 directionA[8][4];
    /* 0x500 */ f32 directionB[8][4];
    /* 0x580 */ f32 cone[8][4];
    /* 0x600 */ f32 color[8][4];
    /* 0x680 */ u8 unk680[0x80];
    /* 0x700 */ u8 lightCount;
    /* 0x701 */ u8 unk701[0x7];
};

extern "C" {
void FUN_0019cb50(f32 *destination, const f32 *matrix, const f32 *source);
f32 FUN_001b63b0(f32 angle);

/* Rows of a 3x4 matrix applied to a point, and to a direction (no translation). */
static __inline f32 transformX(const f32 *m, f32 x, f32 y, f32 z)
{
    return m[3] + m[0] * x + (m[1] * y + m[2] * z);
}

static __inline f32 transformY(const f32 *m, f32 x, f32 y, f32 z)
{
    return m[7] + m[4] * x + (m[5] * y + m[6] * z);
}

static __inline f32 transformZ(const f32 *m, f32 x, f32 y, f32 z)
{
    return m[11] + m[8] * x + (m[9] * y + m[10] * z);
}

static __inline f32 rotateX(const f32 *m, f32 x, f32 y, f32 z)
{
    return m[0] * x + m[1] * y + m[2] * z;
}

static __inline f32 rotateY(const f32 *m, f32 x, f32 y, f32 z)
{
    return m[4] * x + m[5] * y + m[6] * z;
}

static __inline f32 rotateZ(const f32 *m, f32 x, f32 y, f32 z)
{
    return m[8] * x + m[9] * y + m[10] * z;
}

/* Fills the shader light tables for both view matrices: transformed positions and directions,
   the light colors and the spot-cone terms, then refreshes the secondary pair when enabled. */
void FUN_00187230(u8 *state, const f32 *viewA, const f32 *viewB)
{
    ShaderLightState *lights = reinterpret_cast<ShaderLightState *>(state);
    s32 i = 0;
    if (lights->lightCount > 0) {
        do {
            ShaderLight *light = &lights->lights[i];
            if (light->type != 5) {
                f32 px = light->position[0];
                f32 py = light->position[1];
                f32 pz = light->position[2];
                lights->positionA[i][0] = transformX(viewA, px, py, pz);
                lights->positionA[i][1] = transformY(viewA, px, py, pz);
                lights->positionA[i][2] = transformZ(viewA, px, py, pz);
                px = light->position[0];
                py = light->position[1];
                pz = light->position[2];
                lights->positionB[i][0] = transformX(viewB, px, py, pz);
                lights->positionB[i][1] = transformY(viewB, px, py, pz);
                lights->positionB[i][2] = transformZ(viewB, px, py, pz);
                lights->positionA[i][3] = 1.0f;
                lights->positionB[i][3] = 1.0f;
            } else {
                f32 dx = light->direction[0];
                f32 dy = light->direction[1];
                f32 dz = light->direction[2];
                lights->positionA[i][0] = -(viewA[0] * dx) - viewA[1] * dy - viewA[2] * dz;
                lights->positionA[i][1] = -(viewA[4] * dx) - viewA[5] * dy - viewA[6] * dz;
                lights->positionA[i][2] = -(viewA[8] * dx) - viewA[9] * dy - viewA[10] * dz;
                dx = light->direction[0];
                dy = light->direction[1];
                dz = light->direction[2];
                lights->positionB[i][0] = -(viewB[0] * dx) - viewB[1] * dy - viewB[2] * dz;
                lights->positionB[i][1] = -(viewB[4] * dx) - viewB[5] * dy - viewB[6] * dz;
                lights->positionB[i][2] = -(viewB[8] * dx) - viewB[9] * dy - viewB[10] * dz;
                lights->positionA[i][3] = 0.0f;
                lights->positionB[i][3] = 0.0f;
            }
            f32 dx = light->direction[0];
            f32 dy = light->direction[1];
            f32 dz = light->direction[2];
            lights->directionA[i][0] = rotateX(viewA, dx, dy, dz);
            lights->directionA[i][1] = rotateY(viewA, dx, dy, dz);
            lights->directionA[i][2] = rotateZ(viewA, dx, dy, dz);
            dx = light->direction[0];
            dy = light->direction[1];
            dz = light->direction[2];
            lights->directionB[i][0] = rotateX(viewB, dx, dy, dz);
            lights->directionB[i][1] = rotateY(viewB, dx, dy, dz);
            lights->directionB[i][2] = rotateZ(viewB, dx, dy, dz);
            lights->directionA[i][3] = light->type == 7 ? 1.0f : 0.0f;
            lights->directionB[i][3] = light->type == 7 ? 1.0f : 0.0f;
            lights->color[i][0] = light->color[0];
            lights->color[i][1] = light->color[1];
            lights->color[i][2] = light->color[2];
            lights->color[i][3] = (light->flags & 2) != 0 ? 1.0f : 0.0f;
            f32 angle = light->coneAngle;
            if (angle > 0.0f && angle < 3.1415927f) {
                f32 term = FUN_001b63b0(angle * (256.0f / 6.2831855f));
                lights->cone[i][0] = light->intensity;
                lights->cone[i][1] = term;
                lights->cone[i][2] = 0.0f;
                lights->cone[i][3] = 1.0f;
            } else {
                lights->cone[i][0] = light->intensity;
                if (angle == 0.0f) {
                    lights->cone[i][1] = 1.0000005f;
                    lights->cone[i][2] = 0.0f;
                    lights->cone[i][3] = 1.0f;
                } else {
                    lights->cone[i][1] = angle;
                    lights->cone[i][2] = 0.0f;
                    lights->cone[i][3] = 0.0f;
                }
            }
            i++;
        } while (i < lights->lightCount);
    }
    if (state[0x6a9] != 0) {
        FUN_0019cb50(reinterpret_cast<f32 *>(state + 0x6e0), viewA, reinterpret_cast<f32 *>(state + 0x6d0));
        FUN_0019cb50(reinterpret_cast<f32 *>(state + 0x6f0), viewB, reinterpret_cast<f32 *>(state + 0x6d0));
        *reinterpret_cast<u32 *>(state + 0x6ec) = *reinterpret_cast<u32 *>(state + 0x6dc);
        *reinterpret_cast<u32 *>(state + 0x6fc) = *reinterpret_cast<u32 *>(state + 0x6dc);
    }
}
}

/* NON_MATCHING: register allocation/scheduling differs (retail builds the position vector through VFP registers and allocates the command-buffer cursor/pointers differently). */
#include "shard/W6_W6Match8_LightUniforms.h"
#include <stddef.h>

/* The light resource fields the register upload reads. */
struct ShaderLightRegisterResource {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ s32 kind;           /* 0 = directional, 1 = point, 2 = spot */
    /* 0xBC */ f32 diffuse[4];
    /* 0xCC */ f32 specular[4];
    /* 0xDC */ u8 unkDC[0xC];
    /* 0xE8 */ f32 attenuation[4];
    /* 0xF8 */ f32 spot[4];        /* [1] = cone angle */
};

/* The light object: its resource and the matrix entries that locate and aim it. */
struct ShaderLightObject {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ShaderLightRegisterResource *resource;
    /* 0x0C */ u8 unk0C[0x8C];
    /* 0x98 */ f32 positionX;
    /* 0x9C */ u8 unk9C[0xC];
    /* 0xA8 */ f32 positionY;
    /* 0xAC */ u8 unkAC[0xC];
    /* 0xB8 */ f32 positionZ;
    /* 0xBC */ u8 unkBC[0xC0];
    /* 0x17C */ f32 direction[3];
};
typedef char ShaderLightObjectOffsets[
    offsetof(ShaderLightObject, positionY) == 0xA8 && offsetof(ShaderLightObject, direction) == 0x17C ? 1 : -1];

extern "C" {
f32 phaseCosInterpolate(f32 phase);
void nw_gfx_RenderContext_TransformToViewCoordinate(ShaderLightContext *context, f32 *vector,
                                                    const ShaderLightMatrix *matrix);
}

/* Writes one light's registers (colors, position, attenuation, spot cone) into the command buffer. */
extern "C" void FUN_0015a8b4(ShaderLightContext *context, s32 index, ShaderLightObject *light)
{
    ShaderLightFeatures *features = context->node->features;
    if (features->registerCount <= index)
        return;
    const ShaderLightMatrix *camera = &context->camera->matrix;
    ShaderLightRegisterResource *resource = light->resource;
    s32 base = features->registerBase - index * 6;
    shaderLightEmitVector(base + 0x13, resource->diffuse);
    shaderLightEmitVector(base + 0x14, resource->specular);
    f32 last[4];
    s32 lastRegister;
    const f32 *lastVector;
    if (resource->kind != 0) {
        f32 position[4];
        position[0] = light->positionX;
        position[1] = light->positionY;
        position[2] = light->positionZ;
        position[3] = 1.0f;
        nw_gfx_RenderContext_TransformToViewCoordinate(context, position, camera);
        shaderLightEmitVector(base + 0x15, position);
        shaderLightEmitVector(base + 0x17, resource->attenuation);
        if (resource->kind == 2) {
            ShaderLightVector4 direction(light->direction[0], light->direction[1], light->direction[2], 0.0f);
            nw_gfx_RenderContext_TransformToViewCoordinate(context, &direction.x, camera);
            last[0] = resource->spot[0];
            last[1] = resource->spot[1];
            last[2] = 0.0f;
            last[3] = 0.0f;
            f32 angle = resource->spot[1];
            if (angle > 0.0f && angle < 3.1415927f) {
                last[1] = phaseCosInterpolate(angle * 40.743664f);
                direction.w = 1.0f;
            } else if (angle == 0.0f) {
                last[1] = 1.00001f;
                direction.w = 1.0f;
            } else {
                direction.w = 0.0f;
            }
            shaderLightEmitVector(base + 0x16, &direction.x);
            lastRegister = base + 0x18;
            lastVector = last;
        } else {
            static ShaderLightVector4 noDirection(0.0f, 0.0f, 0.0f, 0.0f);
            lastRegister = base + 0x16;
            lastVector = &noDirection.x;
        }
    } else {
        ShaderLightVector4 direction(light->direction[0], light->direction[1], light->direction[2], 0.0f);
        nw_gfx_RenderContext_TransformToViewCoordinate(context, &direction.x, camera);
        last[0] = -direction.x;
        last[1] = -direction.y;
        last[2] = -direction.z;
        last[3] = -direction.w;
        lastRegister = base + 0x15;
        lastVector = last;
    }
    shaderLightEmitVector(lastRegister, lastVector);
}

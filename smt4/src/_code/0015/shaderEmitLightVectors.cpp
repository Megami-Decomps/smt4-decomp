/* NON_MATCHING: feature checks are BICS now (member hasFlags); remaining: Y/Z VFP registers are swapped, the direction components are one vldmia instead of three scalar loads, and the final uniform-header store (stm + add vs stmia!) and pool ordering differ. */
#include "shard/W6_W6Match8_LightUniforms.h"

extern "C" void shaderEmitLightVectors(ShaderLightContext *context)
{
    ShaderLightSource *light = context->light;
    if (light != NULL && context->node->features->hasFlags(4)) {
        ShaderLightResource *resource = light->resource;
        shaderLightEmitVector(0x16, resource->first);
        shaderLightEmitVector(0x17, resource->second);
        f32 x = resource->direction.x;
        f32 y = resource->direction.y;
        f32 z = resource->direction.z;
        if (resource->hasFlags(2) && light->hasTransform) {
            const ShaderLightMatrix *matrix = light->getMatrix();
            f32 directionX = resource->direction.x;
            f32 directionY = resource->direction.y;
            f32 directionZ = resource->direction.z;
            x = matrix->rows[0][0] * directionX + matrix->rows[0][1] * directionY + matrix->rows[0][2] * directionZ;
            y = matrix->rows[1][0] * directionX + matrix->rows[1][1] * directionY + matrix->rows[1][2] * directionZ;
            z = matrix->rows[2][0] * directionX + matrix->rows[2][1] * directionY + matrix->rows[2][2] * directionZ;
        }
        const ShaderLightMatrix *camera = &context->camera->matrix;
        ShaderLightVector4 direction(
            camera->rows[0][0] * x + camera->rows[0][1] * y + camera->rows[0][2] * z,
            camera->rows[1][0] * x + camera->rows[1][1] * y + camera->rows[1][2] * z,
            camera->rows[2][0] * x + camera->rows[2][1] * y + camera->rows[2][2] * z,
            resource->direction.w
        );
        shaderLightEmitVector(0x18, &direction.x);
    }
}

/* NON_MATCHING: VFP expression and negation order, output base and saved registers differ. */
#include "gfx/ShaderUniformUploads.h"
#include "shard/W6_W6Match8_LightUniforms.h"
#include "status/StatusCamera.h"
struct PackedLightSource {
    u8 unk00[0x1C];
    Vec3 position;
    u8 kind;
    s8 enabled;
    u8 unk2A[0x16];
    Vec3 direction;
};
struct PackedLightUniform {
    u8 unk00[0x10];
    u32 positionXY;
    u32 positionZ;
    u8 directional;
    u8 unk19[0xB];
    u32 directionXY;
    u32 directionZ;
};
typedef char PackedLightUniformOffsets[(sizeof(PackedLightUniform) == 0x2C && offsetof(PackedLightSource, direction) == 0x40 && offsetof(PackedLightUniform, directionXY) == 0x24) ? 1 : -1];
extern "C" {
u32 FUN_001a06d4(f32 value);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(f32 *out, const f32 (*matrix)[4], const f32 *position);
}
static inline Vec3 inverseLightDirection(const PackedLightSource *source, const ShaderLightMatrix *matrix)
{
    Vec3 result = {
        -(matrix->rows[0][0] * source->direction.x + matrix->rows[0][1] * source->direction.y + matrix->rows[0][2] * source->direction.z),
        -(matrix->rows[1][0] * source->direction.x + matrix->rows[1][1] * source->direction.y + matrix->rows[1][2] * source->direction.z),
        -(matrix->rows[2][0] * source->direction.x + matrix->rows[2][1] * source->direction.y + matrix->rows[2][2] * source->direction.z)
    };
    return result;
}
extern "C" void FUN_00193ee0(const PackedLightSource *source, ShaderUniformRecord **records, u32 handle, s32 index, const ShaderLightMatrix *matrix)
{
    ShaderUniformRecord *record = &(*records)[static_cast<u16>(handle)];
    if (!source->enabled)
        return;
    PackedLightUniform *uniform = reinterpret_cast<PackedLightUniform *>(record->unk000 + 8) + index;
    if (source->kind == 11) {
        Vec3 direction = inverseLightDirection(source, matrix);
        u32 x = FUN_001a06d4(direction.x);
        u32 y = FUN_001a06d4(direction.y);
        uniform->directionXY = x | (y << 16);
        uniform->directionZ = FUN_001a06d4(direction.z);
    }
    if (source->kind == 9) {
        Vec3 direction = inverseLightDirection(source, matrix);
        u32 x = FUN_001a0538(direction.x);
        u32 y = FUN_001a0538(direction.y);
        uniform->positionXY = x | (y << 16);
        uniform->positionZ = FUN_001a0538(direction.z);
        uniform->directional = 1;
    } else {
        Vec3 position;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&position.x, matrix->rows, &source->position.x);
        u32 x = FUN_001a0538(position.x);
        u32 y = FUN_001a0538(position.y);
        uniform->positionXY = x | (y << 16);
        uniform->positionZ = FUN_001a0538(position.z);
        uniform->directional = 0;
    }
}

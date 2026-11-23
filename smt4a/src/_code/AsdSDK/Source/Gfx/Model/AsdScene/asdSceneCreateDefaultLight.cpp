/* NON_MATCHING: the direction is the normalized (-1, -2, -1) (armcc folds VEC3Normalize; with it the literal pool is
 * retail's); retail keeps y in s0 and stores x alone, then y and z with one vstmia, where the build pairs x and y. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Model/AsdScene.h"
#include "nw/math/VEC3.h"

struct SceneLightColor {
    f32 r, g, b, a;
};

struct SceneLightData {
    /* 0x000 */ u8 unk000[0xb8];
    /* 0x0b8 */ u32 kind;
    /* 0x0bc */ SceneLightColor ambient;
    /* 0x0cc */ SceneLightColor diffuse;
    /* 0x0dc */ SceneLightColor specular0;
    /* 0x0ec */ SceneLightColor specular1;
    /* 0x0fc */ u32 packedAmbient;
    /* 0x100 */ u32 packedDiffuse;
    /* 0x104 */ u32 packedSpecular0;
    /* 0x108 */ u32 packedSpecular1;
    /* 0x10c */ f32 direction[3];
};

struct SceneLightObject {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ SceneLightData *data;
};

struct SceneLight {
    /* 0x00 */ s32 index;
    /* 0x04 */ SceneLightObject *object;
    /* 0x08 */ SceneLightData *data;
};

struct SceneLightDescription {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 flags;
    /* 0x08 */ u32 mode;
    /* 0x0c */ u32 count;
};

static __inline void setLightGray(SceneLightColor *color, f32 intensity)
{
    color->r = intensity;
    color->g = intensity;
    color->b = intensity;
    color->a = 1.0f;
}

static __inline void setLightDirection(SceneLightData *data, f32 x, f32 y, f32 z)
{
    data->direction[0] = x;
    data->direction[1] = y;
    data->direction[2] = z;
}

extern "C" {
void *asdMemoryAlloc(s32 heap, s32 alignment, s32 flags, u32 size, s32 clear);
SceneLightObject *_ZN9Obj55b5a86createEPvP18AsdAllocatorObject(SceneLightDescription *, void *allocator);
u32 nw_ut_FloatColor_ToPicaU32(const SceneLightColor *);

// Create a neutral directional scene light with packed hardware colors.
SceneLight *asdSceneCreateDefaultLight(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdScene.cpp", 0x4bf);
    SceneLight *light = static_cast<SceneLight *>(asdMemoryAlloc(0x100, 0x100, 0, sizeof(SceneLight), 1));
    light->object = NULL;
    light->data = NULL;
    light->index = -1;
    void *allocator = asdMemoryGetDefaultAllocator();
    SceneLightDescription description;
    description.enabled = 1;
    description.unk01 = 1;
    description.flags = 0;
    description.mode = 0;
    description.count = 1;
    light->object = _ZN9Obj55b5a86createEPvP18AsdAllocatorObject(&description, allocator);
    light->data = light->object->data;
    light->data->kind = 0;
    nw::math::VEC3 direction;
    direction.x = -1.0f;
    direction.y = -2.0f;
    direction.z = -1.0f;
    nw::math::VEC3Normalize(&direction, &direction);
    setLightDirection(light->data, direction.x, direction.y, direction.z);
    setLightGray(&light->data->ambient, 0.2f);
    light->data->packedAmbient = nw_ut_FloatColor_ToPicaU32(&light->data->ambient);
    setLightGray(&light->data->diffuse, 1.0f);
    light->data->packedDiffuse = nw_ut_FloatColor_ToPicaU32(&light->data->diffuse);
    setLightGray(&light->data->specular0, 0.8f);
    light->data->packedSpecular0 = nw_ut_FloatColor_ToPicaU32(&light->data->specular0);
    setLightGray(&light->data->specular1, 0.8f);
    light->data->packedSpecular1 = nw_ut_FloatColor_ToPicaU32(&light->data->specular1);
    return light;
}
}

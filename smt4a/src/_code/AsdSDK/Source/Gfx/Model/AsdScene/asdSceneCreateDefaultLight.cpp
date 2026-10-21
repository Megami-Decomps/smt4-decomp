/* NON_MATCHING: initialization merges the index/object stores and pairs the first two direction components instead of retail's final two components. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

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
void *asdMemoryGetDefaultAllocator(void);
SceneLightObject *FUN_00171d7c(SceneLightDescription *, void *allocator);
u32 FUN_001931d8(const SceneLightColor *);

// Create a neutral directional scene light with packed hardware colors.
SceneLight *asdSceneCreateDefaultLight(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdScene.cpp", 0x4bf);
    SceneLight *light = static_cast<SceneLight *>(asdMemoryAlloc(0x100, 0x100, 0, sizeof(SceneLight), 1));
    light->object = NULL;
    light->index = -1;
    light->data = NULL;
    void *allocator = asdMemoryGetDefaultAllocator();
    SceneLightDescription description;
    description.enabled = 1;
    description.unk01 = 1;
    description.flags = 0;
    description.mode = 0;
    description.count = 1;
    light->object = FUN_00171d7c(&description, allocator);
    light->data = light->object->data;
    light->data->kind = 0;
    setLightDirection(light->data, -0.40824827551841736f, -0.8164965510368347f,
                      -0.40824827551841736f);
    setLightGray(&light->data->ambient, 0.2f);
    light->data->packedAmbient = FUN_001931d8(&light->data->ambient);
    setLightGray(&light->data->diffuse, 1.0f);
    light->data->packedDiffuse = FUN_001931d8(&light->data->diffuse);
    setLightGray(&light->data->specular0, 0.8f);
    light->data->packedSpecular0 = FUN_001931d8(&light->data->specular0);
    setLightGray(&light->data->specular1, 0.8f);
    light->data->packedSpecular1 = FUN_001931d8(&light->data->specular1);
    return light;
}
}

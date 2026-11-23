/* NON_MATCHING: the direction is the normalized (-1, -2, -1) (armcc folds VEC3Normalize; with it the literal pool is
 * retail's); retail keeps y in s0 and stores direction[0] alone, then [1] and [2] with one vstmia, where the build
 * pairs [0] and [1]. */
#include "AsdSDK/Source/Gfx/Model/AsdSceneLight.h"
#include "AsdSDK/AsdDebug.h"
#include "nw/math/VEC3.h"
#include "AsdSDK/asdMemoryGetDefaultAllocator.h"

extern "C" {
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 clear);
AsdSceneLightObject *_ZN9Obj4211586createEPvP18AsdAllocatorObject(const AsdSceneLightDescription *description, AsdAllocatorObject *allocator);
u32 nw_ut_FloatColor_ToPicaU32(const f32 *color);

// Create a single enabled scene light with the standard four colors and normalized direction.
AsdSceneLight *FUN_00118d50()
{
    // The native parameter object extends beyond the currently recovered shared prefix.
    struct LightColorView {
        u8 prefix[0xB8];
        u32 kind;
        f32 ambient[4];
        f32 diffuse[4];
        f32 specular0[4];
        f32 specular1[4];
        u32 packedColors[4];
        f32 direction[3];
    };
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdScene.cpp", 1215);
    AsdSceneLight *light = static_cast<AsdSceneLight *>(asdMemoryAlloc(0x100, 0x100, 0, sizeof(AsdSceneLight), 1));
    light->object = NULL;
    light->parameters = NULL;
    light->id = -1;
    AsdAllocatorObject *allocator = reinterpret_cast<AsdAllocatorObject *>(asdMemoryGetDefaultAllocator());
    AsdSceneLightDescription description;
    description.enabled = 1;
    description.updateEnabled = 1;
    description.unk04 = 0;
    description.unk08 = 0;
    description.count = 1;
    light->object = _ZN9Obj4211586createEPvP18AsdAllocatorObject(&description, allocator);
    light->parameters = light->object->parameters;
    reinterpret_cast<LightColorView *>(light->parameters)->kind = 0;
    LightColorView *parameters = reinterpret_cast<LightColorView *>(light->parameters);
    nw::math::VEC3 direction;
    direction.x = -1.0f;
    direction.y = -2.0f;
    direction.z = -1.0f;
    nw::math::VEC3Normalize(&direction, &direction);
    asdSceneLightSetVector(parameters->direction, direction.x, direction.y, direction.z);
    asdSceneLightSetGray(reinterpret_cast<LightColorView *>(light->parameters)->ambient, 0.2f);
    reinterpret_cast<LightColorView *>(light->parameters)->packedColors[0] =
        nw_ut_FloatColor_ToPicaU32(reinterpret_cast<LightColorView *>(light->parameters)->ambient);
    asdSceneLightSetGray(reinterpret_cast<LightColorView *>(light->parameters)->diffuse, 1.0f);
    reinterpret_cast<LightColorView *>(light->parameters)->packedColors[1] =
        nw_ut_FloatColor_ToPicaU32(reinterpret_cast<LightColorView *>(light->parameters)->diffuse);
    asdSceneLightSetGray(reinterpret_cast<LightColorView *>(light->parameters)->specular0, 0.8f);
    reinterpret_cast<LightColorView *>(light->parameters)->packedColors[2] =
        nw_ut_FloatColor_ToPicaU32(reinterpret_cast<LightColorView *>(light->parameters)->specular0);
    asdSceneLightSetGray(reinterpret_cast<LightColorView *>(light->parameters)->specular1, 0.8f);
    reinterpret_cast<LightColorView *>(light->parameters)->packedColors[3] =
        nw_ut_FloatColor_ToPicaU32(reinterpret_cast<LightColorView *>(light->parameters)->specular1);
    return light;
}
}

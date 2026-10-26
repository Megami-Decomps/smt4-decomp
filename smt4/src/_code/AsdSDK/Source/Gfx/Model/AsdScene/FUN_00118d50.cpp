/* NON_MATCHING: the light's three header stores merge into stm where retail walks the pointer (str/str!/str), the direction pair and the last color's blue/alpha pair are not merged into vstmia, and two VFP constants load in the other order. */
#include "AsdSDK/Source/Gfx/Model/AsdSceneLight.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/asdMemoryGetDefaultAllocator.h"

extern "C" {
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 clear);
AsdSceneLightObject *_ZN9Obj4211586createEPvP18AsdAllocatorObject(const AsdSceneLightDescription *description, AsdAllocatorObject *allocator);
u32 nw_ut_FloatColor_ToPicaU32(const f32 *color);

/* Stores the four channels of a float color. */
static __inline void lightColorSet(f32 *color, f32 red, f32 green, f32 blue, f32 alpha)
{
    color[0] = red;
    color[1] = green;
    color[2] = blue;
    color[3] = alpha;
}

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
    light->id = -1;
    light->parameters = NULL;
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
    parameters->direction[0] = -0.40824828f;
    parameters->direction[1] = -0.81649655f;
    parameters->direction[2] = -0.40824828f;
    lightColorSet(reinterpret_cast<LightColorView *>(light->parameters)->ambient, 0.2f, 0.2f, 0.2f, 1.0f);
    reinterpret_cast<LightColorView *>(light->parameters)->packedColors[0] =
        nw_ut_FloatColor_ToPicaU32(reinterpret_cast<LightColorView *>(light->parameters)->ambient);
    lightColorSet(reinterpret_cast<LightColorView *>(light->parameters)->diffuse, 1.0f, 1.0f, 1.0f, 1.0f);
    reinterpret_cast<LightColorView *>(light->parameters)->packedColors[1] =
        nw_ut_FloatColor_ToPicaU32(reinterpret_cast<LightColorView *>(light->parameters)->diffuse);
    lightColorSet(reinterpret_cast<LightColorView *>(light->parameters)->specular0, 0.8f, 0.8f, 0.8f, 1.0f);
    reinterpret_cast<LightColorView *>(light->parameters)->packedColors[2] =
        nw_ut_FloatColor_ToPicaU32(reinterpret_cast<LightColorView *>(light->parameters)->specular0);
    lightColorSet(reinterpret_cast<LightColorView *>(light->parameters)->specular1, 0.8f, 0.8f, 0.8f, 1.0f);
    reinterpret_cast<LightColorView *>(light->parameters)->packedColors[3] =
        nw_ut_FloatColor_ToPicaU32(reinterpret_cast<LightColorView *>(light->parameters)->specular1);
    return light;
}
}

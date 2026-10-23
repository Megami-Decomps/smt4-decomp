/* NON_MATCHING: description stores, VFP constant lifetimes and vector initialization scheduling differ. */
#include "AsdSDK/Source/Gfx/Model/AsdSceneLight.h"
#include "AsdSDK/AsdDebug.h"
extern "C" {
void *asdMemoryAlloc(u32 alignment, u32 pool, u32 flags, u32 size, u32 count);
AsdAllocatorObject *asdMemoryGetDefaultAllocator(void);
AsdSceneLightObject *FUN_00171acc(const AsdSceneLightDescription *description, AsdAllocatorObject *allocator);

// Create the default point light used by a newly initialized scene.
AsdSceneLight *FUN_00151c18(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdScene.cpp", 976);
    AsdSceneLight *light = (AsdSceneLight *)asdMemoryAlloc(256, 256, 0, sizeof(AsdSceneLight), 1);
    light->object = NULL;
    light->id = -1;
    light->parameters = NULL;
    AsdAllocatorObject *allocator = asdMemoryGetDefaultAllocator();
    AsdSceneLightDescription description;
    description.enabled = 1;
    description.updateEnabled = 1;
    description.unk04 = 0;
    description.unk08 = 0;
    description.count = 1;
    light->object = FUN_00171acc(&description, allocator);
    light->parameters = light->object->parameters;
    light->parameters->kind = 2;
    f32 *position = light->parameters->position;
    position[2] = 5.0f;
    position[0] = 0.0f;
    position[1] = 15.0f;
    f32 *ambient = light->parameters->ambient;
    ambient[0] = 0.2f;
    ambient[1] = 0.2f;
    ambient[2] = 0.2f;
    ambient[3] = 1.0f;
    f32 *diffuse = light->parameters->diffuse;
    diffuse[0] = 1.0f;
    diffuse[1] = 1.0f;
    diffuse[2] = 1.0f;
    diffuse[3] = 1.0f;
    f32 *attenuation = light->parameters->attenuation;
    attenuation[0] = 0.01f;
    attenuation[1] = 0.001f;
    attenuation[2] = 0.0001f;
    light->parameters->intensity = 1.0f;
    f32 *cutoff = light->parameters->cutoff;
    cutoff[0] = 1.0f;
    cutoff[1] = 1.5707964f;
    f32 *direction = light->parameters->direction;
    direction[0] = 0.0f;
    direction[1] = 0.0f;
    direction[2] = -1.0f;
    return light;
}
}

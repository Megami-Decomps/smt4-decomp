/* NON_MATCHING: initializer stores, VFP constant scheduling and light-parameter groups use different registers. */
#include "AsdSDK/Source/Gfx/Model/AsdSceneLight.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/asdMemoryGetDefaultAllocator.h"

extern "C" {
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
AsdSceneLightObject *_ZN9Obj4210586createEPvP18AsdAllocatorObject(const AsdSceneLightDescription *, AsdAllocatorObject *);

// Allocate a point light with default color, position, attenuation and cone parameters.
AsdSceneLight *FUN_0011877c(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdScene.cpp", 976);
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
    light->object = _ZN9Obj4210586createEPvP18AsdAllocatorObject(&description, allocator);
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
    cutoff[1] = 1.57079637f;
    f32 *direction = light->parameters->direction;
    direction[0] = 0.0f;
    direction[1] = 0.0f;
    direction[2] = -1.0f;
    return light;
}
}

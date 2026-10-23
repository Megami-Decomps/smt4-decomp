/* NON_MATCHING: description/VFP store grouping and resource-bank indexing differ. */
#include "AsdSDK/Source/Gfx/Model/AsdSceneLight.h"
#include "AsdSDK/AsdSceneFog.h"
#include "AsdSDK/AsdDebug.h"

struct SceneLight;
extern "C" {
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
AsdAllocatorObject *asdMemoryGetDefaultAllocator();
AsdSceneLightObject *FUN_0015add8(const AsdSceneLightDescription *, AsdAllocatorObject *);
AsdSceneLightObject *FUN_0015d35c(const AsdSceneLightDescription *, AsdAllocatorObject *);
u32 FUN_001931d8(const f32 *);
AsdSceneLight *FUN_00151c18();
SceneLight *asdSceneCreateDefaultLight();
extern AsdSceneFogRegistry DAT_005b3cd8;
extern const char DAT_0053d1e4[];

/* Populate each scene's ambient, hemispheric, point and directional default lights. */
void FUN_001445d4()
{
    struct AmbientParameters {
        u8 unk00[0xB8];
        f32 color[4];
        u32 packedColor;
    };
    struct HemisphereParameters {
        u8 unk00[0xB8];
        f32 ambient[4], diffuse[4], direction[3], intensity;
    };
    struct DefaultLights {
        AsdSceneLight *ambient[2], *hemisphere[2], *point[2];
        SceneLight *directional[2];
    };
    typedef char ParameterOffsets[
        offsetof(AmbientParameters, color) == 0xB8 &&
        offsetof(AmbientParameters, packedColor) == 0xC8 &&
        offsetof(HemisphereParameters, diffuse) == 0xC8 &&
        offsetof(HemisphereParameters, direction) == 0xD8 &&
        offsetof(HemisphereParameters, intensity) == 0xE4 &&
        sizeof(DefaultLights) == 0x20 ? 1 : -1];
    for (s32 index = 0; index < 2; ++index) {
        asdDebugTrace(DAT_0053d1e4, 688);
        AsdSceneLight *ambient = (AsdSceneLight *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(AsdSceneLight), 1);
        ambient->object = NULL;
        ambient->parameters = NULL;
        ambient->id = -1;
        AsdAllocatorObject *allocator = asdMemoryGetDefaultAllocator();
        AsdSceneLightDescription description;
        description.enabled = 1;
        description.updateEnabled = 1;
        description.unk04 = 0;
        description.unk08 = 0;
        description.count = 1;
        ambient->object = FUN_0015add8(&description, allocator);
        ambient->parameters = ambient->object->parameters;
        f32 *color = ((AmbientParameters *)ambient->parameters)->color;
        color[0] = 0.2f;
        color[1] = 0.2f;
        color[2] = 0.2f;
        color[3] = 1.0f;
        ((AmbientParameters *)ambient->parameters)->packedColor =
            FUN_001931d8(((AmbientParameters *)ambient->parameters)->color);
        ((DefaultLights *)DAT_005b3cd8.unk00)->ambient[index] = ambient;

        asdDebugTrace(DAT_0053d1e4, 801);
        AsdSceneLight *hemisphere = (AsdSceneLight *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(AsdSceneLight), 1);
        hemisphere->object = NULL;
        hemisphere->parameters = NULL;
        hemisphere->id = -1;
        allocator = asdMemoryGetDefaultAllocator();
        description.enabled = 1;
        description.updateEnabled = 1;
        description.unk04 = 0;
        description.unk08 = 0;
        description.count = 1;
        hemisphere->object = FUN_0015d35c(&description, allocator);
        hemisphere->parameters = hemisphere->object->parameters;
        f32 *diffuse = ((HemisphereParameters *)hemisphere->parameters)->diffuse;
        diffuse[0] = 0.9f;
        diffuse[1] = 0.9f;
        diffuse[2] = 1.0f;
        diffuse[3] = 1.0f;
        f32 *sky = ((HemisphereParameters *)hemisphere->parameters)->ambient;
        sky[0] = 0.1f;
        sky[1] = 0.0f;
        sky[2] = 0.0f;
        sky[3] = 1.0f;
        f32 *direction = ((HemisphereParameters *)hemisphere->parameters)->direction;
        direction[0] = 0.0f;
        direction[1] = 1.0f;
        direction[2] = 0.0f;
        ((HemisphereParameters *)hemisphere->parameters)->intensity = 0.5f;
        ((DefaultLights *)DAT_005b3cd8.unk00)->hemisphere[index] = hemisphere;
        ((DefaultLights *)DAT_005b3cd8.unk00)->point[index] = FUN_00151c18();
        ((DefaultLights *)DAT_005b3cd8.unk00)->directional[index] = asdSceneCreateDefaultLight();
    }
}
}

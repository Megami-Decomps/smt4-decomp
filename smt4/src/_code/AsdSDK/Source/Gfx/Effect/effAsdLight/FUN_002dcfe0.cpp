#include "AsdSDK/Source/Gfx/Effect/effAsdLight.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>
#include "gfx/LightRegistry.h"
#include "AsdSDK/AsdMemUtil.h"

static void quaternionSetIdentity(EffLightVec4 *quaternion)
{
    memset(quaternion, 0, sizeof(*quaternion));
    quaternion->w = 1.0f;
}

struct AsdAmbientLight;
struct AsdModelGroupLink;

extern "C" {
extern const char DAT_004101c0[];
extern void* DAT_00464b7c[2];
extern void* g_asdModelTransformBuilder[2];
void* memAlloc(u32 heap, u32 alignClass, u32 flags, u32 size, u32 alignment, u32 fromFront);
void* rt_memcpy(void* destination, const void* source, u32 size);
const void* resourceResolveHeaderPointer(const void* resource);
AsdAmbientLight* FUN_002cb80c(void);
void FUN_002e113c(AsdModelGroupLink* light, s32 group);

EffAsdLight* FUN_002dcfe0(const EffAsdLightDesc* resource)
{
    // The IV allocation ends at 0x110; the shared light header also covers Apocalypse's tail.
    struct LightParameters {
        u8 unk00[0x94];
        s32 kind;
        AsdAmbientLight* ambient;
        u8 unk9C[0x18];
    };
    struct LightWork {
        EffLightVec4 rotation0;
        EffLightVec4 rotation1;
        f32 scale;
        s32 group;
        u32 kind;
        u32 unk2C;
        LightParameters parameters;
        u8 unkE4[0x28];
        AsdAmbientLight* ownedAmbient;
    };
    typedef char LightWorkSizeCheck[sizeof(LightWork) == 0x110 ? 1 : -1];
    asdDebugTrace(DAT_004101c0, 34);
    LightWork* light = static_cast<LightWork*>(
        memAlloc(0x10000, 0x100, 0, sizeof(LightWork), 0x10, 1));
    reinterpret_cast<int>(memClear(light, sizeof(LightWork)));
    quaternionSetIdentity(&light->rotation0);
    quaternionSetIdentity(&light->rotation1);
    light->group = -1;
    light->scale = 1.0f;
    if (!resource) {
        return reinterpret_cast<EffAsdLight*>(light);
    }
    light->kind = resource->kind;
    rt_memcpy(&light->parameters, resourceResolveHeaderPointer(resource), sizeof(LightParameters));
    const LightParameters* parameters = &light->parameters;
    if (parameters->kind == 1 && !parameters->ambient) {
        AsdAmbientLight* ambient = FUN_002cb80c();
        FUN_002e113c(reinterpret_cast<AsdModelGroupLink*>(ambient), 0);
        light->ownedAmbient = ambient;
    }
    sceneTraverserVisit(DAT_00464b7c[0], g_asdModelTransformBuilder[0]);
    return reinterpret_cast<EffAsdLight*>(light);
}
}

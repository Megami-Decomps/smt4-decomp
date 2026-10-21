#include "shard/W6_W6Match2_LightPair.h"

extern "C" {
extern LightObjectPair sceneGroup1Root;
extern LightObjectPair sceneGroup2Root;
void FUN_002a2dc8(u32 light);

// Select the requested object pair, activating its light when required.
u32 asdLightSelectActive(s32 kind)
{
    u32 object;
    switch (kind) {
    case 1:
        object = sceneGroup1Root.first;
        break;
    case 2:
        object = sceneGroup2Root.first;
        FUN_002a2dc8(0);
        break;
    case 4:
        object = sceneGroup1Root.second;
        break;
    case 5:
        object = sceneGroup2Root.second;
        FUN_002a2dc8(1);
        break;
    default:
        return 0;
    }
    return object;
}
}

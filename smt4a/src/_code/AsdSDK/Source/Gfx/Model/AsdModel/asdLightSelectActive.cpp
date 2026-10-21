#include "shard/W6_W6Match2_LightPair.h"

extern "C" {
extern LightObjectPair DAT_005b3c90;
extern LightObjectPair DAT_005b3c98;
void asdLightActivate(u32 light);

// Select the requested object pair, activating its light when required.
u32 asdLightSelectActive(s32 kind)
{
    u32 object;
    switch (kind) {
    case 1:
        object = DAT_005b3c90.first;
        break;
    case 2:
        object = DAT_005b3c98.first;
        asdLightActivate(0);
        break;
    case 4:
        object = DAT_005b3c90.second;
        break;
    case 5:
        object = DAT_005b3c98.second;
        asdLightActivate(1);
        break;
    default:
        return 0;
    }
    return object;
}
}

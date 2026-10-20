#include "shard/Shard0034.h"

extern "C" {

extern Obj80Ref g_asdCamera;

u32 obj80Select(s32 which)
{
    if (which == 0) {
        return g_asdCamera.instance->unk80;
    }
    return g_asdCamera.instance->unk84;
}

} /* extern "C" */

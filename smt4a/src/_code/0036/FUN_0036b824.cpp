#include "shard/Shard0036.h"

extern "C" {

extern Obj80Ref g_asdCamera;

void FUN_0036b824(u32 value)
{
    g_asdCamera.instance->unk80 = value;
}

} /* extern "C" */

#include "shard/Shard0034.h"

extern "C" {

extern Obj80Ref DAT_0059dbc0;

u32 obj80Select(s32 which)
{
    if (which == 0) {
        return DAT_0059dbc0.instance->unk80;
    }
    return DAT_0059dbc0.instance->unk84;
}

} /* extern "C" */

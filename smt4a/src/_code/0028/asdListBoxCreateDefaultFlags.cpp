#include "common.h"
#include "util/CalleeContracts.h"
#include "util/AsdListBoxCreateDefaultFlags.h"

extern "C" {
s32 asdListBoxCreate(u32 parent, u32 configuration, u32 items, u32 itemCount,
                     u32 flags);

s32 asdListBoxCreateDefaultFlags(u32 parent, u32 configuration, u32 items, u32 itemCount)
{
    return asdListBoxCreate(parent, configuration, items, itemCount, 0);
}
}

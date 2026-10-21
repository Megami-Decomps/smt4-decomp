/* NON_MATCHING: original C++ array constructor helper requires the still-unrecovered base class hierarchy. */
#include "common.h"
struct WorkItem { u8 data[4]; };
struct WorkOwner { u8 unk00[32]; WorkItem items[8]; };
extern "C" {
WorkOwner *FUN_0038093c(WorkOwner *owner);
void FUN_00376968(WorkItem *item);
/* Initializes the owner, then constructs its eight embedded work items. */
WorkOwner *FUN_0034068c(WorkOwner *owner)
{
    owner = FUN_0038093c(owner);
    for (u32 index = 0; index < 8; ++index)
        FUN_00376968(&owner->items[index]);
    return owner;
}
}

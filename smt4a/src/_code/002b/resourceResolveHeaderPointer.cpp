/* NON_MATCHING: registers and loads match retail; the build adds a branch-to-next `beq` after the predicated offset add. */
#include "shard/W5_W5Match2_RelativeData.h"
extern "C" {
/* Resolve either an absolute or record-relative data pointer. */
void *resourceResolveHeaderPointer(const RelativeDataB *record)
{
    u32 absolute = record->absolute;
    u32 data = record->data;
    if (absolute == 0 && data != 0) {
        data += (u32)record;
    }
    return (void *)data;
}
}

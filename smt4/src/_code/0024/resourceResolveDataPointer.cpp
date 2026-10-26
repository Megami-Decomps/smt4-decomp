/* NON_MATCHING: only a redundant conditional branch to the return (beq to the next instruction) differs; retail ends with addne then bx lr. */
#include "shard/W5_W5Match2_RelativeData.h"
extern "C" {
/* Resolve either an absolute or record-relative data pointer. */
void *resourceResolveDataPointer(const RelativeDataA *record)
{
    u32 absolute = record->absolute;
    u32 data = record->data;
    if (absolute == 0 && data != 0)
        data += (u32)record;
    return (void *)data;
}
}

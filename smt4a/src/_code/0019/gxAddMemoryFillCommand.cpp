#include "common.h"

extern "C" {

void FUN_001a2490(u32 start0, u32 end0, u32 value0, u32 control0, u32 start1, u32 end1, u32 value1, u32 control1);

/* Queues a two-buffer memory fill (the replayed type 2 command), forwarding every argument. */
void gxAddMemoryFillCommand(u32 start0, u32 end0, u32 value0, u32 control0, u32 start1, u32 end1, u32 value1, u32 control1)
{
    FUN_001a2490(start0, end0, value0, control0, start1, end1, value1, control1);
}

} /* extern "C" */

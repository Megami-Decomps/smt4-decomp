/* NON_MATCHING: compiler checks the unsigned count before the signed-negative index and changes the wide-load address register. */
#include "shard/W5_W5Match2_WideHandles.h"
extern "C" {
extern WideHandleTable DAT_005880d0;
/* Read an in-range wide handle, returning zero for an invalid index. */
u64 resourceGetWideHandle(s32 index) { if (index<0 || (u32)index>=DAT_005880d0.count) return 0; return DAT_005880d0.entries[index].handle; }
}

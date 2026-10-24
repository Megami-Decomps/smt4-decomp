#include "shard/Shard004D.h"

extern "C" {

extern void recordTrackDirtyValue(u8 *block, u32 a);
extern void scrollOwnerSetValue(u8 *block, u32 a);
extern void flaggedEntrySetValueB(u8 *block, u32 a);
extern void flaggedEntrySetValueA(u8 *block, u32 a);

void setListWindow(u8 *obj, u32 a, u32 b)
{
    if (*obj == 0) {
        scrollOwnerSetValue(obj + 0x10, a);
        flaggedEntrySetValueA(obj + 0x10, b);
    }
    if (*obj == 1) {
        recordTrackDirtyValue(obj + 0x10, a);
        flaggedEntrySetValueB(obj + 0x10, b);
    }
}

} /* extern "C" */

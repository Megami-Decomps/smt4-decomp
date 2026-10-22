#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Orders record pointers by the squared magnitude of their floating-point key. */
s32 dataCompareFloatRecordMagnitudes(const FloatSortRecord *const *left, const FloatSortRecord *const *right)
{
    f32 leftKey = (*left)->key;
    f32 rightKey = (*right)->key;
    return (s32)(leftKey * leftKey - rightKey * rightKey);
}

} /* extern "C" */

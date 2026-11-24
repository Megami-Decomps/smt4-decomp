#include "battle/BtlDebugMenuEntry.h"

/* Compares the leading byte keys of two command records. */
extern "C" s32 dataSet16CompareByteKeys(const void *left, const void *right)
{
    return ((const BtlDebugEntry *)left)->kind - ((const BtlDebugEntry *)right)->kind;
}

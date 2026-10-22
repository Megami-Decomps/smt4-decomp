#include "shard/Shard0034.h"

/* Compare two record pointers by their floating-point sort keys. */
extern "C" s32 FUN_0019d914(const FloatSortRecord *const *left,
                           const FloatSortRecord *const *right)
{
    return (s32)((*left)->key - (*right)->key);
}

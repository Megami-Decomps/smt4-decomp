/* NON_MATCHING: capacity load grouping, copy-loop registers, and final vector update scheduling differ. */
#include "classes/AllocatorWordVector.h"

// Append one copied value to an allocator-owned word vector, growing it geometrically.
extern "C" u32 FUN_0023669c(AllocatorWordVector *vector, const u32 *value)
{
    return allocatorWordVectorPush(vector, *value);
}

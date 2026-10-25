#include "common.h"

/* Compares the halfword keys used by the ID map. */
extern "C" s32 idMapCompareKeys(const void *left, const void *right)
{
    return *static_cast<const u16 *>(left) - *static_cast<const u16 *>(right);
}

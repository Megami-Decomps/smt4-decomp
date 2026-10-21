#include "common.h"

/* Compares the halfword keys used by the ID map. */
extern "C" s32 idMapCompareKeys(const u16 *left, const u16 *right)
{
    return *left - *right;
}

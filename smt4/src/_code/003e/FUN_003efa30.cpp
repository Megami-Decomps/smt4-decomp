#include "common.h"

struct Pair003efa30 {
    u32 first;
    u32 second;
};

extern "C" {

/* Stores both words. */
void FUN_003efa30(Pair003efa30 *pair, u32 first, u32 second)
{
    pair->first = first;
    pair->second = second;
}

} /* extern "C" */

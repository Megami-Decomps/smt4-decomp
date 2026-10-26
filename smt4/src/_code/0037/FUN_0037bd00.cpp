/* NON_MATCHING: mid-flow mov r0, r0 (nop) in a leaf with no lr save; not a removed call, cause unknown. */
#include "common.h"

struct Pair4 {
    u32 first;
    u32 second;
};

struct Holder4 {
    u32 unk00;
    Pair4 pair;
};

extern "C" {
void FUN_0037bd00(Holder4 *holder)
{
    Pair4 *pair = &holder->pair;
    pair->first = 0;
    pair->second = 0;
}
}

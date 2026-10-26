#include "common.h"

struct Pair4 {
    u32 unk00;
    u32 first;
    u32 second;
};

extern "C" {
u8 FUN_0034f6cc(Pair4 *pair, u32 first, u32 second)
{
    if (first != 0 && second != 0) {
        pair->first = first;
        pair->second = second;
        return 1;
    }
    return 0;
}
}

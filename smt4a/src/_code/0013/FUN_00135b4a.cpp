/* NON_MATCHING: retail uses b.n 14 where the compiled block uses cmp r0, r1. */
#include "common.h"

struct OnlineString {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};

extern "C" void onlineStringAssign(OnlineString* destination, u32 value);

extern "C" void FUN_00135b4a(OnlineString* first, OnlineString* last, u32 value)
{
    while (first != last) {
        onlineStringAssign(first, value);
        ++first;
    }
}

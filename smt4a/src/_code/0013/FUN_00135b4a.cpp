#include "common.h"

struct OnlineString {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};

extern "C" void _ZN9Obj55aff4aSERKS_(OnlineString* destination, u32 value);

extern "C" void FUN_00135b4a(OnlineString* first, OnlineString* last, u32 value)
{
    while (first != last) {
        _ZN9Obj55aff4aSERKS_(first, value);
        ++first;
    }
}

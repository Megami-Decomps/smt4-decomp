#include "common.h"

struct Obj55c954CopyState {
    void *vtable; // 0x00
    u32 first; // 0x04
    u32 second; // 0x08
    u8 unk0c[0xc];
    u8 enabled; // 0x18
    u8 unk19[3];
    u32 third; // 0x1c
    u32 fourth; // 0x20
};

// Copy the state without replacing the destination's virtual table.
extern "C" void _ZN9Obj55c95414copyParametersEPK20SelectionValueRecord(Obj55c954CopyState *destination, const Obj55c954CopyState *source)
{
    destination->third = source->third;
    destination->fourth = source->fourth;
    destination->enabled = source->enabled;
    destination->first = source->first;
    destination->second = source->second;
}

/* NON_MATCHING: readable body; retail builds this as a constructor-style function with a stack frame (push {r4-r6}) and separate stores. */
#include "common.h"

struct Quad4 {
    u32 unk00;
    u32 unk04;
    u32 unk08;
    u32 unk0C;
};

extern "C" {
void FUN_00354b18(Quad4 *quad, u32 first, u32 second, u32 third)
{
    quad->unk00 = first;
    quad->unk0C = third;
    quad->unk04 = 0;
    quad->unk08 = second;
}
}

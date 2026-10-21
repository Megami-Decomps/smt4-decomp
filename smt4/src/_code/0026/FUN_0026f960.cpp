/* NON_MATCHING: packet initialization interleaves kind/flag stores with pair defaults; retail writes all four pair defaults first. */
#include "common.h"

struct SequenceFiveRequest {
    u8 kind; // 0x00
    u8 unk01;
    u16 id; // 0x02
    s16 firstPair[2]; // 0x04
    s16 secondPair[2]; // 0x08
    u8 flags; // 0x0c
    u8 unk0d;
    u16 firstParameter; // 0x0e
    u16 secondParameter; // 0x10
};

extern "C" {
void asdSequenceRequest(s32 state, const void *argument, u32 size);

// Request sequence five with an id and unspecified pair selections.
u32 FUN_0026f960(u32 id)
{
    SequenceFiveRequest request;
    request.firstPair[0] = -1;
    request.firstPair[1] = -1;
    request.secondPair[0] = -1;
    request.secondPair[1] = -1;
    request.kind = 1;
    request.flags = 0;
    request.firstParameter = 0;
    request.secondParameter = 0;
    request.id = id;
    asdSequenceRequest(5, &request, sizeof(request));
    return 1;
}
}

#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

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

// Request sequence five with an id and unspecified pair selections.
u32 sequenceRequestKind5(u32 id)
{
    SequenceFiveRequest request;
    request.flags = 0;
    for (s32 i = 0; i < 2; i++) {
        request.firstPair[i] = -1;
        request.secondPair[i] = -1;
    }
    request.firstParameter = 0;
    request.secondParameter = 0;
    request.kind = 1;
    request.id = id;
    asdSequenceRequest(5, &request, sizeof(request));
    return 1;
}
}

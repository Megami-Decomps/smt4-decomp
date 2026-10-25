#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

namespace { struct Request { u16 first, second; }; }

extern "C" {
void *jyoucyuGetTableEntry(u32 index);
u32 scrGetArg(u32 index);
u32 scrComm_Sequence14Request(void)
{
    jyoucyuGetTableEntry(0);
    Request request;
    request.first = scrGetArg(0);
    request.second = scrGetArg(1);
    asdSequenceRequest(14, reinterpret_cast<const void *>(&request), sizeof(request));
    return 1;
}
}

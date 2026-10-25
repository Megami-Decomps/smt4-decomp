#include "common.h"

namespace { struct Request { u16 first, second; }; }

extern "C" {
void *jyoucyuGetTableEntry(u32 index);
u32 scrGetArg(u32 index);
void asdSequenceRequest(u32 sequence, const Request *request, u32 size);
u32 scrComm_Sequence14Request(void)
{
    jyoucyuGetTableEntry(0);
    Request request;
    request.first = scrGetArg(0);
    request.second = scrGetArg(1);
    asdSequenceRequest(14, &request, sizeof(request));
    return 1;
}
}

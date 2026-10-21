/* NON_MATCHING: compiler schedules the initial argument and sequence request arguments differently. */
#include "common.h"

namespace { struct Request { u16 first, second; }; }

extern "C" {
void jougyuGetTableEntry(u32 index);
u32 scrGetArg(u32 index);
void asdSequenceRequest(u32 sequence, const Request *request, u32 size);
u32 FUN_0037d700(void)
{
    jougyuGetTableEntry(0);
    Request request;
    request.first = scrGetArg(0);
    request.second = scrGetArg(1);
    asdSequenceRequest(0, &request, sizeof(request));
    return 1;
}
}

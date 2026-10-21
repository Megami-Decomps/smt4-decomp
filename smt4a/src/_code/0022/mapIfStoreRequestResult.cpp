#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Records the asynchronous request's completion values. */
void mapIfStoreRequestResult(u32 result, AsyncRequestResult *request, u32 detail)
{
    request->result = result;
    request->detail = detail;
}

} /* extern "C" */

/* NON_MATCHING: compiler forwards stack arguments through VFP while retail uses core-register block copies; candidate O2. */
#include "shard/W6_W6Match2_HandleRequest.h"
#include "nn/Result.h"

extern "C" u32 titleContentStreamCreate(u32* handle, const HandleRequest* request,
                            u32 first, u32 second, u32 third, u32 fourth, u32 fifth);

// Build the request and publish its handle only when the returned status succeeds.
extern "C" u32 handleRequestSubmit(HandleRequestResult* output, u32 kind, u64 value, u32 argument,
                            u32 first, u32 second, u32 third, u32 fourth, u32 fifth)
{
    HandleRequest request = {value, kind, argument};
    u32 handle;
    u32 status = titleContentStreamCreate(&handle, &request, first, second, third, fourth, fifth);
    if (!nnResultIsFailure((s32)status)) {
        output->handle = handle;
        output->index = -1;
        return 0;
    }
    return status;
}

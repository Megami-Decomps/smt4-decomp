/* NON_MATCHING: IDENTICAL when compiled with --cpu=MPCore --fpu=softvfp (retail forwards the stack words with core ldm/stm, as its neighbours FUN_00426634/FUN_00426940 that need the same flag); the default build copies them through VFP. Needs that unit cflags. */
#include "shard/W6_W6Match2_HandleRequest.h"
#include "nn/Result.h"

extern "C" u32 FUN_001c5be4(u32* handle, const HandleRequest* request,
                            u32 first, u32 second, u32 third, u32 fourth, u32 fifth);

// Build the request and publish its handle only when the returned status succeeds.
extern "C" u32 handleRequestSubmit(HandleRequestResult* output, u32 kind, u64 value, u32 argument,
                            u32 first, u32 second, u32 third, u32 fourth, u32 fifth)
{
    HandleRequest request = {value, kind, argument};
    u32 handle;
    u32 status = FUN_001c5be4(&handle, &request, first, second, third, fourth, fifth);
    if (!nnResultIsFailure((s32)status)) {
        output->handle = handle;
        output->index = -1;
        return 0;
    }
    return status;
}

/* NON_MATCHING: default-result construction retains a zero register instead of recovering the owner from its member constructor. */
#include "classes/WindowOperation.h"

extern "C" {
s32 objGetFlagBit0(const WindowOperationRequest *request);
WindowOperationResult aocFileContentPrepareMountBuffer(WindowOperationState *state, u32 id);

// Store a window request and dispatch it only when its active flag is set.
WindowOperationResult FUN_0047402c(WindowOperationState *state,
                                  const WindowOperationRequest *request)
{
    WindowOperationResult result;
    result.result = WindowStatusResult(0);
    state->request = *request;
    if (!objGetFlagBit0(&state->request))
        return result;
    return aocFileContentPrepareMountBuffer(state, request->id);
}
}

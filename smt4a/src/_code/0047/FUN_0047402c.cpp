/* NON_MATCHING: retail inlines the body of WindowOperationResult(u8) (status, the default WindowStatusResult, zeroed
 * words, then result = WindowStatusResult(0)), which the build only sees out of line; with that body visible inline
 * the diff falls from 35 to 12 lines (the zero and the member pointer swap r0/r1). */
#include "classes/WindowOperation.h"

extern "C" {
/* One-instruction getter (armlink inlines it): the request's content index. */
u16 contentIndexGetValue(const u16 *index);
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
    return aocFileContentPrepareMountBuffer(state, contentIndexGetValue(&request->id));
}
}

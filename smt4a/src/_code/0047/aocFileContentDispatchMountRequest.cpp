#include "classes/WindowOperation.h"

extern "C" {
/* One-instruction getter (armlink inlines it): the request's content index. */
u16 contentIndexGetValue(const u16 *index);
s32 objGetFlagBit0(const WindowOperationRequest *request);

/* Stores a mount request and dispatches it only when its active flag is set. */
RequestParameters aocFileContentDispatchMountRequest(WindowOperationState *state, const WindowOperationRequest *request)
{
    RequestParameters mountRequest(0);
    state->request = *request;
    if (!objGetFlagBit0(&state->request))
        return mountRequest;
    return aocFileContentPrepareMountBuffer(state, contentIndexGetValue(&request->id));
}
} /* extern "C" */

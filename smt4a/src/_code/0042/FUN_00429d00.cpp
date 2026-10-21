/* NON_MATCHING: compiler merges stores and omits retail preserved argument registers. */
#include "common.h"
struct RequestState { u32 handle, state, first, second; };
/* Initializes the request state and its two argument words. */
extern "C" void FUN_00429d00(RequestState *request,u32 handle,u32 first,u32 second) { request->handle=handle; request->state=0; request->first=first; request->second=second; }

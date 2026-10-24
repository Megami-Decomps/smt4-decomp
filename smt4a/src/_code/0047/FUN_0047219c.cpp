/* NON_MATCHING: control flow, calls, the by-reference request ABI and the inlined RequestParameters constructor sequence (strb, member ctor, owner recovered with `sub r4, r0, #4`, ldrd/strd) match; armcc gives every hidden-reference temporary its own stack slot (88-byte frame) where retail reuses sp+20 and sp+40 (64 bytes), and splits the submitTokenRequest argument copy into ldm pieces. */
#include "addon/aocMain.h"
#include "shard/W6_W6Match1_QueuedRequestToken.h"

extern "C" {
extern AocMain *g_aocMain;
extern AocSystemA *g_aocSystem;
s32 sysLightEventTryWait(AocObjB *event);
s32 byteIsAtLeast100(RequestParameters *request);
u32 legacyResourceIdRemap(WindowStatusResult *result);
u32 jyoucyuGetTableEntry(s32 index);

/* The AOC job step: takes the content system's pending request (or the one it already holds),
 * and queues the follow-up request when the event allows it. */
u32 FUN_0047219c(void)
{
    RequestParameters request;
    request.kind = 1;
    request.word3 = 0;
    request.result = WindowStatusResult(0);
    request.kind = 100;

    if (sysLightEventTryWait(&g_aocMain->objB) != 0) {
        g_aocMain->flags &= ~0x10000u;
        request.kind = 200;
    } else {
        request = g_aocSystem->getPendingRequest();
        if (byteIsAtLeast100(&request) == 0) {
            return 1;
        }
    }
    g_aocSystem->getPendingRequest();
    g_aocMain->flags = (g_aocMain->flags & ~0x10000u) | 0x10;
    if (legacyResourceIdRemap(&request.result) != 0xC9413891) {
        if (sysLightEventTryWait(&g_aocMain->objB) != 0) {
            g_aocMain->flags &= ~0x10000u;
        } else if (request.kind != 200) {
            QueuedRequestHandle handle = {request.result.code, request.result.description};
            if (g_aocMain->submitTokenRequest(request, handle) != 0) {
                return 0;
            }
            jyoucyuGetTableEntry(0);
            return 0;
        }
        jyoucyuGetTableEntry(0);
        request.kind = 200;
        g_aocMain->queueRequest(request, 0x65, 0);
    } else {
        jyoucyuGetTableEntry(0);
    }
    return 0;
}

} /* extern "C" */

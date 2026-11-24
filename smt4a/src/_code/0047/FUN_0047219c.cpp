/* NON_MATCHING: 45 lines. Control flow, calls, the by-reference request ABI, the request's reset
 * (resetRequestOperation) and the whole-word copies match; armcc gives every hidden-reference temporary its own
 * stack slot (80-byte frame) where retail reuses sp+20 and sp+40 (64 bytes), and retail keeps the shared
 * `jyoucyuGetTableEntry(0)` tail at the end of the function (the unchanged-resource arm), where this build keeps the
 * copy after submitTokenRequest. */
#include "addon/aocMain.h"
#include "shard/W6_W6Match1_QueuedRequestToken.h"
#include "util/BitsAndBytes.h"
#include "sys/RuntimeObjects.h"
#include "addon/AocSystemA.h"

extern "C" {
u32 jyoucyuGetTableEntry(s32 index);

/* The AOC job step: takes the content system's pending request (or the one it already holds),
 * and queues the follow-up request when the event allows it. */
u32 FUN_0047219c(void)
{
    RequestParameters request;
    resetRequestOperation(&request);
    request.kind = 100;

    if (sysLightEventTryWait(&g_aocMain->operationDone) != 0) {
        g_aocMain->flags &= ~0x10000u;
        request.kind = 200;
    } else {
        request = g_aocSystem->getPendingRequest();
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&request)) == 0) {
            return 1;
        }
    }
    g_aocSystem->getPendingRequest();
    g_aocMain->flags = (g_aocMain->flags & ~0x10000u) | 0x10;
    if (legacyResourceIdRemap(&request.result) != 0xC9413891) {
        if (sysLightEventTryWait(&g_aocMain->operationDone) != 0) {
            g_aocMain->flags &= ~0x10000u;
        } else if (request.kind != 200) {
            if (g_aocMain->submitTokenRequest(request, *reinterpret_cast<QueuedRequestHandle *>(&request.result)) == 0) {
                jyoucyuGetTableEntry(0);
            }
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

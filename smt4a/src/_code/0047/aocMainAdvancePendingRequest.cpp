/* NON_MATCHING: the two WindowStatusResult temporaries use sp+24 instead of sp+40, and
 * the branch after submitTokenRequest tests the opposite condition. */
#include "addon/aocMain.h"
#include "shard/W6_W6Match1_QueuedRequestToken.h"
#include "util/BitsAndBytes.h"
#include "sys/RuntimeObjects.h"
#include "addon/AocSystemA.h"

extern "C" {
u32 jyoucyuGetTableEntry(s32 index);
RequestParameters aocResolveMountPath(AocSystemA *system, u32 id);

/* The AOC job step: takes the content system's pending request (or the one it already holds),
 * and queues the follow-up request when the event allows it. */
u32 aocMainAdvancePendingRequest(u32 unusedA, u32 unusedB, u32 id)
{
    RequestParameters request;
    resetRequestOperation(&request);
    request.kind = 100;

    if (sysLightEventTryWait(&g_aocMain->operationDone) != 0) {
        g_aocMain->flags &= ~0x10000u;
        request.kind = 200;
    } else {
        request = aocResolveMountPath(g_aocSystem, id);
        if (byteIsAtLeast100((const u8 *)&request) == 0) {
            return 1;
        }
    }
    jyoucyuGetTableEntry(0);
    {
        g_aocSystem->getPendingRequest();
    }
    g_aocMain->flags = (g_aocMain->flags & ~0x10000u) | 0x10;
    if (legacyResourceIdRemap(&request.result) != 0xC9413891) {
        bool operationDone = sysLightEventTryWait(&g_aocMain->operationDone) != 0;
        if (operationDone) {
            g_aocMain->flags &= ~0x10000u;
        }
        if (operationDone || request.kind == 200) {
            jyoucyuGetTableEntry(0);
            request.kind = 200;
            g_aocMain->queueRequest(request, 0x65, 0);
            return 0;
        }
        if (g_aocMain->submitTokenRequest(request, *(QueuedRequestHandle *)&request.result) != 0) {
            return 0;
        }
    }
    jyoucyuGetTableEntry(0);
    return 0;
}

} /* extern "C" */

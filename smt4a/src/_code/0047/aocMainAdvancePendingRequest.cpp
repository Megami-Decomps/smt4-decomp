/* NON_MATCHING: 30 lines; 60-byte frame, the inlined RequestParameters(), reused sp+20/sp+40 request slots, and submitTokenRequest ldm/ldrd match retail, remaining: WindowStatusResult temp lands at sp+24 instead of sp+40, r7=1 is not kept across calls, and submitTokenRequest's zero branch duplicates jyoucyuGetTableEntry(0). */
#include "addon/aocMain.h"
#include "shard/W6_W6Match1_QueuedRequestToken.h"
#include "util/BitsAndBytes.h"
#include "sys/RuntimeObjects.h"
#include "addon/AocSystemA.h"

extern "C" {
s32 sysLightEventTryWait(LightEvent *event);
u32 jyoucyuGetTableEntry(s32 index);
RequestParameters aocResolveMountPath(AocSystemA *system, u32 id);

/* The AOC job step: takes the content system's pending request (or the one it already holds),
 * and queues the follow-up request when the event allows it. */
u32 aocMainAdvancePendingRequest(u32 unusedA, u32 unusedB, u32 id)
{
    RequestParameters request;
    request.kind = 1;
    request.word3 = 0;
    {
        request.result = WindowStatusResult(request.word3);
    }
    request.kind = 100;

    if (sysLightEventTryWait(&g_aocMain->operationDone) != 0) {
        g_aocMain->flags &= ~0x10000u;
        request.kind = 200;
    } else {
        request = aocResolveMountPath(g_aocSystem, id);
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&request)) == 0) {
            return 1;
        }
    }
    jyoucyuGetTableEntry(0);
    {
        g_aocSystem->getPendingRequest();
    }
    g_aocMain->flags = (g_aocMain->flags & ~0x10000u) | 0x10;
    if (legacyResourceIdRemap(&request.result) != 0xC9413891) {
        if (sysLightEventTryWait(&g_aocMain->operationDone) != 0) {
            g_aocMain->flags &= ~0x10000u;
        } else if (request.kind != 200) {
            if (g_aocMain->submitTokenRequest(request, *reinterpret_cast<QueuedRequestHandle *>(&request.result)) != 0) {
                return 0;
            }
            jyoucyuGetTableEntry(0);
            return 0;
        }
        jyoucyuGetTableEntry(0);
        request.kind = 200;
        g_aocMain->queueRequest(request, 0x65, 0);
        return 0;
    }
    jyoucyuGetTableEntry(0);
    return 0;
}

} /* extern "C" */

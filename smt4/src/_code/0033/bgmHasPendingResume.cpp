/* NON_MATCHING: the unrolled loop and its reloaded table address match; retail still returns the early 0 with its own movne and sets the result after the first flag load, and tests the first entry's bits with tst/tstne (built: two branches). */
#include "common.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern BgmRequestChannel g_bgmRequestChannels[2];

/* Returns 1 when the jyoucyu table's entry 1 is unset and one of the two BGM channels plays with a
 * pending transition (flag bits 2 and 0x20). */
u32 bgmHasPendingResume(void)
{
    if (jyoucyuGetTableEntry(1) != 0) {
        return 0;
    }
    u32 result = 0;
    for (s32 i = 0; i < 2; i++) {
        if (bgmChannelIsPendingResume(&g_bgmRequestChannels[i])) {
            result = 1;
            break;
        }
    }
    return result;
}
} /* extern "C" */

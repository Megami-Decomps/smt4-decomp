/* NON_MATCHING: retail keeps the fade parameter (60) and the request arguments (0, 60) in r4/r5/r6 across the
 * guarding jyoucyuGetTableEntry calls and reloads channel 0's address for the fade; this build rematerialises them. */
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
extern BgmRequestChannel g_bgmRequestChannels[2];
extern BgmChannelSelection g_resourceSharedFlag;
void soundChannelRequest(u32, s32, s32);
}

/* bgmHasPendingResume's body (inlined: a plain static, as retail's unrolled copy shows): 1 when the jyoucyu
 * table's entry 1 is unset and a channel has a pending transition. */
static u32 bgmPendingResume(void)
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

/* bgmFadeOut's body as this caller inlines it (channel 1 reached from channel 0's address). */
static __inline void bgmFadeAll(u32 parameter)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        bgmFadeChannel(&g_bgmRequestChannels[0], parameter, &g_resourceSharedFlag);
        bgmFadeChannel(&g_bgmRequestChannels[1], parameter, &g_resourceSharedFlag);
    }
}

/* soundChannelRequestIfEnabled's body. */
static __inline void bgmRequestIfEnabled(u32 track, s32 param, s32 frames)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        soundChannelRequest(track, param, frames);
    }
}

extern "C" {
/* Completes a pending BGM transition when one is waiting, otherwise requests the track. */
void bgmResumeOrRequestTrack(u32 track)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        if (bgmPendingResume()) {
            bgmFadeAll(60);
        } else {
            bgmRequestIfEnabled(track, 0, 60);
        }
    }
}
} /* extern "C" */

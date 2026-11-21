#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {
extern BgmChannelSelection g_resourceSharedFlag;
extern BgmRequestChannel g_bgmRequestChannels;  /* channel 0 */
extern BgmRequestChannel g_bgmRequestChannel1;  /* channel 1: its own global (retail loads both addresses) */
int jyoucyuGetTableEntry(u32 index);
}

/* Requests a fade-out on both BGM channels (unless the jyoucyu table's entry 1 is set). */
extern "C" void bgmFadeOut(u32 parameter)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        bgmFadeChannel(&g_bgmRequestChannels, parameter, &g_resourceSharedFlag);
        bgmFadeChannel(&g_bgmRequestChannel1, parameter, &g_resourceSharedFlag);
    }
}

#include "battle/btlTalk.h"

extern "C" {

u32 scrGetArg(s32 index);

extern BtlTalkA *g_btlTalk;

/* Refreshes the three values the talk screen shows, in reverse order. */
s32 btlTalkRefreshValues(void)
{
    u32 first;
    u32 second;
    u32 third;

    g_btlTalk->unk138 = 0;
    g_btlTalk->unk13C = 0;
    g_btlTalk->unk140 = 0;
    first = scrGetArg(0);
    second = scrGetArg(1);
    third = scrGetArg(2);
    g_btlTalk->unk138 = third;
    g_btlTalk->unk13C = second;
    g_btlTalk->unk140 = first;
    return 1;
}

} /* extern "C" */

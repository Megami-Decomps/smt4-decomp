#include "battle/btlTalk.h"

extern "C" {

u32 scrGetArg(s32 index);

extern BtlTalk *g_btlTalk;

/* Refreshes the three values the talk screen shows, in reverse order. */
s32 btlTalkRefreshValues(void)
{
    u32 first;
    u32 second;
    u32 third;

    g_btlTalk->unkB8 = 0;
    g_btlTalk->unkBC = 0;
    g_btlTalk->unkC0 = 0;
    first = scrGetArg(0);
    second = scrGetArg(1);
    third = scrGetArg(2);
    g_btlTalk->unkB8 = third;
    g_btlTalk->unkBC = second;
    g_btlTalk->unkC0 = first;
    return 1;
}

} /* extern "C" */

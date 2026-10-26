/* NON_MATCHING: store scheduling/register reuse differs (retail keeps the flag in r1 and reuses it for the sentinel address). */
#include "common.h"

struct SentinelNode {
    SentinelNode *next;
    SentinelNode *prev;
};

struct SentinelList {
    u32 unk00;
    u8 enabled;
    u8 unk05[3];
    SentinelNode sentinel;
    u32 count;
};

extern "C" {
void FUN_00237d78(SentinelList *list)
{
    list->unk00 = 0;
    list->enabled = 1;
    list->sentinel.next = &list->sentinel;
    list->count = 0;
    list->sentinel.prev = &list->sentinel;
}
}

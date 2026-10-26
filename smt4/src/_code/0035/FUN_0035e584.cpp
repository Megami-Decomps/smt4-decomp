/* NON_MATCHING: readable body; retail stores sequentially with r2=0/r1=&list[1]; build merges into stm. */
#include "common.h"

struct SentinelList {
    u32 unk00;
    SentinelList *selfA;
    SentinelList *selfB;
    u32 unk0C;
    u32 unk10;
    u32 unk14;
};

extern "C" {
void FUN_0035e584(SentinelList *list)
{
    list->unk00 = 0;
    list->selfA = reinterpret_cast<SentinelList *>(&list->selfA);
    list->unk0C = 0;
    list->selfB = reinterpret_cast<SentinelList *>(&list->selfA);
    list->unk10 = 0;
    list->unk14 = 0;
}
}

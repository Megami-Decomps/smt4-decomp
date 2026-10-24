#include "common.h"

struct ShopJob {
    /* 0x00 */ u32 job;
};

struct ShopView {
    /* 0x00 */ ShopJob *jobHolder;
};

extern "C" {
extern ShopView g_shop;
s32 jyoucyuGetTableEntry(u32 index);
void jobStop(u32 job, s32 force);
}

extern "C" void FUN_002761a0(void)
{
    jyoucyuGetTableEntry(0);
    jobStop(g_shop.jobHolder->job, 0);
}

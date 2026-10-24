#include "common.h"

struct ShopFUN_001d3d78 {
    /* 0x00 */ const u32 *job;
};

extern "C" {

extern ShopFUN_001d3d78 g_shop;

void *jyoucyuGetTableEntry(u32 index);
s32 jobStop(u32 job, u16 delay);

/* Refreshes the shop's table entry and stops the shop's job. */
void FUN_001d3d78(void)
{
    jyoucyuGetTableEntry(0);
    jobStop(*g_shop.job, 0);
}

} /* extern "C" */

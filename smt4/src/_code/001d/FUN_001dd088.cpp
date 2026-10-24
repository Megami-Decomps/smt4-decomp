#include "common.h"

extern "C" {

u32 scrGetArg(...); /* takes an optional index: the first call passes none */
u32 event3dEventModelMapCreate(u32 first, u32 second);
void eventTexSetJobParam(void);
void scrSetResult(u32 result);

/* Combines entries 0 and 1, refreshes, and applies the combined result; always reports success. */
u32 FUN_001dd088(void)
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    u32 result = event3dEventModelMapCreate(first, second);

    eventTexSetJobParam();
    scrSetResult(result);
    return 1;
}

} /* extern "C" */

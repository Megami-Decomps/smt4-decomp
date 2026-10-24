#include "shard/Shard0033.h"

extern "C" {

extern u32 *scrGetArgString(s32 index);
extern u32 *gameBlockGetArea221AA(void);
extern s32 libc_strncmp(u32 *a, u32 *b, u32 size);
extern void scrSetResult(s32 value);

/* Script command: result is 1 when the two ranges libc_strncmp compares are equal. */
u32 scrCommCompareRanges(void)
{
    u32 *a = scrGetArgString(0);
    u32 *b = gameBlockGetArea221AA();

    scrSetResult(libc_strncmp(a, b, 0x12) == 0);
    return 1;
}

} /* extern "C" */

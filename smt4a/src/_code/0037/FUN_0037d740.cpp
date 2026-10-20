#include "common.h"

extern "C" {

extern const char *scrGetArgString(void);
extern const char *FUN_0015687c(void);
extern s32 libc_strcmp(const char *a, const char *b);
extern void scrSetResult(u32 value);

/* Script command: compares the string argument with the string FUN_0015687c returns and answers whether they are equal. */
u32 FUN_0037d740(void)
{
    const char *arg = scrGetArgString();
    const char *other = FUN_0015687c();

    scrSetResult(libc_strcmp(other, arg) == 0);
    return 1;
}

} /* extern "C" */

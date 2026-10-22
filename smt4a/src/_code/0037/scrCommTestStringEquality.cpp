#include "common.h"

extern "C" {

extern const char *scrGetArgString(void);
extern const char *gameGetPlayerName(void);
extern s32 libc_strcmp(const char *a, const char *b);
extern void scrSetResult(u32 value);

/* Script command: compares the string argument with the string gameGetPlayerName returns and answers whether they are equal. */
u32 scrCommTestStringEquality(void)
{
    const char *arg = scrGetArgString();
    const char *other = gameGetPlayerName();

    scrSetResult(libc_strcmp(other, arg) == 0);
    return 1;
}

} /* extern "C" */

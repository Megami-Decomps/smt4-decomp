#include "common.h"
#include <string.h>

extern "C" {

extern const char *scrGetArgString(u32 index);
extern const char *gameGetPlayerName(void);
extern void scrSetResult(u32 value);

/* Script command: compares the string argument with the string gameGetPlayerName returns and answers whether they are equal. */
u32 scrCommTestStringEquality(void)
{
    const char *arg = scrGetArgString(0);
    const char *other = gameGetPlayerName();

    scrSetResult(strcmp(other, arg) == 0);
    return 1;
}

} /* extern "C" */

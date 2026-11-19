#include "common.h"
#include "code/Code0029.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 partyFindFirstUnusedEntry(void);

/* Script command: applies its first argument to the object partyFindFirstUnusedEntry returns. */
s32 FUN_00330438(void)
{
    dispatchIfFound(partyFindFirstUnusedEntry(), scrGetArg(0), 0);
    return 1;
}
}

#include "common.h"

extern "C" {

void *btlGetMainState(void);
void *FUN_003ec77c(void *battle);
void scrSetResult(s32 result);

/* Script command: returns 1 when FUN_003ec77c finds no entry for the battle. */
u32 FUN_00380098(void)
{
    s32 result;

    if (FUN_003ec77c(btlGetMainState()) != NULL) {
        result = 0;
    } else {
        result = 1;
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */

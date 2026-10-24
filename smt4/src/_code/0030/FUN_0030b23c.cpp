#include "common.h"

extern "C" {

int scrSetResult(int result);
int btlGetMainState(void);
extern u8 *btlMainFindActiveEntry(void);
extern int scrGetArg(u32 index);

u32 FUN_0030b23c(void)
{
    int arg = scrGetArg(0);
    u8 *unit;

    btlGetMainState();
    unit = btlMainFindActiveEntry();
    if (unit != NULL) {
        int limit = *(u16 *)(unit + 0x1cc);

        scrSetResult(arg <= limit);
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */

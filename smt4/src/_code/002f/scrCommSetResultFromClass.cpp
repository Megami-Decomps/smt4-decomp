#include "common.h"

extern "C" {

extern s32 padGetStickHorizontalDirection(void);
extern s32 scrSetResult(s32 value);

/* Script command: sets the result to 1 for class 4, 2 for class 5, else 0. */
u32 scrCommSetResultFromClass(void)
{
    switch (padGetStickHorizontalDirection()) {
    case 4:
        scrSetResult(1);
        break;
    case 5:
        scrSetResult(2);
        break;
    default:
        scrSetResult(0);
        break;
    }
    return 1;
}

} /* extern "C" */

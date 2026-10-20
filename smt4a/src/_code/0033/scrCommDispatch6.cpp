#include "shard/Shard0033.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void FUN_00294928(void);
extern void FUN_00294940(void);
extern void FUN_00294958(void);
extern void FUN_003252c4(void);
extern void FUN_003252dc(void);
extern void FUN_003252f4(void);

/* Script command: calls one of six routines selected by argument 0. */
u32 scrCommDispatch6(s32 argIndex)
{
    s32 selector = scrGetArg(argIndex);

    if (selector == 0) {
        FUN_00294928();
    } else if (selector == 1) {
        FUN_00294940();
    } else if (selector == 2) {
        FUN_00294958();
    } else if (selector == 10) {
        FUN_003252c4();
    } else if (selector == 11) {
        FUN_003252dc();
    } else if (selector == 12) {
        FUN_003252f4();
    }
    return 1;
}

} /* extern "C" */

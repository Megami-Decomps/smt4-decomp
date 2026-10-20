#include "common.h"

extern "C" {

int btlGetMainState(void);
extern int btlEncountTryFinish(void);

u8 FUN_00312598(void)
{
    btlGetMainState();
    return btlEncountTryFinish() != 0;
}

} /* extern "C" */

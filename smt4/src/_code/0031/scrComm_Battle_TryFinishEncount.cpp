#include "common.h"

extern "C" {

int btlGetMainState(void);
extern int btlEncountTryFinish(void);

u8 scrComm_Battle_TryFinishEncount(void)
{
    btlGetMainState();
    return btlEncountTryFinish() != 0;
}

} /* extern "C" */

#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

extern int btlEncountTryFinish(void);

u8 scrComm_Battle_TryFinishEncount(void)
{
    reinterpret_cast<int>(btlGetMainState());
    return btlEncountTryFinish() != 0;
}

} /* extern "C" */

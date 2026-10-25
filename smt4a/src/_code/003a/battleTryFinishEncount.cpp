#include "battle/BtlMainAccess.h"
#include "shard/Shard003A.h"

extern "C" {

extern s32 btlEncountTryFinish(void *state);

u8 battleTryFinishEncount(void)
{
    return btlEncountTryFinish(static_cast<void *>(btlGetMainState())) != 0;
}

} /* extern "C" */

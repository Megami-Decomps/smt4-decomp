#include "shard/Shard003A.h"

extern "C" {

extern void *btlGetMainState(void);
extern s32 btlEncountTryFinish(void *state);

u8 battleTryFinishEncount(void)
{
    return btlEncountTryFinish(btlGetMainState()) != 0;
}

} /* extern "C" */

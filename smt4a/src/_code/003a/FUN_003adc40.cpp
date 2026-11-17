#include "gamedata/MapSaveBlockA.h"
#include "shard/Shard003A.h"

extern "C" {


u8 FUN_003adc40(void)
{
    return gameFlagsGetBlock()->unk001C == 1;
}

} /* extern "C" */

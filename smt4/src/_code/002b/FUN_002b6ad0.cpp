#include "shard/GameOptions.h"
#include "code/Code002b.h"
#include "shard/TextureDrawCall.h"

extern "C" {

extern GameOptions *gameGetSupportUnitData(void);

/* 1 when the options record has both its marker (0x46) and counter (0x604) set. */
u32 FUN_002b6ad0(void)
{
    GameOptions *options = gameGetSupportUnitData();
    u32 result;

    if ((options->unk46 == 0) || (options->unk604 == 0)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */

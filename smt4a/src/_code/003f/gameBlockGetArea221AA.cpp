#include "shard/Shard003F.h"

extern "C" {

extern u8 *gameDataBlocksGetSaveData(void);

u8 *gameBlockGetArea221AA(void)
{
    return (u8 *)gameDataBlocksGetSaveData() + 0x221AA;
}

} /* extern "C" */

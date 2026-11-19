#include "common.h"
#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"

extern "C" {

extern u8 *gameGetQuestCenterBlock(void);

u8 isFlag10Set(void)
{
    u8 *block = gameGetQuestCenterBlock();

    return block[0x10] != 0;
}

} /* extern "C" */

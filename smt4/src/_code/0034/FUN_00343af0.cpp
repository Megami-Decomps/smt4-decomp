#include "common.h"
#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"

extern "C" {

extern u8 *gameGetQuestCenterBlock(void);

u8 FUN_00343af0(void)
{
    u8 *block = gameGetQuestCenterBlock();

    return block[0x10] != 0;
}

} /* extern "C" */

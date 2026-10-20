#include "common.h"

extern "C" {

extern u8 *gameGetQuestCenterBlock(void);

u16 QcActive_GetField20(void)
{
    u8 *block = gameGetQuestCenterBlock();

    return *(u16 *)(block + 0x14);
}

} /* extern "C" */

#include "common.h"

extern "C" {

extern u8 *gameGetQuestCenterBlock(void);

u16 QcActive_GetField26(void)
{
    u8 *block = gameGetQuestCenterBlock();

    return *(u16 *)(block + 0x1a);
}

} /* extern "C" */

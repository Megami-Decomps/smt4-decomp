#include "common.h"

extern "C" {

extern u8 *gameGetQuestCenterBlock(void);

u16 QcActive_GetField24(void)
{
    u8 *block = gameGetQuestCenterBlock();

    return *(u16 *)(block + 0x18);
}

} /* extern "C" */

#include "common.h"
#include "quest_center/qcUtility.h"

extern "C" {

extern u8 *gameGetQuestCenterBlock(void);

u16 QcActive_GetField22(void)
{
    u8 *block = gameGetQuestCenterBlock();

    return *(u16 *)(block + 0x16);
}

} /* extern "C" */

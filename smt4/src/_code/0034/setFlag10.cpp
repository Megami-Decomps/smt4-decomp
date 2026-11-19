#include "common.h"

extern "C" {

extern u8 *gameGetQuestCenterBlock(void);

void setFlag10(void)
{
    u8 *block = gameGetQuestCenterBlock();

    block[0x10] = 1;
}

} /* extern "C" */

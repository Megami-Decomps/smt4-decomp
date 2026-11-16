#include "common.h"

extern "C" {

int fileSlotFree(int id);

void buttonHelpFreeTextureSlot(void)
{
    fileSlotFree(0xe);
}

} /* extern "C" */

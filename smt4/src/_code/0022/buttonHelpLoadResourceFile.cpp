#include "common.h"

extern "C" {

int fileSlotLoad(int id);

void buttonHelpLoadResourceFile(void)
{
    fileSlotLoad(0xe);
}

} /* extern "C" */

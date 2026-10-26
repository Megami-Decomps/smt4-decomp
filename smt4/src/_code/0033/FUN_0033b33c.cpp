#include "common.h"

extern "C" {

int gameDataClearSaveRecord(int index);

void FUN_0033b33c(void)
{
    int i = 0;

    do {
        gameDataClearSaveRecord(i);
        i++;
    } while (i < 0xc);
}

} /* extern "C" */

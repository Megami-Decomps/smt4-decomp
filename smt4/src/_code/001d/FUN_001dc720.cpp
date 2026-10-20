#include "common.h"

extern "C" {

int FUN_002c58c8(int table, int index);
int asdTMTexTableLoadTmx(int table, int flag);

void FUN_001dc720(void)
{
    s32 i;

    asdTMTexTableLoadTmx(0x25, 0);
    i = 0;
    do {
        FUN_002c58c8(0x25, i);
        i++;
    } while (i < 4);
}

} /* extern "C" */

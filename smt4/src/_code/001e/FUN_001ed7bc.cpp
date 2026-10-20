#include "common.h"

extern "C" {

int asdTMTexTableLoadEntryAsync(int table, int index);
int asdTMTexTableLoadTmx(int table, int flag);

extern s8 DAT_0043dcc8;

/* Loads the table on the first reference. */
void FUN_001ed7bc(void)
{
    s32 i;

    if (DAT_0043dcc8 <= 0) {
        asdTMTexTableLoadTmx(0xd, 0);
        i = 0;
        do {
            asdTMTexTableLoadEntryAsync(0xd, i);
            i++;
        } while (i < 5);
    }
    DAT_0043dcc8 = DAT_0043dcc8 + 1;
}

} /* extern "C" */

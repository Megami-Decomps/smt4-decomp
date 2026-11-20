#include "common.h"

extern "C" {

int asdTMTexTableLoadEntryAsync(int table, int index);
int asdTMTexTableLoadTmx(int table, int flag);

extern s8 g_texTableRefCount;

/* Loads the table on the first reference. */
void texTableRefAcquire(void)
{
    s32 i;

    if (g_texTableRefCount <= 0) {
        asdTMTexTableLoadTmx(0xd, 0);
        i = 0;
        do {
            asdTMTexTableLoadEntryAsync(0xd, i);
            i++;
        } while (i < 5);
    }
    g_texTableRefCount = g_texTableRefCount + 1;
}

} /* extern "C" */

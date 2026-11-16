#include "common.h"

extern "C" {

int asdTMTexTablePrepareNodeImage(int table, int index);
int asdTMTexTableLoadTmx(int table, int flag);

void texTableLoadWithEntries(void)
{
    s32 i;

    asdTMTexTableLoadTmx(0x25, 0);
    i = 0;
    do {
        asdTMTexTablePrepareNodeImage(0x25, i);
        i++;
    } while (i < 4);
}

} /* extern "C" */

#include "common.h"
#include "event/bustupEvent/BustupTex.h"

extern "C" {

void asdTMTexTableLoadTmx(s32 table, s32 flag);

/* Loads texture table 0x1B and runs asdTMTexTablePrepareNodeImage on each of its 0x12 entries. */
void asdMTeXLoadTableEntries(void)
{
    s32 i;

    asdTMTexTableLoadTmx(0x1B, 0);
    i = 0;
    do {
        asdTMTexTablePrepareNodeImage(0x1B, i);
        i = i + 1;
    } while (i < 0x12);
}

} /* extern "C" */

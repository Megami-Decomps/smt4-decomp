#include "common.h"

extern "C" {

void asdTMTexTableLoadTmx(s32 table, s32 flag);
void FUN_0014afd0(s32 table, s32 index);

/* Loads texture table 0x1B and runs FUN_0014afd0 on each of its 0x12 entries. */
void asdMTeXLoadTableEntries(void)
{
    s32 i;

    asdTMTexTableLoadTmx(0x1B, 0);
    i = 0;
    do {
        FUN_0014afd0(0x1B, i);
        i = i + 1;
    } while (i < 0x12);
}

} /* extern "C" */

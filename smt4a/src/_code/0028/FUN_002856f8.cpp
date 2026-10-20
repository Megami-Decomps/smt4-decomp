/* First-reference hook for the table: preloads resources and registers its 0x68-byte entries on the first call. */
#include "common.h"

extern "C" {

extern s8 DAT_0057f27c[2];  /* [1]: reference count */

extern void qsort(void *entries, u32 count, s32 entrySize, void *callback);
extern void FUN_0014384c(s32 id);
extern void FUN_0014afd0(s32 id, s32 arg);
extern void *dataTableGet(s32 group, s32 id);
extern u32 dataTableGetCount(void *table);
extern void *dataTableGetEntries(void);
extern void FUN_003f86f8(s32 id);

void FUN_002856f8(void)
{
    if (DAT_0057f27c[1] <= 0) {
        void *table;
        void *entries;

        FUN_0014384c(0x15);
        FUN_0014afd0(0x15, 0);
        FUN_003f86f8(0x38);
        table = dataTableGet(0x38, 0);
        entries = dataTableGetEntries();
        qsort(entries, dataTableGetCount(table), 0x68, (void *)0x002B2B24);
    }
    DAT_0057f27c[1]++;
}

}

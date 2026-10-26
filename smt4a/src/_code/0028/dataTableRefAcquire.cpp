/* First-reference hook for the table: preloads resources and registers its 0x68-byte entries on the first call. */
#include "common.h"
#include "event/bustupEvent/BustupTex.h"

extern "C" {

extern s8 g_useCounter[2];  /* [1]: reference count */

extern void qsort(void *entries, u32 count, s32 entrySize, void *callback);
extern void asdTMTexTableLoadSprites(s32 id);
extern void *dataTableGet(s32 group, s32 id);
extern u32 dataTableGetCount(void *table);
extern void *dataTableGetEntries(void);
extern void loadSlotEnsureLoaded(s32 id);
extern s32 arrayCompareSignedHalfword(const void *a, const void *b);

void dataTableRefAcquire(void)
{
    if (g_useCounter[1] <= 0) {
        void *table;
        void *entries;

        asdTMTexTableLoadSprites(0x15);
        FUN_0014afd0(0x15, 0);
        loadSlotEnsureLoaded(0x38);
        table = dataTableGet(0x38, 0);
        entries = dataTableGetEntries();
        qsort(entries, dataTableGetCount(table), 0x68, (void *)arrayCompareSignedHalfword);
    }
    g_useCounter[1]++;
}

}

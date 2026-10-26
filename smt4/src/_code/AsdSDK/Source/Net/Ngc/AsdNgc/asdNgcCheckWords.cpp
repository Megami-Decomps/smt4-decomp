/* NON_MATCHING: word count, input copy loop and library result test now match retail; remaining: retail reaches the result array through its own literal (g_asdNgc+0x1000 as a separate object) while the build derives it from the g_asdNgc base, which shifts the frame and register allocation. */
#include "AsdSDK/Source/Net/Ngc/AsdNgc.h"

extern "C" {
extern AsdNgc g_asdNgc;

s32 FUN_0035edac(void *work, u32 *results, s32 mode, u32 *words, u32 wordCount);

/* Checks up to 16 words for bad words. Returns the per-word result array (nonzero entries are
 * flagged), or NULL when the module is not ready, there are no words, or the library failed. */
u32 *asdNgcCheckWords(const u32 *words, s32 count)
{
    u32 results[ASD_NGC_MAX_WORDS];
    s32 i;
    s32 n;

    if ((g_asdNgc.flags & ASD_NGC_READY) == 0) {
        return NULL;
    }

    g_asdNgc.words = words;
    g_asdNgc.unk10d4 = 0;
    g_asdNgc.unk10d8 = 0;
    g_asdNgc.wordCount = count;
    g_asdNgc.capacity = ASD_NGC_MAX_WORDS;
    if (count > ASD_NGC_MAX_WORDS) {
        n = ASD_NGC_MAX_WORDS;
    } else {
        s32 unused = ASD_NGC_MAX_WORDS - count;
        n = ASD_NGC_MAX_WORDS - unused;
        if (n == 0) {
            return NULL;
        }
    }

    for (i = 0; i < ASD_NGC_MAX_WORDS; i++) {
        results[i] = 0;
    }
    for (i = 0; i < ASD_NGC_MAX_WORDS; i++) {
        g_asdNgc.result[i] = 0;
    }
    for (i = 0; i < n; i++) {
        g_asdNgc.input[i] = g_asdNgc.words[i];
    }

    if ((s32)(FUN_0035edac(g_asdNgc.work, results, 1, g_asdNgc.input, n) & 0x80000000) < 0) {
        g_asdNgc.status |= ASD_NGC_FAILED;
        return NULL;
    }
    for (i = 0; i < n; i++) {
        if (results[i] != 0) {
            g_asdNgc.status |= ASD_NGC_FLAGGED;
            g_asdNgc.result[i] = results[i];
        }
    }
    g_asdNgc.status |= ASD_NGC_CHECKED;
    return g_asdNgc.result;
}

} /* extern "C" */

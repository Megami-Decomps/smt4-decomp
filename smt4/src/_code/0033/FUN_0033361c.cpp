/* NON_MATCHING: the unrolled loop and its reloaded table address match; retail still returns the early 0 with its own movne and sets the result after the first flag load, and tests the first entry's bits with tst/tstne (built: two branches). */
#include "common.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {

typedef struct Jyoucyu {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 flags;
} Jyoucyu; /* 0x20 */

extern Jyoucyu g_bgmRequestChannels[2];


/* Whether an entry has both flag bits 2 and 0x20 set. */
static __inline bool jyoucyuIsReady(const Jyoucyu *entry)
{
    return (entry->flags & 2) != 0 && (entry->flags & 0x20) != 0;
}

/* Returns 1 when none is pending and one of the two entries has both flag bits 2 and 0x20 set. */
u32 FUN_0033361c(void)
{
    if (jyoucyuGetTableEntry(1) != 0) {
        return 0;
    }
    u32 result = 0;
    for (s32 i = 0; i < 2; i++) {
        if (jyoucyuIsReady(&g_bgmRequestChannels[i])) {
            result = 1;
            break;
        }
    }
    return result;
}

} /* extern "C" */

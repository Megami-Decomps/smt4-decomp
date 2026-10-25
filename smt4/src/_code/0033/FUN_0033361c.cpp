/* NON_MATCHING: retail sets the result 0 right after the first flag load and reloads the table base for the second entry (the result variable takes r0); this build keeps the base in r0 and returns 0 at the end */
#include "common.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {

typedef struct Jyoucyu {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 flags;
} Jyoucyu; /* 0x20 */

extern Jyoucyu DAT_004c53c4[2];


/* Returns 1 when none is pending and one of the two entries has both flag bits 2 and 0x20 set. */
u32 FUN_0033361c(void)
{
    s32 i;

    if (jyoucyuGetTableEntry(1) != 0) {
        return 0;
    }
    for (i = 0; i < 2; i++) {
        if ((DAT_004c53c4[i].flags & 2) != 0 && (DAT_004c53c4[i].flags & 0x20) != 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */

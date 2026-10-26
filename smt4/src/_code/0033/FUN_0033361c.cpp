/* NON_MATCHING: retail merges the zero result into r0 (movne r0,#0 after the call, mov r0,#0 after the first flag load) and tests both flag bits with tstne; the build returns 0 from a separate block with branches. */
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
    if (jyoucyuGetTableEntry(1) != 0) {
        return 0;
    }
    for (s32 i = 0; i < 2; i++) {
        u32 flags = DAT_004c53c4[i].flags;
        if ((flags & 2) != 0 && (flags & 0x20) != 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */

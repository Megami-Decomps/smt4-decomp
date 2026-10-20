#include "common.h"

extern "C" {

typedef struct Flags {
    /* 0x00 */ s8 blocked;
    /* 0x01 */ s8 requested;
} Flags;

void FUN_0014166c(void);
s32 FUN_001696f4(void);
extern Flags g_titleFlags;

/* When FUN_001696f4 reports 1 and the request flag is set without the blocked flag, runs FUN_0014166c; always returns 0. */
u32 FUN_0013710c(void)
{
    if (FUN_001696f4() == 1) {
        if (g_titleFlags.requested != 0 && g_titleFlags.blocked == 0) {
            FUN_0014166c();
        }
    }
    return 0;
}

} /* extern "C" */

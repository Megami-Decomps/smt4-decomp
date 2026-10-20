#include "shard/Shard003A.h"

extern "C" {

extern s32 FUN_002deb84(void);
extern void FUN_003bb210(void);
extern void FUN_002e5924(s32 value);
extern void FUN_00169ddc(u32 value);

/* Script command: three-phase sequence on the frame counter; returns 1 once finished. */
u8 scrCommThreePhase2(void)
{
    if (FUN_002deb84() == 0) {
        FUN_003bb210();
        FUN_002e5924(3);
        return 0;
    }
    if (FUN_002deb84() == 1) {
        FUN_00169ddc(0x1000222);
        FUN_002e5924(1);
        return 0;
    }
    if (FUN_002deb84() < 3) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

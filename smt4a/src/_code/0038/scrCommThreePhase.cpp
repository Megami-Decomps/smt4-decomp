#include "shard/Shard0038.h"

extern "C" {

extern s32 FUN_002deb84(void);
extern void FUN_002c76c0(s32 value);
extern void FUN_0035c6ac(void);
extern void FUN_002e5924(s32 value);
extern void FUN_002852f0(s32 value);
extern void FUN_00169ddc(u32 value);

/* Script command: steps through a three-phase sequence on the frame counter; returns 1 once finished. */
u8 scrCommThreePhase(void)
{
    s32 step;

    if (FUN_002deb84() == 0) {
        FUN_002c76c0(1);
        FUN_0035c6ac();
        FUN_002e5924(3);
        return 0;
    }
    if (FUN_002deb84() != 1) {
        step = FUN_002deb84();
        if (step >= 3) {
            FUN_002c76c0(-1);
            FUN_002852f0(0);
        }
        return step >= 3;
    }
    FUN_00169ddc(0x1000222);
    FUN_002e5924(1);
    return 0;
}

} /* extern "C" */

#include "shard/Shard0042.h"

extern "C" {

extern s8 DAT_005891a4;
extern void FUN_00432084(void);
extern void FUN_00432104(void);
extern void FUN_004265f8(void);

void resetFlag5891A4And65f8(void)
{
    if (DAT_005891a4 != 0) {
        FUN_00432084();
        DAT_005891a4 = 0;
        FUN_00432104();
    }
    FUN_004265f8();
}

} /* extern "C" */

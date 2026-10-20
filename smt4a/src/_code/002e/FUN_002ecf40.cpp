#include "common.h"

extern "C" {

void FUN_0010d35c(void);
void FUN_002e7232(void);
s32 FUN_002ea4bc(void);
void lockedLeave(u8 *lock);
void lockedEnter(u8 *lock);
extern u8 DAT_0062e6a0[];

typedef struct FlagBlockView {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 flag;
} FlagBlockView;
extern FlagBlockView g_flagBlock;

/* Under the lock at 0x62E6A0: runs FUN_002ea4bc, FUN_002e7232 and FUN_0010d35c, then clears the flag at 3 of g_flagBlock if FUN_002ea4bc now reports 0. */
void FUN_002ecf40(void)
{
    s32 result;

    lockedEnter(DAT_0062e6a0);
    FUN_002ea4bc();
    FUN_002e7232();
    FUN_0010d35c();
    result = FUN_002ea4bc();
    if (result == 0) {
        g_flagBlock.flag = 0;
    }
    lockedLeave(DAT_0062e6a0);
}

} /* extern "C" */

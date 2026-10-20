#include "common.h"

extern "C" {

void FUN_0010d35c(void);
void sharedRefRelease(void);
s32 onlineInstantiationContextGetCurrent(void);
void lockedLeave(u8 *lock);
void lockedEnter(u8 *lock);
extern u8 DAT_0062e6a0[];

typedef struct FlagBlockView {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 flag;
} FlagBlockView;
extern FlagBlockView g_flagBlock;

/* Under the lock at 0x62E6A0: runs onlineInstantiationContextGetCurrent, sharedRefRelease and FUN_0010d35c, then clears the flag at 3 of g_flagBlock if onlineInstantiationContextGetCurrent now reports 0. */
void FUN_002ecf40(void)
{
    s32 result;

    lockedEnter(DAT_0062e6a0);
    onlineInstantiationContextGetCurrent();
    sharedRefRelease();
    FUN_0010d35c();
    result = onlineInstantiationContextGetCurrent();
    if (result == 0) {
        g_flagBlock.flag = 0;
    }
    lockedLeave(DAT_0062e6a0);
}

} /* extern "C" */

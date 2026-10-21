#include "shard/W6_W6Match4_CampCecResumeState.h"

extern "C" {
u8 campCecRecvExists(void);
u8 campCecRecvIsDone(void);
void FUN_0037bd00(void);
void sysPlaySe(u32 id);
void FUN_0031d890(void);
void FUN_00344348(s32 mode);

u32 campCecRecvWaitAndResume(CampCecResumeState* work)
{
    u32 result = 0;
    switch (campCecRecvExists()) {
    case 0:
        FUN_00344348(0);
        break;
    default:
        if (campCecRecvIsDone()) {
            FUN_0037bd00();
            sysPlaySe(0x10d);
            work->state = 1;
            work->unk14c = 0;
            FUN_0031d890();
            result = 3;
        }
        break;
    }
    return result;
}
}

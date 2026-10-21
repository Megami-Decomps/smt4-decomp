#include "shard/W6_W6Match4_CampCecResumeState.h"

extern "C" {
u8 campCecRankingExists(void);
u8 campCecRankingIsDone(void);
void campCecRankingDestroy(void);
void sysPlaySe(u32 id);
void FUN_0031d890(void);
void FUN_0037b7e4(void);

u32 campCecRankingWaitAndResume(CampCecResumeState* work)
{
    u32 result = 0;
    switch (campCecRankingExists()) {
    case 0:
        FUN_0037b7e4();
        break;
    default:
        if (campCecRankingIsDone()) {
            campCecRankingDestroy();
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

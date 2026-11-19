#include "shard/W6_W6Match4_CampCecResumeState.h"

extern "C" {
u8 campCecRecvExists(void);
u8 campCecRecvIsDone(void);
void campCecRecvDestroy(void);
void sysPlaySe(u32 id);
void partyPanelRefreshFromSlotTable(void);
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
            campCecRecvDestroy();
            sysPlaySe(0x10d);
            work->state = 1;
            work->unk14c = 0;
            partyPanelRefreshFromSlotTable();
            result = 3;
        }
        break;
    }
    return result;
}
}

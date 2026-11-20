#include "shard/W6_W6Match4_CampCecResumeState.h"

extern "C" {
u32 campCecRecvExists(void);
u32 campCecRecvIsDone(void);
void campCecRecvDestroy(void);
void sysPlaySe(u32 id);
void partyPanelRefreshFromSlotTable(void);
void campCecRecvCreate(s32 mode);

u32 FUN_002bfd2c(CampCecResumeState* work)
{
    u32 result = 0;
    switch (campCecRecvExists()) {
    case 0:
        campCecRecvCreate(1);
        break;
    default:
        if (campCecRecvIsDone() != 0) {
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

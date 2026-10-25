#include "gamedata/SaveLoadProcessState.h"
#include "shard/JobWork.h"

extern "C" {
void FUN_001a1f7c(s32);
s32 FUN_001edcf0(void);
void FUN_00247af8(s32, s32, s32, s32, s32);
void buttonHelpTexturesUnref(void);
void buttonHelpCreate(void);
void buttonHelpAcquireResources(void);
void buttonHelpRelease(void);
void uiFadeRelease(void);
void messageMainSetEnabled(s32);
s32 FUN_00193c50(void);
extern SaveByteSettings g_byteSettings;

// Hide normal messages while waiting for the save UI, then restore its resources.
u32 FUN_002ef8e4(u32 job)
{
    SaveLoadProcessWork24 *work = (SaveLoadProcessWork24 *)jobGetWork(job);
    switch (work->state) {
    case 8:
        buttonHelpAcquireResources();
        buttonHelpCreate();
        messageMainSetEnabled(0);
        FUN_00247af8(0, 0, 0, 0, 0);
        work->state = 9;
        break;
    case 9:
        if (FUN_001edcf0() == 1) {
            work->state = 10;
        } else {
            ++g_byteSettings.flags;
            if ((s32)g_byteSettings.flags >= 8) {
                ++g_byteSettings.value;
                if (g_byteSettings.value >= 3)
                    g_byteSettings.value = 0;
                g_byteSettings.flags = 0;
            }
        }
        break;
    case 10:
        if (FUN_00193c50()) {
            uiFadeRelease();
            FUN_001a1f7c(0);
        }
        messageMainSetEnabled(1);
        buttonHelpRelease();
        buttonHelpTexturesUnref();
        g_byteSettings.second = 1;
        return ~0u;
    }
    return 0;
}
}

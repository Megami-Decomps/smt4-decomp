#include "gamedata/SaveLoadProcessState.h"

extern "C" {
SaveLoadProcessWork24 *jobGetWork(u32 job);
s32 saveLoadGetValue(void);
void saveLoadSetValue(s32 value);
void FUN_00268250(s32 mode, u32 resource, s32 first, s32 second, s32 third);
s32 FUN_002a60f8(void);
void FUN_002bf464(void);
void helpTexturesRelease(void);
void campButtonHelpAcquire(void);
void campCommonBgRelease(void);
void campButtonHelpRelease(void);
void messageMainSetFlag(s32 enabled);

// Run the save/load overlay, animate its waiting indicator, then release shared help resources.
s32 FUN_0037116c(u32 job)
{
    // The indicator fields lie beyond the shared SaveLoadProcessA prefix.
    struct SaveLoadAnimationView {
        u8 unk00[2];
        u8 done; // 0x02
        u8 unk03[3];
        u16 frame; // 0x06
        s32 timer; // 0x08
    };
    extern SaveLoadAnimationView g_saveLoadProcess;
    SaveLoadProcessWork24 *work = jobGetWork(job);
    switch (work->state) {
    case 12:
        FUN_002bf464();
        campButtonHelpAcquire();
        messageMainSetFlag(0);
        FUN_00268250(0, work->unk14, 0, 0, 0);
        work->state = 13;
        break;
    case 13:
        if (FUN_002a60f8() == 1) {
            work->state = 14;
        } else {
            if (++g_saveLoadProcess.timer < 8)
                return 0;
            if (++g_saveLoadProcess.frame >= 3)
                g_saveLoadProcess.frame = 0;
            g_saveLoadProcess.timer = 0;
        }
        break;
    case 14:
        if (saveLoadGetValue()) {
            campCommonBgRelease();
            saveLoadSetValue(0);
        }
        messageMainSetFlag(1);
        campButtonHelpRelease();
        helpTexturesRelease();
        g_saveLoadProcess.done = 1;
        return -1;
    }
    return 0;
}
}

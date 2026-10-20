#include "common.h"

extern "C" {

/* The sound system's state block. */
typedef struct SoundSystem {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 initialized;
    /* 0x02 */ u8 flag;
    /* 0x03 */ u8 unk03[5];
    /* 0x08 */ u8 taskThread[1];         /* object torn down by FUN_001216bc */
} SoundSystem;

extern SoundSystem DAT_0044e908;
extern u8 DAT_004ea168;                  /* hardware manager */

__weak u32 nw_snd_SoundSystem_FinalizeHook(u32 arg);
void FUN_00130498(u32 arg);
u32 FUN_002bb020(void);
void FUN_002b4e64(void);
void nw_snd_internal_driver_SoundThread_GetInstance(void);
void FUN_002c37f0(void);
void FUN_002bafb0(void);
void FUN_002baf30(void);
void FUN_002baed8(void);
void FUN_002bae7c(void);
void FUN_001216bc(void *obj);
void FUN_00121970(void);
void nw_snd_internal_TaskThread_Destroy(void);
void nw_snd_internal_driver_SoundThread_Destroy(void);
void nw_snd_internal_driver_SoundThread_Finalize(void);
void nw_snd_internal_driver_ChannelManager_Finalize(void);
void nw_snd_internal_driver_VoiceManager_Finalize(void);
void nw_snd_internal_driver_HardwareManager_Finalize(void *manager);

/* Shuts the sound system down when it is running. */
void sndSystemFinalize(void)
{
    if (DAT_0044e908.initialized) {
        FUN_00130498(nw_snd_SoundSystem_FinalizeHook(FUN_002bb020()));
        nw_snd_internal_TaskThread_Destroy();
        FUN_002bb020();
        FUN_002b4e64();
        nw_snd_internal_driver_SoundThread_GetInstance();
        nw_snd_internal_driver_SoundThread_Destroy();
        nw_snd_internal_driver_SoundThread_GetInstance();
        FUN_002c37f0();
        FUN_002bafb0();
        nw_snd_internal_driver_ChannelManager_Finalize();
        FUN_002baf30();
        nw_snd_internal_driver_VoiceManager_Finalize();
        nw_snd_internal_driver_HardwareManager_Finalize(&DAT_004ea168);
        FUN_001216bc(DAT_0044e908.taskThread);
        nw_snd_internal_driver_SoundThread_GetInstance();
        nw_snd_internal_driver_SoundThread_Finalize();
        FUN_002baed8();
        FUN_00121970();
        FUN_002bae7c();
        FUN_00121970();
        DAT_0044e908.flag = 0;
        DAT_0044e908.initialized = 0;
    }
}

} /* extern "C" */

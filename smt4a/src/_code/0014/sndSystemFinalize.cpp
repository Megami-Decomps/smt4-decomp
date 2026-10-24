#include "common.h"

extern "C" {

/* The sound system's state block. */
typedef struct SoundSystem {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 initialized;
    /* 0x02 */ u8 flag;
    /* 0x03 */ u8 unk03[5];
    /* 0x08 */ u8 taskThread[1];         /* object torn down by FUN_0015e8c0 */
} SoundSystem;

extern SoundSystem DAT_0059dba4;
extern u8 DAT_00646b38;                  /* hardware manager */

__weak u32 nw_snd_SoundSystem_FinalizeHook(u32 arg);
void FUN_00174ae0(u32 arg);
u32 FUN_001b1998(void);
void FUN_0019065c(void);
void FUN_00197e28(void);
void _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
void FUN_002f59a8(void);
void FUN_00191548(void);
void FUN_0015ec28(void);
void nw_snd_internal_driver_VoiceManager_GetInstance(void);
void nw_snd_internal_driver_HardwareManager_Finalize(void *manager);
void FUN_0015e8c0(void *obj);
void objectCommandQueueGet(void);
void FUN_0015eb74(void);
void FUN_00191330(void);
void nw_snd_internal_driver_SoundThread_Destroy(void);
void nw_snd_internal_driver_SoundThread_Finalize(void);
void nw_snd_internal_driver_VoiceManager_Finalize(void);

/* Shuts the sound system down when it is running. */
void sndSystemFinalize(void)
{
    if (DAT_0059dba4.initialized) {
        FUN_00174ae0(nw_snd_SoundSystem_FinalizeHook(FUN_001b1998()));
        FUN_0019065c();
        FUN_001b1998();
        FUN_00197e28();
        _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
        nw_snd_internal_driver_SoundThread_Destroy();
        _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
        FUN_002f59a8();
        FUN_00191548();
        FUN_0015ec28();
        nw_snd_internal_driver_VoiceManager_GetInstance();
        nw_snd_internal_driver_VoiceManager_Finalize();
        nw_snd_internal_driver_HardwareManager_Finalize(&DAT_00646b38);
        FUN_0015e8c0(DAT_0059dba4.taskThread);
        _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
        nw_snd_internal_driver_SoundThread_Finalize();
        objectCommandQueueGet();
        FUN_0015eb74();
        FUN_00191330();
        FUN_0015eb74();
        DAT_0059dba4.flag = 0;
        DAT_0059dba4.initialized = 0;
    }
}

} /* extern "C" */

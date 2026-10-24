/* NON_MATCHING: register allocation: retail keeps the pre-advance cursor in a fresh register (mov r6,r5; add r5,..,r6) and emits a stm for the DAT_0059dbac pair; two compiler nop{0} before the VoiceManager call are missing. */
#include "AsdSDK/AsdDebugHooks.h"

/* Sound system memory layout, read from the caller's setup block. */
struct SndInitConfig {
    /* 0x00 */ u32 soundThreadMem;
    /* 0x04 */ u32 workMode;
    /* 0x08 */ u32 workSize;
    /* 0x0C */ u32 cmdQueueSize;
    /* 0x10 */ u32 taskParam;
    /* 0x14 */ u32 managerSize;
    /* 0x18 */ u32 commandSize;
    /* 0x1C */ u8 workEnabled;
    /* 0x1D */ u8 profileEnabled;
    /* 0x1E */ u8 subWorkEnabled;
    /* 0x20 */ s32 profileSize;
};

struct SndState {
    /* 0x0 */ u8 workEnabled;
    /* 0x1 */ u8 initialized;
    /* 0x2 */ u8 commandsQueued;
    /* 0x4 */ u32 voiceCount;
};

struct SndMemoryRange {
    /* 0x0 */ s32 base;
    /* 0x4 */ s32 size;
};

extern SndState DAT_0059dba4;
extern SndMemoryRange DAT_0059dbac;
extern u8 DAT_00646b38;

extern "C" {

int FUN_00174ae0(void);
int FUN_00174b5c(int, u32, SndMemoryRange *);
int FUN_0017561c(int, int, u32);
int objectCommandQueueGet(void);
int FUN_001757fc(void);
int FUN_00175858(int, int, u32, u32, int, u32, u32, u32, signed char);
int FUN_00175a38(int, int, int);
int FUN_00175a78(int, u32);
int FUN_00175a88(u8 *);
int FUN_00175bb8(int, int, int);
int FUN_00175c30(int, u32);
int FUN_00175c3c(void);
int FUN_00175cd8(void);
int FUN_00191330(void);
int FUN_00191548(void);
int FUN_001b1998(void);
int _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
int nw_snd_internal_driver_VoiceManager_GetInstance(void);
int nw_snd_internal_TaskManager_Initialize(void);
int nw_snd_internal_driver_SoundThread_SetProfileBuffer(int, int, s32);

// Lay out the sound system's memory block after `offset` and start the sound thread.
void FUN_0015de34(SndInitConfig *cfg, int offset)
{
    asdDebugHookPtrInt(NULL, 0x04000163);
    if (DAT_0059dba4.initialized == 0) {
        FUN_00175a88(&DAT_00646b38);
        if (DAT_0059dba4.commandsQueued == 0) {
            int queueStart = offset;
            int commandStart = queueStart + cfg->cmdQueueSize;
            int queuesSize = cfg->cmdQueueSize + cfg->commandSize;
            FUN_0017561c(objectCommandQueueGet(), queueStart, cfg->cmdQueueSize);
            FUN_0017561c(FUN_00191330(), commandStart, cfg->commandSize);
            offset += queuesSize;
            DAT_0059dba4.commandsQueued = 1;
        }
        int workA = 0;
        int workB = 0;
        if (cfg->workEnabled != 0) {
            workA = offset;
            offset = cfg->workSize + workA;
            if (cfg->workMode == 1 && cfg->subWorkEnabled != 0) {
                workB = offset;
                offset = cfg->workSize + workB;
            }
        }
        _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
        FUN_001757fc();
        int base = offset;
        offset = cfg->managerSize + base;
        FUN_001b1998();
        nw_snd_internal_TaskManager_Initialize();
        DAT_0059dbac.base = base;
        DAT_0059dbac.size = cfg->managerSize;
        int voiceEnd = FUN_00175c30(nw_snd_internal_driver_VoiceManager_GetInstance(), DAT_0059dba4.voiceCount) + offset;
        int voiceSize = FUN_00175c30(nw_snd_internal_driver_VoiceManager_GetInstance(), DAT_0059dba4.voiceCount);
        FUN_00175bb8(nw_snd_internal_driver_VoiceManager_GetInstance(), offset, voiceSize);
        int profileBase = FUN_00175a78(FUN_00191548(), DAT_0059dba4.voiceCount) + voiceEnd;
        int channelSize = FUN_00175a78(FUN_00191548(), DAT_0059dba4.voiceCount);
        FUN_00175a38(FUN_00191548(), voiceEnd, channelSize);
        FUN_00175c3c();
        FUN_00174b5c(FUN_00174ae0(), cfg->taskParam, &DAT_0059dbac);
        if (cfg->workEnabled != 0) {
            FUN_00175858(_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(), workA, cfg->workSize,
                         cfg->soundThreadMem, workB, cfg->workSize, cfg->soundThreadMem, cfg->workMode,
                         (signed char)cfg->profileEnabled);
        }
        if (cfg->profileEnabled != 0 && cfg->profileSize > 0) {
            nw_snd_internal_driver_SoundThread_SetProfileBuffer(
                _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(), profileBase, cfg->profileSize);
        }
        FUN_00175cd8();
        DAT_0059dba4.workEnabled = cfg->workEnabled;
        DAT_0059dba4.initialized = 1;
    }
}

}

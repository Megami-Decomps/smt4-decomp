/* NON_MATCHING: r2/r3 swap between the thread base and the -1 constant, and retail builds the arg0/arg1 stm base in ip. */
#include "AsdSDK/AsdDebug.h"

extern "C" {

typedef struct SaveLoadJob {
    /* 0x00 */ u8 mode;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 arg0;
    /* 0x08 */ u32 arg1;
    /* 0x0C */ s32 state;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 arg2;
    /* 0x18 */ u32 arg3;
    /* 0x1C */ u8 unk1C[4];
    /* 0x20 */ s32 unk20;
    /* 0x24 */ s32 unk24;
    /* 0x28 */ u8 unk28[0x2C];
    /* 0x54 */ s8 active;
    /* 0x55 */ u8 unk55[3];
    /* 0x58 */ s32 unk58;
    /* 0x5C */ u8 unk5C[4];
    /* 0x60 */ u32 unk60;
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u32 unk68;
} SaveLoadJob;

typedef struct SaveLoadThread {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ SaveLoadJob *job;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ s32 unk10;
} SaveLoadThread;

extern SaveLoadThread g_saveLoadThread;

void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Allocate and initialize the save/load thread's job record. */
void FUN_00268250(u8 mode, u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    SaveLoadJob *job;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\SaveLoad_Thread.cpp", 352);
    job = (SaveLoadJob *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(SaveLoadJob), 1);
    g_saveLoadThread.job = job;
    job->mode = mode;
    job->unk20 = -1;
    job->unk24 = -1;
    job->arg0 = arg0;
    job->arg1 = arg1;
    job->arg2 = arg2;
    job->arg3 = arg3;
    job->state = 0;
    job->unk68 = 0;
    job->unk60 = 0;
    job->unk64 = 0;
    job->active = 0;
    job->unk58 = -1;
    g_saveLoadThread.unk10 = -1;
    g_saveLoadThread.unk03 = 0;
    g_saveLoadThread.unk04 = 0;
}

} /* extern "C" */

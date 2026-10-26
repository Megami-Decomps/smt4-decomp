/* NON_MATCHING: step function of the save-write process (stage 0: snapshot the extra block and write it to slot file 0x62; stage 2: build the full save image of 0x2a7a4 bytes and write it; stages 1 and 3 wait for the write and either advance, fail to stage 5 or animate the wait counter; stages 4/5 end with a result); written from the decompilation, the goto into the stage-3 wait is rebuilt as a shared helper and the allocation arguments follow gameDataAllocBlocks */
#include "common.h"
#include "gamedata/SaveLoadProcess.h"
#include "AsdSDK/AsdDebug.h"

#define SAVE_STAGE_WRITE_EXTRA 0
#define SAVE_STAGE_WAIT_EXTRA 1
#define SAVE_STAGE_WRITE_FULL 2
#define SAVE_STAGE_WAIT_FULL 3
#define SAVE_STAGE_DONE 4
#define SAVE_STAGE_FAILED 5
#define SAVE_EXTRA_SIZE 0x20
#define SAVE_FULL_SIZE 0x2A7A4
#define SAVE_FULL_BODY_SIZE 0x2A71C
#define SAVE_TABLE_SIZE 0x80
#define SAVE_BODY_OFFSET 0x88
#define SAVE_WAIT_FRAMES 8
#define SAVE_WAIT_PHASES 3
#define SAVE_EXTRA_SLOTS 5
#define SAVE_CEC_SKIP 0x1C20
#define SAVE_RESULT_FAILED 0xFFFFFFFF
#define SAVE_ALLOC_HEAP 0x10000
#define SAVE_ALLOC_ALIGN 0x100

/* The save process's job record (observed fields). */
struct SaveProcessJob {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 stage;
    /* 0x08 */ u8 *buffer;
    /* 0x0C */ u32 size;
    /* 0x10 */ s32 slot;
    /* 0x14 */ s32 kind;
    /* 0x18 */ u8 unk18;
    /* 0x19 */ u8 flag;
};

struct SaveConfigView {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 hasExtraBlocks;
};

extern "C" {
extern u8 DAT_0057f6bd;
extern u8 DAT_0057f6c0;
extern u16 DAT_0057f6c2;      /* wait animation phase */
extern s32 DAT_0057f6c4;      /* wait animation frame */
extern SaveConfigView *DAT_00588e2c;
extern u32 DAT_005e20f4[];    /* cached extra block words */

SaveProcessJob *jobGetWork(void);
void *asdMemoryAlloc(s32 heap, s32 align, s32 unk08, u32 size, s32 fromFront);
void asdMemFree(void *block);
void wordPairCopy(void *destination, u32 source);
u32 *gameDataGetExtraBlock(void);
void FUN_00268250(u8 mode, u32 arg0, u32 arg1, void *buffer, u32 size);
void FUN_002c9104(void);
void gameDataBlocksSetIndexedValue(s32 index, u32 value);
u8 *gameDataBlocksGetSaveData(void);
u32 gameDataBlocksGetTable(void);
u32 gameDataBlocksGetSelectedValue(void);
u32 configGetSettings(void);
void titleConfigWriteToSave(void);
s32 campCecGet(void);
s32 FUN_00229c9c(void);
void rt_memcpy(void *destination, const void *source, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Frees the job's buffer and moves to `stage`. */
static __inline void saveFinishWrite(SaveProcessJob *job, u32 stage)
{
    asdMemFree(job->buffer);
    job->stage = stage;
    job->buffer = NULL;
}

/* Advances the little wait animation while the write is pending. */
static __inline void saveAdvanceWaitAnimation(void)
{
    DAT_0057f6c4++;
    if (DAT_0057f6c4 >= SAVE_WAIT_FRAMES) {
        DAT_0057f6c2++;
        if (DAT_0057f6c2 >= SAVE_WAIT_PHASES)
            DAT_0057f6c2 = 0;
        DAT_0057f6c4 = 0;
    }
}

u32 FUN_00371750(void)
{
    SaveProcessJob *job = jobGetWork();

    switch (job->stage) {
    case SAVE_STAGE_WRITE_EXTRA: {
        job->size = SAVE_EXTRA_SIZE;
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\SaveLoadProcess.cpp", 156);
        job->buffer = static_cast<u8 *>(asdMemoryAlloc(SAVE_ALLOC_HEAP, SAVE_ALLOC_ALIGN, 0, job->size, 1));
        titleConfigWriteToSave();
        s32 index = job->kind == 1 ? job->slot : job->slot - 1;
        gameDataBlocksSetIndexedValue(index, gameDataBlocksGetSelectedValue());
        if (DAT_00588e2c->hasExtraBlocks != 0) {
            s32 cec = campCecGet();
            s32 skip = index;
            if (cec == 0)
                skip = SAVE_CEC_SKIP;
            for (s32 i = 0; i < SAVE_EXTRA_SLOTS; i++) {
                if (cec == 0) {
                    DAT_005e20f4[i] = gameDataGetExtraBlock()[i];
                    gameDataBlocksSetIndexedValue(i, skip);
                } else if (i == skip) {
                    gameDataBlocksSetIndexedValue(i, 0);
                } else {
                    gameDataBlocksSetIndexedValue(i, DAT_005e20f4[i]);
                }
            }
        }
        rt_memcpy(job->buffer, gameDataGetExtraBlock(), SAVE_EXTRA_SIZE);
        FUN_00268250(2, 0, 0x62, job->buffer, job->size);
        job->stage = SAVE_STAGE_WAIT_EXTRA;
        break;
    }

    case SAVE_STAGE_WAIT_EXTRA:
        if (FUN_00229c9c() == 1) {
            saveFinishWrite(job, byte1IsZero() == 0 ? SAVE_STAGE_WRITE_FULL : SAVE_STAGE_FAILED);
            return 0;
        }
        saveAdvanceWaitAnimation();
        break;

    case SAVE_STAGE_WRITE_FULL: {
        job->size = SAVE_FULL_SIZE;
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\SaveLoadProcess.cpp", 243);
        job->buffer = static_cast<u8 *>(asdMemoryAlloc(SAVE_ALLOC_HEAP, SAVE_ALLOC_ALIGN, 0, job->size, 1));
        titleConfigWriteToSave();
        s8 slot = (s8)job->slot;
        s8 stored = job->kind == 1 ? slot : slot - 1;
        gameDataBlocksGetSaveData()[3] = stored;
        rt_memcpy(job->buffer, reinterpret_cast<void *>(gameDataBlocksGetTable()), SAVE_TABLE_SIZE);
        wordPairCopy(job->buffer + SAVE_TABLE_SIZE, configGetSettings());
        u8 *body = job->buffer + SAVE_BODY_OFFSET;
        __aeabi_memcpy4(body, gameDataBlocksGetSaveData(), SAVE_FULL_BODY_SIZE);
        *reinterpret_cast<u16 *>(body) = 4;
        job->buffer[SAVE_BODY_OFFSET + 2] = job->flag;
        FUN_002c9104();
        FUN_00268250(2, job->kind, job->slot, job->buffer, job->size);
        job->stage = SAVE_STAGE_WAIT_FULL;
        break;
    }

    case SAVE_STAGE_WAIT_FULL:
        if (FUN_00229c9c() == 1) {
            saveFinishWrite(job, byte1IsZero() == 0 ? SAVE_STAGE_DONE : SAVE_STAGE_FAILED);
            return 0;
        }
        saveAdvanceWaitAnimation();
        break;

    case SAVE_STAGE_DONE:
        DAT_0057f6bd = 1;
        DAT_0057f6c0 = 1;
        return SAVE_RESULT_FAILED;

    case SAVE_STAGE_FAILED:
        DAT_0057f6c0 = 0;
        DAT_0057f6bd = 1;
        return SAVE_RESULT_FAILED;
    }
    return 0;
}

} /* extern "C" */

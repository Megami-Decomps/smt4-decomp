/* NON_MATCHING: 40 lines. Both wait states test the write result as `if (failed) { free; state 5 } else { free;
 * next state }`, which gives retail's shared failure block and layout. Left: the constants 4, 1 and 0 sit in
 * r7/r8/r6 in retail (built: r6/r7/r8), so state 3's success stores pair into an `stm`, and retail lays out
 * state 5's result block before state 4's. The runner's flag is read through flag0CGet, a one-instruction getter
 * armlink inlined (retail's lone `ldrsb r0, [r0, #12]` before the call padding; the field read gave `ldrb`). */
#include "common.h"
#include "gamedata/SaveLoadProcess.h"
#include "gamedata/SaveLoadProcessState.h"
#include "gamedata/GameSaveBlocks.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/JobWork.h"

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

struct SaveConfigView {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s8 hasExtraBlocks;
};

extern "C" {
extern SaveByteSettings g_saveLoadProcess;
extern SaveConfigView *g_saveLoadRunner;
extern u32 DAT_005e20f4[];    /* cached extra block words */

void *asdMemoryAlloc(s32 heap, s32 align, s32 unk08, u32 size, s32 fromFront);
void asdMemFree(void *block);
u32 *gameDataGetExtraBlock(void);
void saveLoadThreadRequestInit(u8 mode, u32 arg0, u32 arg1, void *buffer, u32 size);
void clockRecordStartSeconds(void);
void gameDataBlocksSetIndexedValue(s32 index, u32 value);
u8 *gameDataBlocksGetSaveData(void);
u32 gameDataBlocksGetSelectedValue(void);
u32 configGetSettings(void);
s8 flag0CGet(const SaveConfigView *runner); /* armlink inlined; flag0CSet sets the flag */
void titleConfigWriteToSave(void);
s32 campCecGet(void);
s32 lazyScriptTaskStep(void);
void __aeabi_memcpy(void *destination, const void *source, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Advances the activity icon while the save thread works: a new phase (0-2) every eight frames. */
static __inline void saveAdvanceWaitAnimation(void)
{
    g_saveLoadProcess.flags++;
    if ((s32)g_saveLoadProcess.flags >= SAVE_WAIT_FRAMES) {
        g_saveLoadProcess.value++;
        if (g_saveLoadProcess.value >= SAVE_WAIT_PHASES)
            g_saveLoadProcess.value = 0;
        g_saveLoadProcess.flags = 0;
    }
}

/* Steps the save process: writes the countdown block to its own file, then the save image (table,
 * settings, save body) to the chosen slot, and reports the result. */
u32 saveLoadProcessWriteStep(u32 job)
{
    SaveLoadProcessWorkA *work = (SaveLoadProcessWorkA *)jobGetWork(job);

    switch (work->state) {
    case SAVE_STAGE_WRITE_EXTRA: {
        work->bufferSize = SAVE_EXTRA_SIZE;
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\SaveLoadProcess.cpp", 156);
        work->buffer = asdMemoryAlloc(SAVE_ALLOC_HEAP, SAVE_ALLOC_ALIGN, 0, work->bufferSize, 1);
        titleConfigWriteToSave();
        s32 index = work->slot - 1;
        if (work->mode == 1)
            index = work->slot;
        gameDataBlocksSetIndexedValue(index, gameDataBlocksGetSelectedValue());
        if (flag0CGet(g_saveLoadRunner) != 0) {
            s32 i;

            if (campCecGet() == 0) {
                index = SAVE_CEC_SKIP;
                for (i = 0; i < SAVE_EXTRA_SLOTS; i++) {
                    DAT_005e20f4[i] = gameDataGetExtraBlock()[i];
                    gameDataBlocksSetIndexedValue(i, index);
                }
            } else {
                for (i = 0; i < SAVE_EXTRA_SLOTS; i++) {
                    if (i == index) {
                        gameDataBlocksSetIndexedValue(i, 0);
                    } else {
                        gameDataBlocksSetIndexedValue(i, DAT_005e20f4[i]);
                    }
                }
            }
        }
        __aeabi_memcpy(work->buffer, gameDataGetExtraBlock(), SAVE_EXTRA_SIZE);
        saveLoadThreadRequestInit(2, 0, 0x62, work->buffer, work->bufferSize);
        work->state = SAVE_STAGE_WAIT_EXTRA;
        break;
    }

    case SAVE_STAGE_WAIT_EXTRA:
        if (lazyScriptTaskStep() == 1) {
            if (byte1IsZero() != 0) {
                asdMemFree(work->buffer);
                work->state = SAVE_STAGE_FAILED;
                work->buffer = NULL;
            } else {
                asdMemFree(work->buffer);
                work->state = SAVE_STAGE_WRITE_FULL;
                work->buffer = NULL;
            }
            break;
        }
        saveAdvanceWaitAnimation();
        break;

    case SAVE_STAGE_WRITE_FULL: {
        work->bufferSize = SAVE_FULL_SIZE;
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\SaveLoadProcess.cpp", 243);
        work->buffer = asdMemoryAlloc(SAVE_ALLOC_HEAP, SAVE_ALLOC_ALIGN, 0, work->bufferSize, 1);
        titleConfigWriteToSave();
        s32 option = work->slot - 1;
        if (work->mode == 1)
            option = work->slot;
        gameDataBlocksGetSaveData()[3] = option;
        __aeabi_memcpy(work->buffer, reinterpret_cast<void *>(gameDataBlocksGetTable()), SAVE_TABLE_SIZE);
        *(SaveSettingsImageA *)((GameSaveDataA *)work->buffer)->settings = *(const SaveSettingsImageA *)configGetSettings();
        u8 *body = (u8 *)work->buffer + SAVE_BODY_OFFSET;
        __aeabi_memcpy4(body, gameDataBlocksGetSaveData(), SAVE_FULL_BODY_SIZE);
        *reinterpret_cast<u16 *>(body) = 4;
        body[2] = work->saveKind;
        clockRecordStartSeconds();
        saveLoadThreadRequestInit(2, work->mode, work->slot, work->buffer, work->bufferSize);
        work->state = SAVE_STAGE_WAIT_FULL;
        break;
    }

    case SAVE_STAGE_WAIT_FULL:
        if (lazyScriptTaskStep() == 1) {
            if (byte1IsZero() != 0) {
                asdMemFree(work->buffer);
                work->state = SAVE_STAGE_FAILED;
                work->buffer = NULL;
            } else {
                asdMemFree(work->buffer);
                work->state = SAVE_STAGE_DONE;
                work->buffer = NULL;
            }
            break;
        }
        saveAdvanceWaitAnimation();
        break;

    case SAVE_STAGE_DONE:
        g_saveLoadProcess.first = 1;
        g_saveLoadProcess.fourth = 1;
        return SAVE_RESULT_FAILED;

    case SAVE_STAGE_FAILED:
        g_saveLoadProcess.first = 1;
        g_saveLoadProcess.fourth = 0;
        return SAVE_RESULT_FAILED;
    }
    return 0;
}

} /* extern "C" */

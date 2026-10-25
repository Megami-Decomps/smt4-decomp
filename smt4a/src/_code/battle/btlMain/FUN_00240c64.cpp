/* NON_MATCHING: readable rebuild from asm of the battle main creation; armcc here lays out the 0x16-byte stack record and the allocation traces differently, and orders the force-flag merges (retail merges the two masks as separate 32-bit ors). */
#include "AsdSDK/AsdDebug.h"
#include "sys/Task.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

/* The battle main state (only the fields the creation sets). */
struct BattleMainState {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u8 unk0004[0x7C];
    /* 0x0080 */ u8 unk0080[4];
    /* 0x0084 */ u8 transitionPending;
    /* 0x0085 */ u8 unk0085[7];
    /* 0x008C */ u32 phase;
    /* 0x0090 */ u8 unk0090[0x1C];
    /* 0x00AC */ s32 encounterKind;
    /* 0x00B0 */ s32 encounterFlags;
    /* 0x00B4 */ s32 encounterMode;
    /* 0x00B8 */ u8 unk00B8[0x34];
    /* 0x00EC */ s32 firstValue;
    /* 0x00F0 */ s32 secondValue;
    /* 0x00F4 */ u8 unk00F4[0x84];
    /* 0x0178 */ s32 stats[4];
    /* 0x0188 */ u8 statFlag;
    /* 0x0189 */ u8 unk0189[3];
    /* 0x018C */ s32 extraA;
    /* 0x0190 */ s32 extraB;
    /* 0x0194 */ u8 unk0194[0x4414];
    /* 0x45A8 */ u64 forceFlags;
};

/* The battle main globals (Apocalypse): the state, copies of the slot table and flag storage, and masks. */
struct BattleMainGlobals {
    /* 0x000 */ BattleMainState *state;
    /* 0x004 */ u8 *slotTableCopy;
    /* 0x008 */ u8 *flagStorageCopy;
    /* 0x00C */ u8 unk00C[0x1DC];
    /* 0x1E8 */ u64 requiredMask;
    /* 0x1F0 */ u8 unk1F0[0x10];
    /* 0x200 */ u64 forcedMask;
};

/* The 0x16-byte start record. */
struct BattleStartRecord {
    /* 0x00 */ s8 second;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ s16 value;
    /* 0x04 */ s16 stats[4];
    /* 0x0C */ u8 statFlag;
    /* 0x0D */ u8 unk0D;
    /* 0x0E */ s16 extraA;
    /* 0x10 */ s16 extraB;
    /* 0x12 */ s16 mode;
    /* 0x14 */ s16 kind;
};

extern "C" {
extern BattleMainGlobals g_btlMain;

void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 mode, u32 size, u32 tracked);
u32 taskCreateDraw(const char *, s32, s32, s32, TaskFunc, TaskFunc, void *, u32);
u8 *gameGetSlotTable(void);
u8 *flagValueGetStorage(void);
void __aeabi_memcpy4(void *dest, const void *source, u32 size);
void rt_memcpy(void *dest, const void *source, u32 size);
void FUN_0024d9c4(BattleMainState *state);
void FUN_0024bcd4(void *work);
void FUN_002def6c(void *work);
void FUN_0029853c(void *work);
void FUN_002df4a8(void *work);
void FUN_00298544(void *work);
void FUN_002df4b0(void *work);

/* Creates the battle main: its state, copies of the slot table and flag storage, the start
 * parameters (`start` of kind 4 or 0x16, or the default flags) and the main process with its draw tasks. */
void FUN_00240c64(void *start, s32 kind)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\dds\\program\\battle\\btlMain.cpp", 0x11F);
    BattleMainState *state = (BattleMainState *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x4E68, 1);
    g_btlMain.state = state;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\dds\\program\\battle\\btlMain.cpp", 0x123);
    g_btlMain.slotTableCopy = (u8 *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x2D30, 1);
    __aeabi_memcpy4(g_btlMain.slotTableCopy, gameGetSlotTable(), 0x2D30);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\dds\\program\\battle\\btlMain.cpp", 0x126);
    g_btlMain.flagStorageCopy = (u8 *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x10B8, 1);
    rt_memcpy(g_btlMain.flagStorageCopy, flagValueGetStorage(), 0x10B8);
    FUN_0024d9c4(state);
    if (start != NULL && kind > 0) {
        if (kind == 4) {
            state->firstValue = *(s32 *)start;
        } else if (kind == 0x16) {
            BattleStartRecord record = *(BattleStartRecord *)start;
            if (record.second != 0)
                state->secondValue = record.value;
            else
                state->firstValue = record.value;
            state->stats[0] = record.stats[0];
            state->stats[1] = record.stats[1];
            state->stats[2] = record.stats[2];
            state->stats[3] = record.stats[3];
            state->statFlag = record.statFlag;
            if (record.second != 0)
                state->statFlag = 0;
            state->extraA = record.extraA;
            state->extraB = record.extraB;
            state->encounterKind = record.mode;
            state->encounterFlags = record.kind;
            if (record.mode == 2)
                state->encounterMode = 2;
        }
    } else {
        if (g_btlMain.state != NULL)
            g_btlMain.state->phase = 1;
        state->forceFlags |= g_btlMain.requiredMask | g_btlMain.forcedMask;
    }
    state->forceFlags |= g_btlMain.forcedMask;
    state->transitionPending = 0;
    state->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("btlMain"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_0024bcd4), reinterpret_cast<AsdProcFunc>(FUN_002def6c), reinterpret_cast<u32>(g_btlMain.state));
    taskCreateDraw("BTLMAIN U", 0x75, 0, 0, FUN_0029853c, NULL, NULL, state->job);
    taskCreateDraw("BTLMAIN D", 0xEA, 0, 0, FUN_002df4a8, NULL, NULL, state->job);
    taskCreateDraw("BTLFADE UL", 0x85, 0, 0, FUN_00298544, NULL, NULL, state->job);
    taskCreateDraw("BTLFADE UR", 0xE1, 0, 0, FUN_00298544, NULL, NULL, state->job);
    taskCreateDraw("BTLFADE D", 0xED, 0, 0, FUN_002df4b0, NULL, NULL, state->job);
}

} /* extern "C" */

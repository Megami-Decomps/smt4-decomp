/* NON_MATCHING: allocation debug hooks are absent; candidate-reset loop and 64-bit mask scheduling differ. */
#include "battle/btlEncount.h"
#include "battle/btlMain.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern BtlEncounterGlobalsA g_btlEncount;
s32 btlEncounterUpdateFromJob(u32 job);
void btlEncountDestroy(u32 job);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
void asdMemFree(void *memory);
void FUN_00408184(s32 kind, s32 enabled);
void FUN_002e5924(s32 state);

// Create the encounter job, reset its candidate slots and queue the initial encounter state.
void FUN_002cf698(BtlMainStateA *battle)
{
    // The retail allocation and extra global mask extend beyond the shared prefix views.
    struct EncounterWork { BtlEncount base; u32 pending; };
    struct EncounterGlobalsView { BtlEncounterGlobalsA base; u64 initializedMask; };
    typedef char EncounterLocalViewOffsets[
        sizeof(EncounterWork) == 0x14 && offsetof(EncounterGlobalsView, initializedMask) == 0x60 ? 1 : -1];
    battle->encounterTask.job = taskCreateDraw(reinterpret_cast<const s8 *>("btlEncount Calc"), 4, 0, 0,
        btlEncounterUpdateFromJob, btlEncountDestroy, reinterpret_cast<u32>(battle), reinterpret_cast<void *>(battle->job));
    EncounterWork *work = static_cast<EncounterWork *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EncounterWork), 1));
    g_btlEncount.work = &work->base;
    work->base.state = 0;
    work->pending = 0;
    work->base.flags = 0;
    if (work->base.data != NULL) {
        asdMemFree(work->base.data);
        work->base.data = NULL;
    }
    for (s32 index = 0; index < 50; ++index) {
        BattleEncounterSlotA *entry = &battle->encounterSlots.entries[index];
        entry->id = -1;
        entry->category = -1;
        entry->listedId = -1;
    }
    FUN_00408184(2, 1);
    if (battle->encounterGate.disabled == 0 && battle->encounterSelection.id >= 0 &&
        !(battle->encounter.statusFlags & 0x2000000)) {
        const EncounterGlobalsView *globals = reinterpret_cast<const EncounterGlobalsView *>(&g_btlEncount);
        if (!(g_btlEncount.initialStateMask & battle->stateFlags64.bits) &&
            !(battle->stateFlags64.bits & globals->initializedMask)) {
            FUN_002e5924(2);
            battle->stateFlags64.bits |= globals->initializedMask;
        }
    }
}
}

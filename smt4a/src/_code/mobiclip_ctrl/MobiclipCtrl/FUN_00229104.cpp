/* NON_MATCHING: shared-global address derivation and clock multiply operand registers differ; decoder arguments and signed division match retail. */
#include "mobiclip_ctrl/MobiclipStartState.h"
#include "classes/Obj420a2c.h"
#include "classes/Obj557f00.h"
#include "shard/W6_W6Match2_LongDivision.h"

extern "C" {
__value_in_regs LongDivisionResult ll_sdiv(s64 dividend, s64 divisor);
extern MobiclipStartTable g_mobiclipPlayer;
extern Obj420a2c DAT_00617e70;
extern u32 DAT_00617e64;
extern Obj557f00 DAT_00617f18;
extern MobiclipStartClock g_mobiclipCtrl;
void FUN_004251e8(MobiclipStartTable *table, u32 first, u32 second);
void FUN_004250dc(MobiclipStartTable *table, u32 index);
const MobiclipStartRecord *movieRecordTableGetEntry(MobiclipStartTable *table, u32 index);
const void *tableRecordGetChecked(MobiclipStartTable *table, s32 index);

void sysBreakWithCallback(u32 error);
s32 stateObjectClassify(MobiclipStartTable *table, const MobiclipStartRecord *record);
u32 FUN_004241e0(ThreadControl *control);

// Initialize the primary movie decoder and optional audio stream, then start at the computed clock position.
void FUN_00229104()
{
    FUN_004251e8(&g_mobiclipPlayer, 0, 0);
    FUN_004250dc(&g_mobiclipPlayer, 0);
    const MobiclipStartRecord *record = movieRecordTableGetEntry(&g_mobiclipPlayer, table46COwnerGet(&g_mobiclipPlayer, 0));
    if (!DAT_00617e70.Obj420a2c::buildEntries((Obj420a2cOwner *)&DAT_00617e64,
                                           (Obj420a2cSource *)record, NULL))
        sysBreakWithCallback(1);
    if (g_mobiclipPlayer.audioIndex != -1) {
        const void *audioRecord = tableRecordGetChecked(&g_mobiclipPlayer, g_mobiclipPlayer.audioIndex);
        if (!DAT_00617f18.Obj557f00::open((u32)&DAT_00617e64, audioRecord, 1, 16))
            sysBreakWithCallback(1);
    }
    g_mobiclipCtrl.position = ll_sdiv((s64)((u64)record->ticks * 1000000), record->timeScale).quotient;
    s64 count = stateObjectClassify(&g_mobiclipPlayer, record);
    g_mobiclipCtrl.position *= count;
    FUN_004241e0(&g_mobiclipPlayer.thread);
}
}

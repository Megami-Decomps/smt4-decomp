/* NON_MATCHING: shared-global address derivation and clock multiply operand registers differ; decoder arguments and signed division match retail. */
#include "mobiclip_ctrl/MobiclipStartState.h"
#include "classes/Obj420a2c.h"
#include "shard/W6_W6Match2_LongDivision.h"


extern "C" {
__value_in_regs LongDivisionResult ll_sdiv(s64 dividend, s64 divisor);
extern MobiclipStartTable DAT_004c3b20;
extern Obj420a2c DAT_004c3a50;
extern u32 DAT_004c3a44;
extern u8 DAT_004c3af8[];
extern MobiclipStartClock g_mobiclipCtrl;
void FUN_00350bd0(MobiclipStartTable *table, u32 first, u32 second);
void FUN_00350ac4(MobiclipStartTable *table, u32 index);
u32 FUN_00350ab8(MobiclipStartTable *table, u32 index);
const MobiclipStartRecord *movieRecordTableGetEntry(MobiclipStartTable *table, u32 index);
const void *tableRecordGetChecked(MobiclipStartTable *table, s32 index);
u32 FUN_0034f488(void *audio, u32 *context, const void *record, u32 depth, u32 mode);
void FUN_002ad61c(u32 error);
s32 stateObjectClassify(MobiclipStartTable *table, const MobiclipStartRecord *record);
u32 FUN_0034fbc8(ThreadControl *control);

// Initialize the primary movie decoder and optional audio stream, then start at the computed clock position.
void FUN_001a14e8()
{
    FUN_00350bd0(&DAT_004c3b20, 0, 0);
    FUN_00350ac4(&DAT_004c3b20, 0);
    const MobiclipStartRecord *record = movieRecordTableGetEntry(&DAT_004c3b20, FUN_00350ab8(&DAT_004c3b20, 0));
    if (!DAT_004c3a50.Obj420a2c::buildEntries((Obj420a2cOwner *)&DAT_004c3a44,
                                           (Obj420a2cSource *)record, NULL))
        FUN_002ad61c(1);
    if (DAT_004c3b20.audioIndex != -1) {
        const void *audioRecord = tableRecordGetChecked(&DAT_004c3b20, DAT_004c3b20.audioIndex);
        if (!FUN_0034f488(DAT_004c3af8, &DAT_004c3a44, audioRecord, 1, 16))
            FUN_002ad61c(1);
    }
    g_mobiclipCtrl.position = ll_sdiv((s64)((u64)record->ticks * 1000000), record->timeScale).quotient;
    s64 count = stateObjectClassify(&DAT_004c3b20, record);
    g_mobiclipCtrl.position *= count;
    FUN_0034fbc8(&DAT_004c3b20.thread);
}
}

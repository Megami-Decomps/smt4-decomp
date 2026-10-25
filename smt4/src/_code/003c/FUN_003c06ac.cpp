/* NON_MATCHING: two setup loads are scheduled differently and the final control call is not tail-called. */
#include "battle/BattleAssetWork.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "gamedata/DevilRecord.h"

extern "C" {
extern BtlMainState *g_btlMain;
extern const char *const DAT_00439b70[];
extern const char DAT_004017dc[];
extern const char DAT_004017c0[];
extern const char DAT_004017ac[];
extern u32 DAT_00435d18;
const BattleTalkUnitReference *FUN_0027da30(u32 unitId, u32 selector);
s32 textFormatBuffer(char *output, const char *format, ...);
void asdLoadFileAsyncSimple(const char *path, void **file, u32 flags);
void FUN_003dadd8(u32 value);
s32 FUN_00256940(BtlMainState *battle, u32 unitId, u32 flags);
void btlReflectQueueKind34(u32 first, u32 second);
u32 FUN_00256898(u32 first, u32 second);

u32 FUN_003c06ac(BattleTalkWork *work)
{
    const BattleTalkUnitReference *unit = FUN_0027da30(work->unitId, work->selector);
    const DevilRecord *record = reinterpret_cast<const DevilRecord *>(devilGetRecord(unit->id));
    u32 tone = record->talk.alternate;
    if (tone == 99) {
        tone = record->talk.tone;
    }
    char path[128];
    textFormatBuffer(path, DAT_004017dc, DAT_00439b70[tone]);
    asdLoadFileAsyncSimple(path, &work->toneFile, 0);
    tone = record->talk.tone;
    work->toneId = tone;
    textFormatBuffer(path, DAT_004017c0, DAT_00439b70[tone]);
    asdLoadFileAsyncSimple(path, &work->messageFile, 0);
    asdLoadFileAsyncSimple(DAT_004017ac, &work->scriptFile, 0);
    FUN_003dadd8(DAT_00435d18);
    work->ready = 1;
    if (g_btlMain->talk.unitIndex >= 0 && FUN_00256940(g_btlMain, work->unitId, 1)) {
        btlReflectQueueKind34(0, 0);
    }
    return FUN_00256898(1, 0);
}
}

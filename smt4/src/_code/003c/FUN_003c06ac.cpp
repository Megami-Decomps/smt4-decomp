/* NON_MATCHING: only the first instructions differ: retail loads work->selector (`ldr r1, [r0, #32]`) before saving work in r4. */
#include "battle/BattleAssetWork.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "gamedata/NkmBaseRecord.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern BtlMainState *g_btlMain;
extern const char *const DAT_00439b70[];
extern const char DAT_004017dc[];
extern const char DAT_004017c0[];
extern const char DAT_004017ac[];
extern u32 DAT_00435d18;
const BattleTalkUnitReference *btlFindEntryBlockByMemberId(u32 unitId, u32 selector);
s32 textFormatBuffer(char *output, const char *format, ...);
void FUN_003dadd8(u32 value);
s32 FUN_00256940(BtlMainState *battle, u32 unitId, u32 flags);
void btlReflectQueueKind34(u32 first, u32 second);
u32 FUN_00256898(u32 first, u32 second);

// Start loading the talk tone, message and script files for a unit's devil.
static __inline void battleTalkLoadFiles(BattleTalkWork *work, const NkmBaseRecord *record)
{
    u32 tone = record->talkAlternate;
    if (tone == 99) {
        tone = record->talkTone;
    }
    char path[128];
    textFormatBuffer(path, DAT_004017dc, DAT_00439b70[tone]);
    asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&work->toneFile), 0);
    tone = record->talkTone;
    work->toneId = tone;
    textFormatBuffer(path, DAT_004017c0, DAT_00439b70[tone]);
    asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&work->messageFile), 0);
    asdLoadFileAsyncSimple(DAT_004017ac, reinterpret_cast<u32 *>(&work->scriptFile), 0);
}

u32 FUN_003c06ac(BattleTalkWork *work)
{
    const BattleTalkUnitReference *unit = btlFindEntryBlockByMemberId(work->unitId, work->selector);
    const NkmBaseRecord *record = reinterpret_cast<const NkmBaseRecord *>(nkmBaseGetRecord(unit->id));
    battleTalkLoadFiles(work, record);
    FUN_003dadd8(DAT_00435d18);
    work->ready = 1;
    BtlMainState *battle = g_btlMain;
    if (battle->talk.unitIndex >= 0 && FUN_00256940(battle, work->unitId, 1)) {
        btlReflectQueueKind34(0, 0);
    }
    return FUN_00256898(1, 0);
}
}

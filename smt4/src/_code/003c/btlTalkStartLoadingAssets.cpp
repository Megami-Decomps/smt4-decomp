#include <stdio.h>
#include "runtime/Stdio.h"
#include "battle/BattleAssetWork.h"
#include "battle/BtlEntry.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlMain.h"
#include "gamedata/NkmBaseRecord.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern BtlMainState *g_btlMain;
extern const char *const DAT_00439b70[];
static const char sTonePathFormat[] = "battle/talk/Tone%s.tbb";
extern const char DAT_004017c0[];
extern const char DAT_004017ac[];
extern u32 g_btlAux;
void btlEffectLoadTransitionFiles(u32 value);
s32 FUN_00256940(BtlMainState *battle, BtlMainState *owner, u32 flags);
void btlReflectQueueKind34(u32 first, u32 second);
u32 FUN_00256898(u32 first, u32 second);

/* Starts loading the talk tone, message and script files for a unit's devil. */
static __inline void battleTalkLoadFiles(BattleTalkWork *work, const NkmBaseRecord *record)
{
    u32 tone = record->talkAlternate;
    if (tone == 99) {
        tone = record->talkTone;
    }
    char path[128];
    sprintf(path, sTonePathFormat, DAT_00439b70[tone]);
    asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&work->toneFile), 0);
    tone = record->talkTone;
    work->toneId = tone;
    __2sprintf(path, DAT_004017c0, DAT_00439b70[tone]);
    asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&work->messageFile), 0);
    asdLoadFileAsyncSimple(DAT_004017ac, reinterpret_cast<u32 *>(&work->scriptFile), 0);
}

/* Starts the battle talk: loads the unit's tone, message and script files (the format of the first call is this
 * unit's own; the message format is shared with FUN_003c07ac and stays the image's word). */
u32 btlTalkStartLoadingAssets(BattleTalkWork *work)
{
    const BtlUnitData *unit = btlFindEntryBlockByMemberId(work->battle, work->memberId);
    const NkmBaseRecord *record = reinterpret_cast<const NkmBaseRecord *>(nkmBaseGetRecord(unit->id));
    battleTalkLoadFiles(work, record);
    btlEffectLoadTransitionFiles(g_btlAux);
    work->ready = 1;
    BtlMainState *battle = g_btlMain;
    if (battle->talk.unitIndex >= 0 && FUN_00256940(battle, work->battle, 1)) {
        btlReflectQueueKind34(0, 0);
    }
    return FUN_00256898(1, 0);
}
}

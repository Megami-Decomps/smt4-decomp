/* NON_MATCHING: uses pure UniteWorkA fields; 121 vs 121 rows, only the packed pairSort.pairs[*selected].resultId load uses two ldrs instead of retail's ldm (because UniteWorkA is 8-byte aligned). */
#include "code/Code002a_VariantA.h"
#include "code/Code002a_Smt4a.h"
#include "camp/Unite/UniteWork.h"
#include "shard/Shard0031.h"
#include "shard/Shard0032.h"
#include "ui/IfTouch.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
u32 uiScrollHandleActionsOrTouch(ScrollSelection *entry, const TextureTableEntryIV *rectangle, const s16 *ids,
    u32 firstKey, u32 secondKey, u32 thirdKey, s8 *blockedMode, s32 secondary, s32 notify);
s32 gridNavigationHandleConfirm(ScrollSelection *entry, s32 mode);
void skillHelpUpdateAttributeAndTarget(u32 id);
void buttonHelpSetText(u32 mode, u32 color);
u32 padQueryLogicalKey(u32 button, u32 mode);
void unitRecordBuild(u32 id, UnitRecord *record);
void uniteMenuChangeState(u32 channel, u32 mode);
void eventQueueAddUniqueIfValid(u32 event);

u32 FUN_003cca18(UniteWorkA *work, s8 blocked, u32 *selected)
{
    u32 result = 0;
    if (uiScrollHandleActionsOrTouch(&work->inheritanceA.slotList, NULL, work->touchA.slotRegions, -1, -1, -1,
            &blocked, 0, 1) != 0 || gridNavigationHandleConfirm(&work->inheritanceA.slotList, 1) != 0) {
        const s32 index = resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.slotList) + listCursorGetRowIfUnblocked((const Object *)&work->inheritanceA.slotList);
        const u16 id = work->inheritanceA.slots[index];
        if (id != 0) {
            skillHelpUpdateAttributeAndTarget(id);
        } else {
            buttonHelpSetText(0, 0xF4F4F4FF);
        }
    } else if ((padQueryLogicalKey(0, 1) | (s32)blocked) != 0) {
        work->inheritanceA.accepted = 1;
        if (work->history.previous == 30) {
            *selected = 0;
        } else {
            const s32 index = resourceRunOperationIfUnblocked((Object *)&work->pairSort.pairList) + listCursorGetRowIfUnblocked((const Object *)&work->pairSort.pairList);
            *selected = work->pairSort.sortedPairs[index];
        }
        UnitRecord record;
        unitRecordBuild(work->pairSort.pairs[*selected].resultId, &record);
        uniteMenuChangeState(0x10, 0);
        eventQueueAddUniqueIfValid(0x100020E);
    } else if (padQueryLogicalKey(1, 1) != 0) {
        eventQueueAddUniqueIfValid(0x100020F);
        work->inheritanceA.accepted = 1;
        const s32 index = resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.skillList) + listCursorGetRowIfUnblocked((const Object *)&work->inheritanceA.skillList);
        skillHelpUpdateAttributeAndTarget(work->inheritanceA.skills[index]);
    }
    return result;
}
}

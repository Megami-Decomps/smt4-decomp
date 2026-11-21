/* NON_MATCHING: case 3/4 cross-jumping now matches; only case 5 differs (retail uses strd r0, [r4, #12] with hoisted 0 in r0). */
#include "shard/W5_W5Match2_PairedIds.h"
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "addon/LookupRecord.h"
#include "code/Code0033.h"
#include "gamedata/GamePlayerData.h"

namespace {

// A saved slot: its demon id at 0x62.
struct SaveSlot {
    u8 unk00[0x62];
    u16 demonId;           // 0x62
};

// The recruit-skill event task.
struct SkillLearnTask {
    u8 unk00[8];
    s32 phase;             // 0x08
    s32 step;              // 0x0C
    s32 unk10;             // 0x10
    s32 frame;             // 0x14
    u8 unk18[4];
    u32 script;            // 0x1C
    u8 unk20[0x14];
    u32 slotId;            // 0x34
    u16 skillId;           // 0x38
    u8 unk3A[2];
    s32 partyIndex;        // 0x3C
    u8 placeInParty;       // 0x40
};
}

extern "C" {
s32 padQueryLogicalKey(s32 a, s32 b);
void eventQueueAddUniqueIfValid(u32 event);
SaveSlot *saveSlotFindById(u32 id);
void scrScriptProcessStartEntry(u32 script, s32 entry);
s32 scrRunOpcodesStub(u32 script);
s32 messageGetChoiceResult(void);
void obj04Finish(void);
s32 partySlotMatchesSelected(void);
void saveSlotTableSetPreferredId(u32 id);
s32 recordContainsPairedId(SaveSlot *slot, u16 skillId);
u32 FUN_004bd068(SaveSlot *slot);
void partyRecordSetEquippedItemClampRank(SaveSlot *slot, u16 skillId, u32 value);

/* Step the "learn a skill" event: wait for the fade, grant or confirm the skill, run the prompt scripts. */
u32 FUN_0041774c(SkillLearnTask *task)
{
    switch (task->step) {
    case 0:
        task->frame = 0;
        task->step = 1;
        // fall through
    case 1:
        if (padQueryLogicalKey(0, 1) != 0 || (padQueryLogicalKey(9, 0) != 0 && task->frame > 2)) {
            eventQueueAddUniqueIfValid(0x100020e);
            obj04Finish();
            if (task->placeInParty != 0) {
                if (task->partyIndex >= 0 && playerHasSkill(task->skillId) == 0) {
                    PlayerDataA *party = gameGetPlayerData();
                    party->skills[task->partyIndex] = task->skillId;
                    party->skillRanks[task->partyIndex] = 1;
                }
                task->step = 5;
            } else {
                SaveSlot *slot = saveSlotFindById(task->slotId & 0xffff);
                if (recordContainsPairedId(slot, task->skillId) == 0) {
                    partyRecordSetEquippedItemClampRank(slot, task->skillId, FUN_004bd068(slot));
                }
                task->step = 2;
            }
        }
        break;
    case 2: {
        SaveSlot *slot = saveSlotFindById(task->slotId & 0xffff);
        if (partySlotMatchesSelected() != 0) {
            task->step = 5;
            break;
        }
        FUN_00333dc8(1);
        scrSetStringSlot(0, reinterpret_cast<const char *>(table01RecordLookupForContent(slot->demonId)));
        scrScriptProcessStartEntry(task->script, 0x13);
        task->step = 3;
    }
        // fall through
    case 3:
        if (scrRunOpcodesStub(task->script) == 2) {
            if (messageGetChoiceResult() == 0) {
                saveSlotTableSetPreferredId(task->slotId & 0xffff);
                SaveSlot *slot = saveSlotFindById(task->slotId & 0xffff);
                scrSetStringSlot(0, reinterpret_cast<const char *>(table01RecordLookupForContent(slot->demonId)));
                scrScriptProcessStartEntry(task->script, 0x14);
                task->step = 4;
                break;
            }
            FUN_00333dc8(0);
            task->step = 5;
        }
        break;
    case 4:
        if (scrRunOpcodesStub(task->script) != 2) {
            break;
        }
        FUN_00333dc8(0);
        task->step = 5;
        break;
    case 5:
        task->phase = 6;
        task->step = 0;
        task->unk10 = 0;
        break;
    }
    task->frame++;
    return 0;
}
}

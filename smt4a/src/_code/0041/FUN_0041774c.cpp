/* NON_MATCHING: state machine matches except armcc cross-jumps the shared "close prompt" tail differently (retail: case 4 branches back into case 3 tail; one row more) and orders the hoisted constants r0/r6 differently. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "addon/LookupRecord.h"
#include "code/Code0033.h"

namespace {
// A record of the player's party: skill ids at 0x34, a validity byte per skill at 0x44.
struct PlayerParty {
    u8 unk00[0x34];
    u16 skills[8];         // 0x34
    u8 filled[8];          // 0x44
};

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
s32 FUN_001517b4(s32 a, s32 b);
void eventQueueAddUniqueIfValid(u32 event);
PlayerParty *gameGetPlayerData(void);
SaveSlot *saveSlotFindById(u32 id);
void scrScriptProcessStartEntry(u32 script, s32 entry);
s32 scrRunOpcodesStub(u32 script);
s32 messageGetChoiceResult(void);
void obj04Finish(void);
s32 FUN_003df4a4(u16 skillId);
s32 partySlotMatchesSelected(void);
void FUN_003e4e4c(u32 id);
s32 recordContainsPairedId(SaveSlot *slot, u16 skillId);
u32 FUN_004bd068(SaveSlot *slot);
void FUN_004bd6b0(SaveSlot *slot, u16 skillId, u32 value);

/* Step the "learn a skill" event: wait for the fade, grant or confirm the skill, run the prompt scripts. */
u32 FUN_0041774c(SkillLearnTask *task)
{
    switch (task->step) {
    case 0:
        task->frame = 0;
        task->step = 1;
        // fall through
    case 1:
        if (FUN_001517b4(0, 1) != 0 || (FUN_001517b4(9, 0) != 0 && task->frame > 2)) {
            eventQueueAddUniqueIfValid(0x100020e);
            obj04Finish();
            if (task->placeInParty != 0) {
                if (task->partyIndex >= 0 && FUN_003df4a4(task->skillId) == 0) {
                    PlayerParty *party = gameGetPlayerData();
                    party->skills[task->partyIndex] = task->skillId;
                    party->filled[task->partyIndex] = 1;
                }
                task->step = 5;
            } else {
                SaveSlot *slot = saveSlotFindById(task->slotId & 0xffff);
                if (recordContainsPairedId(slot, task->skillId) == 0) {
                    FUN_004bd6b0(slot, task->skillId, FUN_004bd068(slot));
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
        FUN_003180c4(0, reinterpret_cast<const char *>(FUN_00180114(slot->demonId)));
        scrScriptProcessStartEntry(task->script, 0x13);
        task->step = 3;
    }
        // fall through
    case 3:
        if (scrRunOpcodesStub(task->script) == 2) {
            if (messageGetChoiceResult() == 0) {
                FUN_003e4e4c(task->slotId & 0xffff);
                SaveSlot *slot = saveSlotFindById(task->slotId & 0xffff);
                FUN_003180c4(0, reinterpret_cast<const char *>(FUN_00180114(slot->demonId)));
                scrScriptProcessStartEntry(task->script, 0x14);
                task->step = 4;
                break;
            }
            FUN_00333dc8(0);
            task->step = 5;
        }
        break;
    case 4:
        if (scrRunOpcodesStub(task->script) == 2) {
            FUN_00333dc8(0);
            task->step = 5;
        }
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

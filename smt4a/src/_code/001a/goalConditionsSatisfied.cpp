/* Slot scan: a goal whose first condition is kind 5 needs one filled slot whose record has every listed bit. */
#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

struct SlotTable {
    u32 firstWord;              // 0x00
    u8 unk04[0x1c88 - 4];
    s8 slotIds[1];              // 0x1c88
};

struct RosterEntry {
    u8 unk00[4];
    u16 counts[4];              // 0x04
};

extern "C" {

s32 gameOptionsClassifyMode(void);
s32 FUN_001ba570(void);
s32 gameDataTableGetFlag(void);
s32 gameSlotTableFindFree(void);
SlotTable* gameGetSlotTable(void);
u8* gameGetSlotRecord(s32 slot);
s32 bitSetTest(u8* record, u16 bit);
u32 gameCountersGetWord(u16 counter);
u16 flagValueRead(s32 id);
s32 partyFindSlotById(u16 id);
RosterEntry* gameFindRosterEntry(s32 id);

// Returns whether every condition of goal `id` is currently satisfied.
s32 goalConditionsSatisfied(s32 id)
{
    QuestRecordA* goal = questDataGetRecord(id);
    s32 result = 1;
    if (goal == NULL) return 0;

    if (goal->kind == 4 || goal->kind == 5) {
        if (gameOptionsClassifyMode() == 0) {
            result = 0;
        } else if (FUN_001ba570() != 0) {
            result = 0;
        }
    } else if (goal->kind == 6) {
        if (gameDataTableGetFlag() == 4) result = 0;
    } else if (gameOptionsClassifyMode() == 2 && FUN_001ba570() != 0) {
        result = 0;
    } else if (goal->requirements[0].kind == 5) {
        // Needs one filled slot whose record satisfies every listed bit.
        s32 slotCount = gameSlotTableFindFree();
        s8* slotIds = gameGetSlotTable()->slotIds;
        result = 0;
        for (s32 slot = 0; slot < slotCount; slot++) {
            if (slotIds[slot] < 0) continue;
            u8* record = gameGetSlotRecord(slotIds[slot]);
            s32 satisfied = 1;
            for (s32 i = 0; i < 4; i++) {
                QuestRequirement *condition = &goal->requirements[i];
                switch (condition->kind) {
                case 0:
                    break;
                case 5:
                    if (!bitSetTest(record, condition->id)) satisfied = 0;
                    break;
                default:
                    break;
                }
                if (!satisfied) break;
            }
            if (satisfied) {
                result = 1;
                break;
            }
        }
    } else {
        for (s32 i = 0; i < 4; i++) {
            switch (goal->requirements[i].kind) {
            case 1: {
                u32 progress = flagValueRead(goal->requirements[i].id);
                if (goal->requirements[i].count > progress) result = 0;
                break;
            }
            case 2:
                if (goal->kind == 1) {
                    RosterEntry* roster = gameFindRosterEntry(id);
                    if (roster == NULL || goal->requirements[i].count > roster->counts[i]) result = 0;
                } else {
                    if (partyFindSlotById(goal->requirements[i].id) < 0) result = 0;
                }
                break;
            case 3:
                if (gameGetSlotTable()->firstWord < goal->requirements[i].count) result = 0;
                break;
            case 6: {
                s32 slotCount = gameSlotTableFindFree();
                s8* slotIds = gameGetSlotTable()->slotIds;
                s32 found = 0;
                for (s32 slot = 0; slot < slotCount; slot++) {
                    if (slotIds[slot] >= 0) {
                        u8* record = gameGetSlotRecord(slotIds[slot]);
                        u32 count = bitArrayCountSet1to500(record + 0x68);
                        if (goal->requirements[i].count <= count) {
                            found = 1;
                            break;
                        }
                    }
                }
                if (!found) result = 0;
                break;
            }
            case 7:
                result = 0;
                break;
            case 8:
                if (gameCountersGetWord(goal->requirements[i].id & 0xff) < goal->requirements[i].count) result = 0;
                break;
            default:
                break;
            }
            if (result == 0) break;
        }
    }
    return result;
}

} /* extern "C" */

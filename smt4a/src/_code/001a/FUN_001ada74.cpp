/* NON_MATCHING: readable rewrite from retail disassembly (170 vs ~168 rows); differs in the slot-scan loop (retail keeps a loop-invariant flag in r6) and compare operand order */
#include "common.h"
#include "shard/bitArrayCountSet1to500.h"

// One requirement of a goal: a kind and its argument/threshold.
struct GoalCondition {
    u16 kind;       // 0x00
    u16 arg;        // 0x02
    u32 value;      // 0x04
};

// Goal (achievement-like) definition: only the fields read here.
struct GoalDefinition {
    u8 unk00[6];
    u8 category;                // 0x06
    u8 unk07[0xf9];
    GoalCondition conditions[4];    // 0x100
};

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

GoalDefinition* FUN_001ad9b4(s32 id);
s32 gameOptionsClassifyMode(void);
s32 FUN_001ba570(void);
s32 gameDataTableGetFlag(void);
s32 gameSlotTableFindFree(void);
SlotTable* gameGetSlotTable(void);
u8* gameGetSlotRecord(s32 slot);
s32 bitSetTest(u8* record, u16 bit);
u32 gameCountersGetWord(u16 counter);
u32 FUN_001ba3d4(u16 arg);
s32 partyFindSlotById(u16 id);
RosterEntry* gameFindRosterEntry(s32 id);

// Returns whether every condition of goal `id` is currently satisfied.
s32 FUN_001ada74(s32 id)
{
    GoalDefinition* goal = FUN_001ad9b4(id);
    s32 result = 1;
    if (goal == NULL) return 0;

    if (goal->category == 4 || goal->category == 5) {
        if (gameOptionsClassifyMode() == 0) {
            result = 0;
        } else if (FUN_001ba570() != 0) {
            result = 0;
        }
    } else if (goal->category == 6) {
        if (gameDataTableGetFlag() == 4) result = 0;
    } else if (gameOptionsClassifyMode() == 2 && FUN_001ba570() != 0) {
        result = 0;
    } else if (goal->conditions[0].kind == 5) {
        // Needs one filled slot whose record satisfies every listed bit.
        s32 slotCount = gameSlotTableFindFree();
        s8* slotIds = gameGetSlotTable()->slotIds;
        result = 0;
        for (s32 slot = 0; slot < slotCount; slot++) {
            if (slotIds[slot] < 0) continue;
            u8* record = gameGetSlotRecord(slotIds[slot]);
            s32 i;
            for (i = 0; i < 4; i++) {
                GoalCondition* condition = &goal->conditions[i];
                if (condition->kind == 5 && !bitSetTest(record, condition->arg)) break;
            }
            if (i >= 4) {
                result = 1;
                break;
            }
        }
    } else {
        for (s32 i = 0; i < 4; i++) {
            switch (goal->conditions[i].kind) {
            case 1:
                if (FUN_001ba3d4(goal->conditions[i].arg) < goal->conditions[i].value) result = 0;
                break;
            case 2:
                if (goal->category != 1) {
                    if (partyFindSlotById(goal->conditions[i].arg) < 0) result = 0;
                } else {
                    RosterEntry* roster = gameFindRosterEntry(id);
                    if (roster == NULL || goal->conditions[i].value > roster->counts[i]) result = 0;
                }
                break;
            case 3:
                if (gameGetSlotTable()->firstWord < goal->conditions[i].value) result = 0;
                break;
            case 6: {
                s32 slotCount = gameSlotTableFindFree();
                s8* slotIds = gameGetSlotTable()->slotIds;
                s32 found = 0;
                for (s32 slot = 0; slot < slotCount; slot++) {
                    if (slotIds[slot] >= 0) {
                        u8* record = gameGetSlotRecord(slotIds[slot]);
                        if ((u32)bitArrayCountSet1to500(record + 0x68) >= goal->conditions[i].value) {
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
                if (gameCountersGetWord(goal->conditions[i].arg & 0xff) < goal->conditions[i].value) result = 0;
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

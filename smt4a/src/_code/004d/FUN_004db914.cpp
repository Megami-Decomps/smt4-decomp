/* NON_MATCHING: readable rewrite from retail disassembly compiles (212 vs ~206 rows); goto-based early exits and register allocation differ from retail's single result slot */
#include "common.h"
#include "gamedata/DataTableSections.h"

// Fusion result descriptor (parents, product, cost), as written by the fusion preview.
struct FusionResult {
    u32 firstParent : 15;
    u32 secondParent : 15;
    u32 pad : 2;
    u32 keep : 2;
    u32 product : 15;
    u32 cost : 15;
};

// Demon info record: id, race (byte 2) and level (halfword 6).
struct DevilInfo {
    u16 id;                 // 0x00
    u8 race;                // 0x02
    u8 unk03[3];
    u16 level;              // 0x06
};

struct SlotRecord {
    u8 unk00[0x62];
    u16 id;                 // 0x62
};

struct SlotTable {
    u8 unk0000[0x1c88];
    s8 slots[24];           // 0x1c88
};

// Candidate table per race: the entry count and the sorted (id, level) pairs.
struct UniteContext {
    u8 count[0x44];         // 0x00: entries per race table
    u8* tables[1];          // 0x44: per-race sorted entry arrays (4 bytes each: id, level)
};

struct DataTable5 {
    u8 unk00[7];
    u8 maxLevelStep;        // 0x07
};

extern "C" {

s32 FUN_004dc3b4(UniteContext* ctx, u16* first, u16* second, FusionResult* result);
DevilInfo* FUN_00184310(u32 id);
u32 randRange(u32 range);
s32 slotRecordFindById(u32 id);
u32 FUN_0023e32c(u16* first, u16* second, u32 id, u32 level);
s32 FUN_002a4b28(u32 id);
u32 uniteFindClosestEligibleCandidate(UniteContext* ctx, u32 race, u32 level, s32 flag);
SlotTable* gameGetSlotTable(void);
SlotRecord* gameGetSlotRecord(s32 slot);

// Picks the product of a fusion that lands on a level with no exact recipe: occasionally a
// special demon, otherwise a nearby-level demon of a fixed race, then the closest level.
// Returns 1 and stores the product in `result` when one was found.
u32 FUN_004db914(UniteContext* ctx, u16* first, u16* second, FusionResult* result)
{
    u32 found = 0;
    DataTable5* levels = (DataTable5 *)dataTable5GetEntries();
    if (FUN_004dc3b4(ctx, first, second, result) == 0) return 0;

    DevilInfo* info = FUN_00184310(result->product);
    u16 level = dataTableChooseWeightedByteId() + info->level;
    if (randRange(99) < 5) {
        if (slotRecordFindById(0x218) == 0) {
            found = 0x218;
            goto done;
        }
        for (u16 step = 1; step < level; step++) {
            found = FUN_0023e32c(first, second, info->id, step);
            if (found != 0) goto done;
        }
    }

    {
        u32 base = 25;
        for (u32 id = 0; id <= 1200; id++) {
            if (FUN_00184310(id & 0xffff)->race == 0x33 && FUN_002a4b28(id & 0xffff) != 0) {
                base = 10;
                break;
            }
        }
        u8 limit = base + 25;
        for (u32 id = 0; id <= 1200; id++) {
            if (FUN_00184310(id & 0xffff)->race == 0x2a && FUN_002a4b28(id & 0xffff) != 0) {
                limit = base + 10;
                break;
            }
        }
        u32 race = 0;
        u32 roll = randRange(99);
        bool pickRace = true;
        if (roll < base) {
            race = 0x33;
        } else if (roll < limit) {
            race = 0x2a;
        } else {
            pickRace = false;
        }
        if (pickRace) {
            u16 wanted = level;
            do {
                u32 candidateId = uniteFindClosestEligibleCandidate(ctx, race & 0xff, wanted, 1);
                found = candidateId;
                DevilInfo* candidate = FUN_00184310(candidateId);
                if (candidate->id != info->id && candidate->id != *first && candidate->id != *second && candidate->level <= wanted) {
                    s32 slot;
                    for (slot = 0; slot < 24; slot++) {
                        s8 member = gameGetSlotTable()->slots[slot];
                        if ((u8)member < 24 && gameGetSlotRecord(member)->id == candidate->id) break;
                    }
                    if (slot == 24) {
                        if (found != 0) goto done;
                        break;
                    }
                }
                wanted = candidate->level - 1;
            } while (*reinterpret_cast<u16*>(ctx->tables[race] + (ctx->count[race] * 4 - 2)) < wanted);
        } else if (found != 0) {
            goto done;
        }
    }

    found = FUN_0023e32c(first, second, info->id, level);
    if (found != 0) goto done;
    for (u16 step = 1; step <= 5; step++) {
        if ((u32)level + step > levels->maxLevelStep) continue;
        found = FUN_0023e32c(first, second, result->product, level + step);
        if (found != 0) goto done;
        break;
    }
    if ((s32)(level - info->level) < 1) return 0;
    found = FUN_0023e32c(first, second, result->product, (u16)(level - 1));
    if (found == 0) return 0;

done:
    result->product = found;
    return 1;
}

} /* extern "C" */

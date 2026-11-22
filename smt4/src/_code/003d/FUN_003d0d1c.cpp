/* NON_MATCHING: 166 lines; the selection loop is written plainly (armcc unrolls it by two as retail does). Remaining:
 * retail keeps the present-flag loop rolled with a signed counter and tests bits 2|0x20 apart from 0x10, stores the
 * candidates' empty slot as `mvn #0` (this build `mov #255`), and allocates the candidate count and buffer to other
 * registers. `formation` is likely the battle main state holder (BtlMainState: entries at 0x1FC0, the 64-bit mask at
 * 0x1FD0). */
#include "common.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/NkmBaseRecord.h"

// Candidate party member for the battle formation: slot index, rank and race.
struct FormationCandidate {
    u8 slot;        // 0x00
    u8 rank;        // 0x01
    u8 race;        // 0x02
    u8 pad;
};


struct SlotTable {
    u8 unk0000[0x90f0];
    s8 party[0x1b];         // 0x90f0 (slot ids; 0x910b holds the count below)
};

struct BattleFormation {
    u8 unk0000[0x1fc0];
    u8* units;              // 0x1fc0 (0x288 bytes each)
    u8 unk1fc4[0x1fd0 - 0x1fc4];
    u64 selectedMask;       // 0x1fd0
    u8 unk1fd8[8];
    u8 selected[4];         // 0x1fe0 (written with 0xff fill for 3 entries)
};

struct BattleSetup {
    u8 unk00[0x38];
    u8 present[4];          // 0x38
};

extern "C" {

void __aeabi_memset4(void* block, u32 size, s32 value);
SlotTable* gameGetSlotTable(void);
u8* asdOperatorNewC(u32 size);
s32 flagWordTestBit(StatBlock* unit, u32 bit);
void qsort(void* base, u32 count, s32 size, s32 (*compare)(const void*, const void*));
s32 sortCompareRankThenOrder(const void* a, const void* b);
void asdMemFreeIfNotNull(void* block);

// Picks up to three party members for the battle formation: marks the living
// slots present, ranks the eligible members and records the chosen ones.
void FUN_003d0d1c(BattleFormation** formation, BattleSetup* setup)
{
    for (u32 i = 0; i < 4; i++) {
        u32 flags = *reinterpret_cast<u32*>((*formation)->units + i * 0x288);
        if ((flags & 2) != 0 || (flags & 0x20) != 0) continue;
        if ((flags & 0x10) != 0) continue;
        setup->present[i] = 1;
    }
    __aeabi_memset4(&(*formation)->selected, 3, -1);

    s32 slotLimit = *reinterpret_cast<u8*>(reinterpret_cast<u8*>(gameGetSlotTable()) + 0x910b);
    FormationCandidate* candidates = reinterpret_cast<FormationCandidate*>(asdOperatorNewC(slotLimit * 4));
    for (s32 i = 0; i < slotLimit; i++) {
        candidates[i].slot = -1;
        candidates[i].rank = 0;
        candidates[i].race = 0;
    }

    s32 count = 0;
    for (s32 i = 0; i < slotLimit; i++) {
        if (gameGetSlotTable()->party[i] < 0) continue;
        StatBlock* unit = gameGetUnitRecord(gameGetSlotTable()->party[i]);
        if (unit != NULL && flagWordTestBit(unit, 1) == 0 && flagWordTestBit(unit, 10) == 0 &&
            flagWordTestBit(unit, 2) == 0) {
            candidates[count].slot = i;
            candidates[count].rank = unit->level;
            candidates[count].race = nkmBaseGetRecord(unit->id)->race;
            count++;
        }
    }
    if (count != 0) {
        qsort(candidates, count, 4, sortCompareRankThenOrder);
        if (count > 3) count = 3;
        for (s32 i = 0; i < count; i++) {
            (*formation)->selectedMask |= 1 << (candidates[i].slot + 1);
            (*formation)->selected[i] = candidates[i].slot + 1;
        }
    }
    asdMemFreeIfNotNull(candidates);
}

} /* extern "C" */

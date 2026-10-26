/* NON_MATCHING: the selection masks now use int shifts sign-extended into the 64-bit mask (no __aeabi_llsl); retail keeps the present-flag loop rolled with a signed counter and tests bits 2|0x20 apart from 0x10, and unrolls the selection loop. */
#include "common.h"

// Candidate party member for the battle formation: slot index, rank and race.
struct FormationCandidate {
    u8 slot;        // 0x00
    u8 rank;        // 0x01
    u8 race;        // 0x02
    u8 pad;
};

struct PartyUnit {
    u8 unk00[0x46];
    u16 id;         // 0x46
    u8 rank;        // 0x48
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

struct DevilRaceRecord {
    u8 unk00[2];
    u8 race;                // 0x02
};

extern "C" {

void __aeabi_memset4(void* block, u32 size, s32 value);
SlotTable* gameGetSlotTable(void);
u8* asdOperatorNewC(u32 size);
PartyUnit* gameGetUnitRecord(s32 slot);
s32 flagWordTestBit(PartyUnit* unit, u32 bit);
DevilRaceRecord* devilGetRecord(u32 id);
void FUN_002b7bca(void* base, u32 count, s32 size, s32 (*compare)(const void*, const void*));
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

    u32 slotLimit = *reinterpret_cast<u8*>(reinterpret_cast<u8*>(gameGetSlotTable()) + 0x910b);
    FormationCandidate* candidates = reinterpret_cast<FormationCandidate*>(asdOperatorNewC(slotLimit * 4));
    for (u32 i = 0; i < slotLimit; i++) {
        candidates[i].slot = 0xff;
        candidates[i].rank = 0;
        candidates[i].race = 0;
    }

    u32 count = 0;
    for (u32 i = 0; i < slotLimit; i++) {
        s8 slotId = gameGetSlotTable()->party[i];
        if (slotId < 0) continue;
        PartyUnit* unit = gameGetUnitRecord(gameGetSlotTable()->party[i]);
        if (unit != NULL && flagWordTestBit(unit, 1) == 0 && flagWordTestBit(unit, 10) == 0 &&
            flagWordTestBit(unit, 2) == 0) {
            candidates[count].slot = i;
            candidates[count].rank = unit->rank;
            candidates[count].race = devilGetRecord(unit->id)->race;
            count++;
        }
    }
    if (count != 0) {
        FUN_002b7bca(candidates, count, 4, sortCompareRankThenOrder);
        if ((s32)count >= 4) count = 3;
        s32 next = 0;
        if ((s32)count > 0) {
            next = count & 1;
            if (next == 1) {
                BattleFormation* f = *formation;
                u64 bit = 1 << (candidates[0].slot + 1);
                f->selectedMask |= bit;
                (*formation)->selected[0] = candidates[0].slot + 1;
            }
        }
        for (; next < (s32)count; next += 2) {
            BattleFormation* f = *formation;
            u64 bitA = 1 << (candidates[next].slot + 1);
            f->selectedMask |= bitA;
            (*formation)->selected[next] = candidates[next].slot + 1;
            f = *formation;
            u64 bitB = 1 << (candidates[next + 1].slot + 1);
            f->selectedMask |= bitB;
            (*formation)->selected[next + 1] = candidates[next + 1].slot + 1;
        }
    }
    asdMemFreeIfNotNull(candidates);
}

} /* extern "C" */

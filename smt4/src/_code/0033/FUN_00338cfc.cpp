/* NON_MATCHING: readable rewrite compiles (171 vs 165 rows); retail keeps more values in callee-saved registers across the power loops */
#include "common.h"
#include "battle/BattleBalanceRow.h"

// Battle main state: only the fields the escape roll uses.
struct BattleMain {
    u8 unk0000[0xc8];
    u32 enemyIds[6];        // 0xc8: id word, low halfword is the demon id
    u32 rules;              // 0xe0: bit 16 = escape always fails, bit 17 = escape disabled
    u8 unk00e4[0x14c - 0xe4];
    s8 escapeRule;          // 0x14c: 1 = needs a race 0x27 ally, 2 = always fails, 3 = always succeeds
    u8 unk14d[0x44a0 - 0x14d];
    u32 flags;              // 0x44a0: bit 1/2 = escape failed, bit 3 = no eligible ally
    u8 unk44a4[4];
    u32 flags2;             // 0x44a8
    u32 flags3;             // 0x44ac
};

struct PartyMember {
    u8 unk00[0x18];
    s16 power0;             // 0x18
    s16 power1;             // 0x1a
    u8 unk1c[0x44 - 0x1c];
    u16 status;             // 0x44
};

struct DevilRecordRace {
    u8 unk00[2];
    u8 race;                // 0x02
};

struct EnemyRecord {
    u8 unk00[0x12];
    u16 power0;             // 0x12
    u16 power1;             // 0x14
};

struct PlayerData {
    u8 unk00[0x26];
    s16 power0;             // 0x26
    s16 power1;             // 0x28
    u8 unk2a[0x72 - 0x2a];
    u16 flags;              // 0x72
};

struct SlotTable {
    u8 unk0000[0x9108];
    s8 partyActive[3];      // 0x9108
};

extern "C" {

EnemyRecord* dataTable00FindById(u32 id);
DevilRecordRace* devilGetRecord(u32 id);
s32 randRange(s32 range);
PartyMember* saveResolvePartySlot(s32 index);
s32 FUN_002973ec(void);
SlotTable* gameGetSlotTable(void);
PlayerData* gameGetPlayerData(void);

// Rolls the escape attempt: sets bits 1-2 of the battle flags when the escape fails.
void FUN_00338cfc(BattleMain* battle, s32 sureEscape)
{
    u32 flags = battle->flags;
    battle->flags = flags & ~6u;
    if ((battle->flags3 & 0x20) != 0) return;
    if ((battle->flags2 & 0x4000) != 0) return;
    if ((battle->flags2 & 0x8000) != 0) {
        battle->flags |= 6;
        return;
    }
    if ((flags & 0x200) != 0) return;
    if ((battle->rules & 0x10000) != 0) {
        battle->flags |= 6;
        return;
    }
    if ((battle->rules & 0x20000) != 0) return;

    if (sureEscape != 0) {
        if (randRange(99) < 0x46) return;
    } else {
        if (battle->escapeRule == 1) {
            s32 i = 0;
            for (; i < 6; i++) {
                u32 id = battle->enemyIds[i];
                if (id != 0 && devilGetRecord(id & 0xffff)->race == 0x27) break;
            }
            if (i >= 6) {
                battle->flags |= 8;
                return;
            }
        } else if (battle->escapeRule == 2) {
            battle->flags |= 6;
            return;
        } else if (battle->escapeRule == 3) {
            return;
        }

        f32 allyPower = 0.0f;
        f32 enemyPower = 0.0f;
        if ((gameGetPlayerData()->flags & 2) == 0) {
            allyPower = (f32)(gameGetPlayerData()->power1 + gameGetPlayerData()->power0);
        }
        for (s32 i = 0; i < 3; i++) {
            if (gameGetSlotTable()->partyActive[i] >= 0) {
                PartyMember* member = saveResolvePartySlot(i);
                if ((member->status & 2) == 0 && (member->status & 0x400) == 0 && (member->status & 4) == 0) {
                    s32 power = member->power1 + member->power0;
                    if ((f32)power > allyPower) allyPower = (f32)power;
                }
            }
        }
        for (s32 i = 0; i < 6; i++) {
            u32 id = battle->enemyIds[i];
            if (id != 0) {
                EnemyRecord* record = dataTable00FindById(id & 0xffff);
                if (record != NULL) {
                    u32 power = record->power1 + record->power0;
                    if ((f32)power > enemyPower) enemyPower = (f32)power;
                }
            }
        }
        s32 chance = (s32)(FUN_0023ea94()->escapeRate * (f32)((s32)((allyPower - enemyPower) * 0.2f) + 0x2d));
        if (FUN_002973ec() != 0) {
            if (FUN_002973ec() == 1) chance = 0x50;
        } else if (chance < 0x1e) {
            chance = 0x1e;
        } else if (chance >= 0x47) {
            chance = 0x46;
        }
        if (randRange(100) <= chance) return;
    }
    battle->flags |= 6;
}

} /* extern "C" */

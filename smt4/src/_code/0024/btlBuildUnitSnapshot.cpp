#include "shard/W4_Match6_BtlEntry.h"
#include "battle/BattleHelpers_Smt4.h"

struct SnapshotVitals {
    s16 maxHp, maxMp;
    s16 attributes[5];
};

struct SnapshotFloatBlock {
    f32 values[8];
};

struct SnapshotUnitPrefix {
    /* 0x00 */ u16 stats[7];
    /* 0x0e */ SnapshotVitals vitals;
    /* 0x1c */ u8 unk1c[0xe];
    /* 0x2a */ s16 hp, mp;
    /* 0x2e */ u8 unk2e[2];
    /* 0x30 */ s32 experience;
    /* 0x34 */ u16 skills[8];
};

struct SnapshotUnitSource {
    union {
        /* 0x00 */ BtlEquip record;
        /* 0x00 */ SnapshotUnitPrefix prefix;
    };
    /* 0x044 */ u16 level;
    /* 0x046 */ u16 id;
    /* 0x048 */ u8 variant;
    /* 0x049 */ u8 unk049[3];
    /* 0x04c */ SnapshotFloatBlock values0;
    /* 0x06c */ SnapshotFloatBlock values1;
    /* 0x08c */ u8 data[0x500];
};

struct BattleUnitSnapshot {
    /* 0x000 */ u16 id, variant;
    /* 0x004 */ s32 experienceRemaining;
    /* 0x008 */ s16 hp, mp, maxHp, maxMp;
    /* 0x010 */ u16 status0, status1, level;
    /* 0x016 */ SnapshotVitals vitals;
    /* 0x024 */ u16 stats[7];
    /* 0x032 */ u8 randomValues[8];
    /* 0x03a */ u8 unk03a[0xe];
    /* 0x048 */ u16 skills[8];
    /* 0x058 */ SnapshotFloatBlock values0;
    /* 0x078 */ SnapshotFloatBlock values1;
    /* 0x098 */ u8 data[0x500];
    /* 0x598 */ s32 slot;
    /* 0x59c */ char name[20];
};

extern "C" {
void memClear(void *, u32 bytes);
void __aeabi_memcpy4(void *, const void *, u32 bytes);
char *libc_strcpy(char *, const char *);
s32 FUN_00295c60(u16 id, u8 variant);
s32 btlLinkGetMaxHp(const SnapshotUnitSource *);
s32 flagCountUnlockedSlots(const SnapshotUnitSource *);
const char *FUN_002bd06c(u16 id);
u32 randomGetUpperSixBits(const SnapshotUnitSource *, u8 index);

// Build the battle-facing snapshot of a persistent unit.
void btlBuildUnitSnapshot(BattleUnitSnapshot *snapshot, const SnapshotUnitSource *unit)
{
    memClear(snapshot, sizeof(BattleUnitSnapshot));
    snapshot->id = unit->id;
    snapshot->variant = unit->variant;
    snapshot->experienceRemaining = FUN_00295c60(unit->id, unit->variant) - unit->prefix.experience;
    snapshot->hp = unit->record.hp;
    snapshot->mp = unit->record.mp;
    snapshot->maxHp = btlLinkGetMaxHp(unit);
    snapshot->maxMp = unit->record.maxMp;
    snapshot->status0 = 0;
    snapshot->status1 = 0;
    snapshot->level = unit->level;
    snapshot->slot = -1;
    snapshot->vitals = unit->prefix.vitals;
    __aeabi_memcpy4(snapshot->stats, unit->prefix.stats, sizeof(snapshot->stats));
    __aeabi_memcpy4(snapshot->skills, unit->record.items, flagCountUnlockedSlots(unit) * sizeof(u16));
    libc_strcpy(snapshot->name, FUN_002bd06c(unit->id));
    for (s32 stat = 0; stat < 5; ++stat) {
        if (snapshot->vitals.attributes[stat] >= 1000) {
            snapshot->vitals.attributes[stat] = 999;
        }
    }
    for (s32 index = 0; index < 8; ++index) {
        snapshot->randomValues[index] = randomGetUpperSixBits(unit, static_cast<u8>(index));
    }
    snapshot->values0 = unit->values0;
    snapshot->values1 = unit->values1;
    __aeabi_memcpy4(snapshot->data, unit->data, sizeof(snapshot->data));
}
}

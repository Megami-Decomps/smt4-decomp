/* NON_MATCHING: source-kind setup and first packed category update scheduling differ; -O2 candidate. */
#include "common.h"

struct SummaryDemonSource {
    u8 unk00[0xe];
    u16 maxHp; // 0x0e
    u16 maxMp; // 0x10
    u16 strength; // 0x12
    u16 dexterity;
    u16 magic;
    u16 agility;
    u16 luck;
    u8 unk1c[0xe];
    u16 hp; // 0x2a
    u16 mp; // 0x2c
    u8 unk2e[0x16];
    u16 level; // 0x44
    u16 id; // 0x46
    u8 kind; // 0x48
};
struct SummaryDemonStats {
    u16 hp, maxHp, mp, maxMp;
    u16 strength, dexterity, magic, agility, luck;
};
struct SummaryResistance {
    u16 value : 10;
    u16 kind : 6;
};
struct DemonBattleSummary {
    u8 kind; // 0x000
    u8 unk001;
    u16 id; // 0x002
    s16 first; // 0x004, -1 when no selection
    s16 second; // 0x006, -1 when no selection
    u16 displayId; // 0x008
    u8 unk00a[0xca];
    u8 state; // 0x0d4
    u8 unk0d5;
    SummaryDemonStats stats; // 0x0d6
    SummaryDemonStats baseStats; // 0x0e8
    u16 level; // 0x0fa
    u16 unk0fc;
    u16 unk0fe;
    u16 sourceKind; // 0x100
    SummaryResistance resistances[18]; // 0x102
    SummaryResistance baseResistances[18]; // 0x126
    u8 race; // 0x14a
    u8 type; // 0x14b
    u32 counters[14]; // 0x14c
    u32 flags; // 0x184
};
struct SummaryDemonDefinition {
    u8 unk00[5];
    u8 type; // 0x05
    u8 unk06[0x2d];
    u8 race; // 0x33
};
extern "C" {
u16 gameSlotFindByCategory(SummaryDemonSource *);
u32 randomGetLowerTenBits(SummaryDemonSource *, u32);
u32 randomGetUpperSixBits(SummaryDemonSource *, u32);
SummaryDemonDefinition *devilGetRecord(u16);

// Copy a saved demon's stats and packed resistances into its battle summary.
void btlSummaryInitializeSavedDemon(u32 unused, DemonBattleSummary *summary, SummaryDemonSource *source)
{
    summary->kind = 2;
    summary->displayId = gameSlotFindByCategory(source);
    summary->id = source->id;
    summary->first = -1;
    summary->second = -1;
    summary->state = 0;
    summary->stats.hp = source->hp;
    summary->stats.maxHp = source->maxHp;
    summary->stats.mp = source->mp;
    summary->stats.maxMp = source->maxMp;
    summary->stats.strength = source->strength;
    summary->stats.dexterity = source->dexterity;
    summary->stats.magic = source->magic;
    summary->stats.agility = source->agility;
    summary->stats.luck = source->luck;
    summary->baseStats = summary->stats;
    summary->level = source->level;
    summary->unk0fc = 0;
    summary->unk0fe = 0;
    summary->sourceKind = source->kind;
    summary->flags = 0;
    for (s32 i = 0; i < 14; ++i)
        summary->counters[i] = 0;
    for (s32 i = 0; i < 18; ++i) {
        summary->resistances[i].value = randomGetLowerTenBits(source, (u8)i);
        summary->resistances[i].kind = randomGetUpperSixBits(source, (u8)i);
        summary->baseResistances[i].value = randomGetLowerTenBits(source, (u8)i);
        summary->baseResistances[i].kind = randomGetUpperSixBits(source, (u8)i);
    }
    SummaryDemonDefinition *definition = devilGetRecord(summary->id);
    summary->race = definition->race;
    u8 type = definition->type;
    if (type == 1)
        summary->type = type;
    else if (type == 4)
        summary->type = 0;
    else if (type == 5)
        summary->type = 2;
}
}

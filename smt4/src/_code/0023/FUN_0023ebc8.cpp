/* NON_MATCHING: enemy stat copies and reset loops fold differently; local view extends shared payload prefix. */
#include "battle/btlUnit.h"
#include "gamedata/DevilRecord.h"
#include "AsdSDK/AsdMemUtil.h"

namespace {
struct EnemyBattleDefinitionView {
    u16 id;
    u8 race, flags;
    u32 hp, mp;
    u16 stats[5];
    u8 unk16[0xE];
    u16 skills[18];
    u8 unk48[0x23];
    u8 behavior;
    u8 unk6C[0x1C];
    s16 value;
    u8 unk8A[0x14];
    u8 specialA, specialB;
};
struct EnemyBattleStats {
    u16 hp, maximumHp, mp, maximumMp, strength, magic, vitality, agility, luck;
};
struct EnemyBattlePayloadView {
    u8 kind, unk01;
    u16 id, slot, alternateSlot, model;
    u8 unk0A[2];
    s32 value;
    u8 work[0xC4];
    u8 special, unkD5;
    EnemyBattleStats stats, initialStats;
    u16 flags, counter, timer, race;
    u16 skills[18], initialSkills[18];
    u8 behavior, modelKind;
    u32 counters[14], state;
};
typedef char EnemyBattlePayloadOffsets[offsetof(EnemyBattlePayloadView, special) == 0xD4 &&
    offsetof(EnemyBattlePayloadView, skills) == 0x102 &&
    offsetof(EnemyBattlePayloadView, state) == 0x184 &&
    sizeof(EnemyBattlePayloadView) == 0x188 ? 1 : -1];
}
extern "C" {

void FUN_0023ebc8(BtlMainState *battle, BtlUnitData *data, const EnemyBattleDefinitionView *definition)
{
    EnemyBattlePayloadView *unit = reinterpret_cast<EnemyBattlePayloadView *>(data);
    unit->kind = 4;
    unit->model = 0xFFFF;
    unit->id = definition->id;
    unit->slot = 0xFFFF;
    unit->alternateSlot = 0xFFFF;
    memClear(&unit->value, 200);
    unit->value = definition->value;
    unit->special = definition->specialA != 0 || definition->specialB != 0;
    unit->stats.hp = definition->hp;
    unit->stats.maximumHp = definition->hp;
    unit->stats.mp = definition->mp;
    unit->stats.maximumMp = definition->mp;
    unit->stats.strength = definition->stats[0];
    unit->stats.magic = definition->stats[1];
    unit->stats.vitality = definition->stats[2];
    unit->stats.agility = definition->stats[3];
    unit->stats.luck = definition->stats[4];
    unit->initialStats = unit->stats;
    unit->flags = 0;
    unit->counter = 0;
    unit->timer = 0;
    unit->race = definition->race;
    unit->state = 0;
    for (s32 index = 0; index < 14; ++index)
        unit->counters[index] = 0;
    for (s32 index = 0; index < 18; ++index) {
        unit->skills[index] = definition->skills[index];
        unit->initialSkills[index] = definition->skills[index];
    }
    unit->behavior = definition->behavior;
    DevilRecord *record = reinterpret_cast<DevilRecord *>(devilGetRecord(unit->id));
    u8 kind = reinterpret_cast<const u8 *>(record)[5];
    if (kind == 1)
        unit->modelKind = 1;
    else if (kind == 4)
        unit->modelKind = 0;
    else if (kind == 5)
        unit->modelKind = 2;
}
}

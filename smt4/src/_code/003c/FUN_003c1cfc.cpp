/* NON_MATCHING: packed-word loads, signed-growth arithmetic, and saved-register scheduling differ. */
#include "shard/W6_W6Match5_DevilSort.h"
#include <stddef.h>

// A word-wide attribute view would change the shared record's byte-union alignment.
struct DevilBattleRecordView {
    DevilSortRecord header;
    u8 unk04[0x10];
    u16 baseHp;
    u16 baseMp;
    u8 hpGrowth;
    u8 mpGrowth;
    u8 unk1a[0xa];
    struct {
        u32 strength : 8;
        u32 magic : 8;
        u32 vitality : 8;
        u32 agility : 8;
    } attributes;
    u8 luck;
};
union PackedDevilStatWord {
    u32 value;
    struct {
        u32 strength : 8;
        u32 magic : 8;
        u32 vitality : 8;
        u32 agility : 8;
    } attributes;
    struct {
        u32 luck : 8;
        u32 reserved : 8;
        u32 baseHp : 16;
    } vitals;
    struct {
        u32 baseMp : 16;
        u32 hpGrowth : 8;
        u32 mpGrowth : 8;
    } growth;
    struct {
        u32 maxHp : 16;
        u32 maxMp : 16;
    } maximum;
};
typedef char DevilBattleSummaryLayoutCheck[offsetof(DevilBattleRecordView, baseHp) == 0x14 &&
    offsetof(DevilBattleRecordView, baseMp) == 0x16 &&
    offsetof(DevilBattleRecordView, hpGrowth) == 0x18 &&
    offsetof(DevilBattleRecordView, mpGrowth) == 0x19 &&
    offsetof(DevilBattleRecordView, attributes) == 0x24 &&
    offsetof(DevilBattleRecordView, luck) == 0x28 && sizeof(PackedDevilStatWord) == 4 ? 1 : -1];

extern "C" void FUN_003c1cfc(u32 *destination, u16 id)
{
    const DevilBattleRecordView *record = (const DevilBattleRecordView *)devilGetRecord(id);
    PackedDevilStatWord attributes = {0};
    PackedDevilStatWord vitals = {0};
    PackedDevilStatWord growth = {0};
    PackedDevilStatWord maximum = {0};
    attributes.attributes.strength = record->attributes.strength;
    attributes.attributes.magic = record->attributes.magic;
    attributes.attributes.vitality = record->attributes.vitality;
    attributes.attributes.agility = record->attributes.agility;
    vitals.vitals.luck = record->luck;
    vitals.vitals.baseHp = record->baseHp;
    growth.growth.baseMp = record->baseMp;
    growth.growth.hpGrowth = record->hpGrowth;
    growth.growth.mpGrowth = record->mpGrowth;
    s32 hp = (s16)record->header.level * (s16)record->hpGrowth + record->baseHp;
    s32 mp = (record->header.level * record->mpGrowth + record->baseMp) * 45 / 100;
    maximum.maximum.maxHp = hp > 9999 ? 9999 : hp;
    maximum.maximum.maxMp = mp > 9999 ? 9999 : mp;
    destination[0] = attributes.value;
    destination[1] = vitals.value;
    destination[2] = growth.value;
    destination[3] = maximum.value;
}

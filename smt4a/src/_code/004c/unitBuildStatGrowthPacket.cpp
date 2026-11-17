#include "shard/W6_W6Match8_StatGrowth.h"
#include "gamedata/NkmBaseRecordA.h"
#include <string.h>

extern "C" {

u32 FUN_003daaf8(s32 level, const StatGrowthParameters *parameters);

u32 saveSlotIsActiveWithId(u32 id);

/* Fills a unit's stat-growth packet from demon `id`'s record: base HP/MP, their growth, the stat growth and the HP/MP at its level. */
void unitBuildStatGrowthPacket(u32 *packet, u32 id)
{
    const NkmBaseRecordA *record = nkmBaseGetRecord(id);
    StatGrowthParameters parameters = {};
    parameters.baseHp = record->baseHp;
    parameters.baseMp = record->baseMp;
    parameters.stats[0] = record->statGrowth[0];
    parameters.stats[1] = record->statGrowth[1];
    parameters.stats[2] = record->statGrowth[2];
    parameters.stats[3] = record->statGrowth[3];
    parameters.stats[4] = record->statGrowth[4];
    parameters.hpGrowth = record->hpGrowth;
    parameters.mpGrowth = record->mpGrowth;
    parameters.hp = (u16)unitComputeMaximumHpAtLevel(record->level, &parameters);
    parameters.mp = (u16)FUN_003daaf8(record->level, &parameters);
    parameters.kind = saveSlotIsActiveWithId(id) != 0 ? 3 : 2;
    const u8 *bytes = reinterpret_cast<const u8 *>(&parameters);
    // Publish the packed packet without assuming a wider alignment for its two-byte tail.
    memcpy(packet, bytes, 4);
    memcpy(packet + 1, bytes + 4, 4);
    memcpy(packet + 2, bytes + 8, 4);
    memcpy(packet + 3, bytes + 12, 4);
    memcpy(packet + 4, bytes + 16, 2);
}

} /* extern "C" */

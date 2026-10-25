/* NON_MATCHING: slot/cache register roles and early 0x3800 base hoisting differ; signed 0x38CC flag now matches folded byte access. */
#include "shard/PadState.h"
#include "shard/W4_Match6_BtlEntry.h"

namespace {
struct PartyStatusCache {
    /* 0x0000 */ u8 unk0000[0x340C];
    /* 0x340C */ s32 slotState[5];
    /* 0x3420 */ u8 unk3420[0x37BC - 0x3420];
    /* 0x37BC */ u8 unk37BC[5];
    /* 0x37C1 */ u8 unk37C1[0x38CC - 0x37C1];
    /* 0x38CC */ s8 unk38CC[5];
    /* 0x38D1 */ u8 unavailable[5];
    /* 0x38D6 */ s16 hp[5];
    /* 0x38E0 */ s16 mp[5];
    /* 0x38EA */ s16 level[5];
    /* 0x38F4 */ s16 unitIndex[5];
};
typedef char PartyStatusCacheLayoutCheck[
    offsetof(PartyStatusCache, unk38CC) == 0x38CC &&
    offsetof(PartyStatusCache, unitIndex) == 0x38F4 &&
    sizeof(PartyStatusCache) == 0x3900 ? 1 : -1];
struct PartySlotTable {
    /* 0x0000 */ u8 unk0000[0x9108];
    /* 0x9108 */ s8 partyIndices[3];
};
struct PartyUnitRecord {
    /* 0x00 */ BtlEquip vitals;
    /* 0x44 */ u16 flags;
    /* 0x46 */ u8 unk46[2];
    /* 0x48 */ u8 level;
};
}

extern "C" {
u8* gameGetPlayerData();
u8* gameGetSupportUnitData();
u8* gameGetSlotTable();
const PartyUnitRecord* gameGetUnitRecord(u32);

/* Refresh one cached HP/MP/level row, optionally rereading its summoned-unit index. */
void partyStatusRefreshSlot(void* work, s32 slot, s32 refreshIndex)
{
    PartyStatusCache* cache = static_cast<PartyStatusCache*>(work);
    cache->mp[slot] = -1;
    cache->level[slot] = -1;
    cache->hp[slot] = -1;
    if (refreshIndex) {
        cache->unitIndex[slot] = -1;
    }
    if (slot == 0) {
        const PadState* player = reinterpret_cast<const PadState*>(gameGetPlayerData());
        cache->hp[0] = player->unk2A;
        cache->mp[0] = player->unk2C;
        cache->level[0] = player->unk76;
        cache->unitIndex[0] = -1;
        if (player->unk72 & 2) {
            cache->unavailable[0] = 1;
        } else {
            cache->unavailable[0] = 0;
        }
        return;
    }
    if (slot == 4) {
        const BtlEquip* extra = reinterpret_cast<const BtlEquip*>(gameGetSupportUnitData());
        cache->hp[4] = extra->hp;
        cache->unitIndex[4] = -1;
        return;
    }

    PartySlotTable* table = reinterpret_cast<PartySlotTable*>(gameGetSlotTable());
    if (cache->slotState[slot] > 0) {
        if (refreshIndex) {
            cache->unitIndex[slot] = table->partyIndices[slot - 1];
        }
        if (cache->unitIndex[slot] >= 0) {
            const PartyUnitRecord* unit = gameGetUnitRecord(cache->unitIndex[slot]);
            if (!(unit->flags & 0x400)) {
                cache->hp[slot] = unit->vitals.hp;
                cache->mp[slot] = unit->vitals.mp;
                cache->level[slot] = unit->level;
                cache->unavailable[slot] = 0;
                return;
            }
            table->partyIndices[slot - 1] = -1;
            cache->unavailable[slot] = 1;
        } else if (!cache->unk37BC[slot] && !cache->unk38CC[slot]) {
            cache->unavailable[slot] = 1;
        }
    }
}
} // extern "C"

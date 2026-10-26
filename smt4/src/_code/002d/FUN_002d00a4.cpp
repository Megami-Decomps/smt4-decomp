/* NON_MATCHING: one hoisted count for both loops and direct entry indexing now follow retail; remaining: register allocation (retail computes the owner column-count address before the push and keeps different loop registers). */
#include "battle/btlUI.h"

namespace {
struct BattleUiPositionEntryParameters {
    u16 id;
    u16 first;
    u16 second;
    u16 mode;
    f32 x, y, z;
    u32 value;
};
struct BattleUiPositionCacheEntry {
    BattleUiPositionEntryParameters parameters;
    u8 active;
    u8 unk19[3];
    u32 handle;
    u8 unk20[8];
    u8 used;
    u8 unk29[3];
};
// The recovered request record crosses the shared object's column/padding boundaries.
struct BattleUiPositionCacheView {
    u8 unk0000[0x5760];
    BattleUiPositionCacheEntry entries[1];
};
typedef char BattleUiPositionCacheEntryLayoutCheck[sizeof(BattleUiPositionCacheEntry) == 0x2C &&
    offsetof(BattleUiPositionCacheEntry, used) == 0x28 &&
    offsetof(BattleUiPositionCacheView, entries) == 0x5760 ? 1 : -1];
}

extern "C" u32 FUN_002d00a4(BtlUiObjC *owner, const BattleUiPositionEntryParameters *request)
{
    BattleUiPositionCacheView *cache = reinterpret_cast<BattleUiPositionCacheView *>(owner);
    const s32 count = owner->columnCount;
    for (s32 i = 0; i < count; ++i) {
        cache->entries[i].used = 0;
    }
    for (s32 i = 0; i < count; ++i) {
        if (cache->entries[i].parameters.id == request->id && cache->entries[i].parameters.x == request->x &&
            cache->entries[i].parameters.y == request->y && cache->entries[i].parameters.z == request->z) {
            cache->entries[i].active = 1;
            cache->entries[i].parameters.mode = request->mode;
            return cache->entries[i].handle;
        }
    }
    cache->entries[count].parameters.id = request->id;
    cache->entries[count].parameters.first = request->first;
    cache->entries[count].parameters.second = request->second;
    cache->entries[count].parameters.mode = request->mode;
    cache->entries[count].parameters.x = request->x;
    cache->entries[count].parameters.y = request->y;
    cache->entries[count].parameters.z = request->z;
    cache->entries[count].parameters.value = request->value;
    cache->entries[count].active = 1;
    cache->entries[count].used = 0;
    cache->entries[count].handle = count;
    return owner->columnCount++;
}

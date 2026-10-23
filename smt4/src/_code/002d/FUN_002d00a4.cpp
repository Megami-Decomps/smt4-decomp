/* NON_MATCHING: typed cache entries hoist the full entry address; retail keeps separate member-base addresses and a different clear-loop register allocation. */
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
    for (s32 i = 0; i < owner->columnCount; ++i) {
        cache->entries[i].used = 0;
    }
    const s32 count = owner->columnCount;
    for (s32 i = 0; i < count; ++i) {
        BattleUiPositionCacheEntry *entry = &cache->entries[i];
        if (entry->parameters.id == request->id && entry->parameters.x == request->x &&
            entry->parameters.y == request->y && entry->parameters.z == request->z) {
            cache->entries[i].active = 1;
            entry->parameters.mode = request->mode;
            return entry->handle;
        }
    }
    BattleUiPositionCacheEntry *entry = &cache->entries[count];
    entry->parameters.id = request->id;
    entry->parameters.first = request->first;
    entry->parameters.second = request->second;
    entry->parameters.mode = request->mode;
    entry->parameters.x = request->x;
    entry->parameters.y = request->y;
    entry->parameters.z = request->z;
    entry->parameters.value = request->value;
    entry->active = 1;
    entry->used = 0;
    entry->handle = count;
    return owner->columnCount++;
}

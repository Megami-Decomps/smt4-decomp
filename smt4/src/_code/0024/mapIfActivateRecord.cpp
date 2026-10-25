/* NON_MATCHING: compiler merges positional sound calls and hoists inactive-pool reset block; -O2 candidate. */
#include "map/mapIf.h"
#include "map/mapDepart.h"
#include "shard/Shard0036.h"
#include "shard/S1Mover.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

static __inline SoundActorQueuePosition soundPosition(const Vec3f &value)
{
    SoundActorQueuePosition position = { value.x, value.y, value.z };
    return position;
}

struct MapIfActivation {
    u8 unk00[0x17];
    u8 enabled;
};
struct MapActivationRecord {
    u8 unk00[0x20];
    s32 destination;
    u8 unk24[8];
    u16 timer;
    u8 unk2e[0x2e];
    Vec3f position; // 0x5c
    u8 unk68[0x124];
    u32 linked; // 0x18c
};
struct MapActivationContext {
    s32 mode;
    u8 unk04[0xa8];
    s32 destination;
};

extern "C" {
extern MapIfState *g_mapIf;
extern MapActivationContext *DAT_004474f4;
extern GameState g_gameState;
Vec3f FUN_003e0e60(const Vec3f *value, f32 scale);

u32 mapIfActivateRecord(u8 enabled, s32 index)
{
    MapIfState *state = g_mapIf;
    MapIfActivation *activation = reinterpret_cast<MapIfActivation *>(state);
    activation->enabled = enabled;
    MapIfRecord *record = index == -1 ? NULL : &g_mapIf->records[index];
    MapActivationRecord *details = reinterpret_cast<MapActivationRecord *>(record);
    if (index != -1 && record->active && DAT_004474f4->destination != details->destination)
        activation->enabled = 0;
    if (activation->enabled == 0) {
        MapIfRecord *records = state->records;
        for (s32 slot = 0; slot < 128; ++slot) {
            MapIfRecord *entry = &records[slot];
            if (!entry->active)
                continue;
            s32 category = entry->display.category;
            if (category != 0x1d && category != 0x26 &&
                category != 0x1e && category != 0x1f && category != 0x25 &&
                (entry->state == 8 || entry->state == 10 || entry->state == 12 ||
                 entry->state == 14 || entry->state == 16))
                entry->state = 6;
        }
        return 1;
    }
    if (index == -1)
        return 0;
    if (!record->active || record->state != 6)
        return 1;
    if (record->display.category >= 0x22) {
        record->state = 7;
        if (g_gameState.unk18 == 0)
            FUN_00291e40(0x10001ff, soundPosition(FUN_003e0e60(&details->position, 1.0f / 3.0f)));
    } else if (details->destination == -1) {
        record->state = 9;
        FUN_00291e40(0x10001ff, soundPosition(details->position));
    } else if (details->destination == -2) {
        record->state = 11;
        FUN_00291e40(0x10001ff, soundPosition(details->position));
    } else if (details->destination == -3) {
        record->state = 13;
        FUN_00291e40(0x10001ff, soundPosition(details->position));
    } else if (details->linked == 0) {
        record->state = 15;
        if (g_gameState.unk18 == 0)
            FUN_00291e40(0x10001ff, soundPosition(details->position));
    } else {
        record->state = 7;
        if (!(g_gameState.unk18 != 0 && DAT_004474f4->mode == 0)) {
            if (g_gameState.unk000 >= 100)
                FUN_00291e40(0x10001ff, soundPosition(FUN_003e0e60(&details->position, 1.0f / 3.0f)));
            else
                FUN_00291e40(0x10001ff, soundPosition(details->position));
        }
    }
    details->timer = 0;
    return 1;
}
}

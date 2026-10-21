/* NON_MATCHING: optimization may recover native constant hoisting, first-record register reuse and final coordinate STM; typed repeated resolution is otherwise faithful. */
#include "addon/aocMain.h"
#include "shard/W6_W6Match5_DevilSort.h"

namespace {
struct DevilModelRecord {
    DevilSortRecord common;
    u8 unk04[0x8c];
    u16 model; // 0x90
    u8 unk92[2];
};
struct DevilModelOverride {
    u8 unk00[3];
    u8 flags;
    u8 unk04[0x84];
    s16 model; // 0x88
    u8 unk8a[0x1e];
};
struct TextureKey {
    u32 table;
    s32 node;
};
}

extern "C" {
DevilModelOverride* dataTable00FindById(u16 id);
s32 asdTMTexTableNodeIsLoaded(u32 table, s32 node);
s32 recordPrepareLinkedOwner(AocSystem*, u32 table, s32 node);
void FUN_002ae9ec(u32 kind, u32 table, u32 file, s32 x, s32 y, u32 layer);
void FUN_00388eb4(AocSystem*, s32 id, u32 kind, s32 node, s32 x, s32 y, u32 layer);
extern AocSystem* g_aocSystem;
}

namespace {
inline bool resolveTextureKey(s32 id, s32 mapped, TextureKey& key)
{
    key.table = 0x17;
    key.node = id;
    if (mapped) {
        if (id < 0) {
            key.node = 0;
        } else {
            const DevilModelRecord* record = reinterpret_cast<const DevilModelRecord*>(devilGetRecord(static_cast<u16>(id)));
            if (!record) {
                return false;
            }
            const DevilModelOverride* overrideRecord = dataTable00FindById(static_cast<u16>(id));
            if (overrideRecord->flags & 1) {
                key.table = 0x23;
                key.node = overrideRecord->model;
                if (key.node >= 0x81) {
                    return false;
                }
            } else {
                key.node = record->model + 1;
                if (key.node >= 0x266) {
                    return false;
                }
            }
        }
    }
    return true;
}
}

extern "C" void textureLoadOptionalDemonModel(s32 id, s32 x, s32 y, u32 layer, s32 mapped)
{
    TextureKey source;
    if (!resolveTextureKey(id, mapped, source)) {
        return;
    }
    TextureKey availability;
    if (!resolveTextureKey(id, mapped, availability)) {
        return;
    }
    if (asdTMTexTableNodeIsLoaded(availability.table, availability.node)) {
        if (!recordPrepareLinkedOwner(g_aocSystem, source.table, source.node)) {
            FUN_002ae9ec(2, source.table, static_cast<u32>(source.node) * 1000u + 1u, x, y, layer);
        } else {
            FUN_00388eb4(g_aocSystem, id, 2, source.node, x, y, layer);
        }
    }
}

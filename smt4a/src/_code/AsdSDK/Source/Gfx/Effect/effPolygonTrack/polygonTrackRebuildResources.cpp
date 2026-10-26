/* NON_MATCHING: trace and colour-write shape now match; only the byte-count constant register (r0 vs r1) and the order of the final `mov r0, r4` / `add r1, r7, #8` before the tail call differ. */
#include "shard/W6_W6Match2_EmitterResources.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/Shard0035.h"
#include "AsdSDK/AsdMemAlloc.h"

struct PolygonTrackArguments {
    u32 format;
    u32 unk04;
    u32 settings[5];
};
struct PolygonTrackResources {
    u8 unk00[0x10];
    Block6 *first;
    Block6 *second;
    u16 *indices;
};
struct PolygonTrackEmitter {
    u8 unk00[0x0c];
    PolygonTrackArguments arguments;
    PolygonTrackResources *resources;
};
struct PolygonTrackColor {
    f32 channels[4];
};

extern "C" {
extern u8 DAT_005c1130[4];
extern u8 DAT_005c1eb0[], DAT_005c1f8e[];
void block6Free(Block6 *block);
void asdMemFree(void *memory);
void sysMemClear(void *memory, u32 bytes);
Block6 *FUN_00390164(u32 count, u32 format, const u8 *data, u32 kind, u32 stride);
Block6 *FUN_00337f9c(u32 count, u32 first, u32 second, u32 third, const u8 *data, u32 stride);
void FUN_003932d0(PolygonTrackResources *resources, const u32 *settings);
}

static inline void polygonTrackSetColor(Block6 *block, u16 index)
{
    const u8 *rgba = DAT_005c1130;
    PolygonTrackColor *color = &static_cast<PolygonTrackColor *>(block->buffer)[index];
    color->channels[0] = (f32)(u32)rgba[0] * 0.003921569f * 0.003921569f;
    color->channels[1] = (f32)(u32)rgba[1] * 0.003921569f * 0.003921569f;
    color->channels[2] = (f32)(u32)rgba[2] * 0.003921569f * 0.003921569f;
    color->channels[3] = (f32)(u32)rgba[3] * 0.003921569f * 0.003921569f;
}

extern "C" void polygonTrackRebuildResources(ResourceEmitter *emitter, u32 id, const EmitterArguments *arguments)
{
    PolygonTrackEmitter *track = reinterpret_cast<PolygonTrackEmitter *>(emitter);
    const PolygonTrackArguments *parameters = reinterpret_cast<const PolygonTrackArguments *>(arguments->data);
    track->arguments = *parameters;
    if (emitter->key == 0)
        return;
    PolygonTrackResources *resources = track->resources;
    if (resources != NULL) {
        block6Free(resources->first);
        block6Free(resources->second);
        asdMemFree(resources);
    }
    u16 count = (u16)emitter->key;
    u16 format = (u16)parameters->format;
    u32 bytes = sizeof(PolygonTrackResources) + count * sizeof(u16);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonTrack.cpp", 533);
    resources = static_cast<PolygonTrackResources *>(memAlloc(0x10000, 0x100, 0, bytes, 16, 1));
    sysMemClear(resources, bytes);
    resources->indices = reinterpret_cast<u16 *>(resources + 1);
    resources->first = FUN_00390164(count, format, DAT_005c1eb0, 3, 0x48);
    resources->second = FUN_00337f9c(count, 1, 6, 8, DAT_005c1f8e, 0x48);
    for (u32 index = 0; index < count; ++index) {
        polygonTrackSetColor(resources->first, (u16)index);
        polygonTrackSetColor(resources->second, (u16)index);
    }
    track->resources = resources;
    FUN_003932d0(resources, parameters->settings);
}

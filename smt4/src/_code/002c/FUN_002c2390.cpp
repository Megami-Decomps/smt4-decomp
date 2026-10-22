/* NON_MATCHING: upload-entry indexing and the double-buffer selection use different address registers. */
#include "common.h"

struct GpuUploadEntry {
    /* 0x00 */ u8 componentCount;
    /* 0x01 */ u8 active;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 buffers[2];
    /* 0x0c */ u8 unk0c[0x10];
};
struct GpuUploadState {
    /* 0x000 */ u8 unk000[0x2c];
    /* 0x02c */ u32 vertexCount;
    /* 0x030 */ u8 bufferIndex;
    /* 0x031 */ u8 unk031[3];
    /* 0x034 */ s32 entryCount;
    /* 0x038 */ u8 unk038[8];
    /* 0x040 */ GpuUploadEntry entries[1];
    /* 0x05c */ u8 unk05c[0x19c];
    /* 0x1f8 */ u32 buffers[2];
};

extern "C" {
u32 FUN_002c2424(u32 buffer, u32 size);

u32 FUN_002c2390(GpuUploadState *state)
{
    for (s32 index = 0; index < state->entryCount; ++index) {
        GpuUploadEntry *entry = &state->entries[index];
        if (entry->active) {
            FUN_002c2424(entry->buffers[state->bufferIndex != 0],
                         state->vertexCount * entry->componentCount * 4);
        }
    }
    return FUN_002c2424(state->buffers[state->bufferIndex != 0], state->vertexCount << 1);
}
}

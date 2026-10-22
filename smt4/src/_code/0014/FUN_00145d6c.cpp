#include "common.h"

struct GpuCommandPacket {
    /* 0x00 */ u32 words[8];
};
struct GpuExtendedCommandPacket {
    /* 0x00 */ u32 words[10];
};
struct GpuCommandDefaults {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ GpuCommandPacket first;
    /* 0x30 */ GpuCommandPacket second;
    /* 0x50 */ GpuExtendedCommandPacket third;
};
extern "C" {
extern const GpuCommandDefaults g_gpuCommandDefaults;
void FUN_002adba8(const void *commands, u32 bytes, s32 copy);

/* Snapshots the default packets and submits the selected command preset. */
void FUN_00145d6c(s32 mode)
{
    GpuCommandPacket first = g_gpuCommandDefaults.first;
    GpuCommandPacket second = g_gpuCommandDefaults.second;
    GpuExtendedCommandPacket third = g_gpuCommandDefaults.third;
    switch (mode) {
    case 0:
        FUN_002adba8(first.words, sizeof(first), 1);
        return;
    case 1:
        FUN_002adba8(second.words, sizeof(second), 1);
        break;
    case 2:
        FUN_002adba8(third.words, sizeof(third), 1);
        break;
    }
}
}

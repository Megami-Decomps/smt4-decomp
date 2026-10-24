#include "common.h"

/* A 0x30-byte GPU command block. */
struct GpuCommandBlock {
    /* 0x00 */ u32 words[12];
};

/* The GPU command defaults; only the block at +0x130 is named. */
struct GpuCommandTemplates {
    /* 0x000 */ u8 unk000[0x130];
    /* 0x130 */ GpuCommandBlock command;
};

extern "C" {

extern const GpuCommandTemplates g_gpuCommandDefaults;
void FUN_002adba8(const void *commands, u32 byteCount, s32 copyCommands);

/* Builds a GPU command block from the default one with the words taken from three vectors (stored z, y, x) and submits it. */
void gpuSubmitVectorCommand(const u32 *first, const u32 *second, const u32 *third)
{
    GpuCommandBlock command = g_gpuCommandDefaults.command;

    command.words[0] = first[2];
    command.words[2] = first[1];
    command.words[3] = first[0];
    command.words[4] = second[2];
    command.words[6] = second[1];
    command.words[7] = second[0];
    command.words[10] = third[1];
    command.words[11] = third[0];
    FUN_002adba8(&command, sizeof(command), 1);
}

} /* extern "C" */

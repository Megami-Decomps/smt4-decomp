/* Model/MoriModelCommand.cpp: the model command list's two double-buffered command queues. */
#ifndef MODEL_MORIMODELCOMMAND_H
#define MODEL_MORIMODELCOMMAND_H

#include "common.h"
#include <stddef.h>

/* A command queue: a raw byte block plus an array of 0x1C-byte records (moriCommandQueueInit sets it up). */
typedef struct MoriCommandQueue {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *data;
    /* 0x08 */ u32 dataSize;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ void *records;
    /* 0x1C */ s32 recordCapacity;
    /* 0x20 */ s32 recordCount;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u8 unk38[0xC];
} MoriCommandQueue;                 /* 0x44 bytes */

/* A queue and the two blocks it owns. */
typedef struct MoriCommandBuffer {
    /* 0x00 */ MoriCommandQueue queue;
    /* 0x44 */ void *dataBlock;
    /* 0x48 */ void *recordBlock;
} MoriCommandBuffer;                /* 0x4C bytes */

/* A growable list header (FUN_0016d374 builds it empty). */
typedef struct Vector8 {
    /* 0x00 */ u32 begin;
    /* 0x04 */ u32 cursor;
    /* 0x08 */ u32 end;
    /* 0x0C */ u32 *count;
    /* 0x10 */ u32 unk10;
} Vector8;

typedef struct MoriModelCommand {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MoriCommandBuffer buffers[2];
    /* 0x9C */ u32 activeBuffer;
    /* 0xA0 */ u32 unkA0;
    /* 0xA4 */ u32 unkA4;
    /* 0xA8 */ Vector8 *listA;
    /* 0xAC */ Vector8 *listB;
} MoriModelCommand;

typedef char MoriModelCommandOffsets[offsetof(MoriModelCommand, activeBuffer) == 0x9C &&
    offsetof(MoriModelCommand, listA) == 0xA8 && sizeof(MoriModelCommand) == 0xB0 ? 1 : -1];

extern "C" {
void moriModelCommandSwapBuffers(MoriModelCommand *command);
void moriCommandQueueClear(MoriCommandQueue *queue);
void moriCommandQueueInit(MoriCommandQueue *queue, u32 dataSize, void *data, s32 recordCapacity, void *records);
} /* extern "C" */

#endif

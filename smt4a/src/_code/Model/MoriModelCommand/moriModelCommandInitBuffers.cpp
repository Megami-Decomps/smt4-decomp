#include "AsdSDK/AsdDebug.h"
#include "Model/MoriModelCommand.h"

extern "C" {

void *asdMemoryAllocAligned(u32 heap, u32 type, u32 flags, u32 bytes, u32 alignment, u32 clear);
void *FUN_00178b04(u32 size, const char *file, s32 line);
Vector8 *FUN_0016d374(Vector8 *list, u32 begin);
s32 FUN_0017daf8(s32 count);
void FUN_0017d1e4(MoriCommandQueue *queue, u32 dataSize, void *data, s32 recordCapacity, void *records);
void FUN_0017d184(MoriCommandQueue *queue);

/* Allocates and initialises both command buffers, then the two lists. */
void moriModelCommandInitBuffers(MoriModelCommand *command, u32 dataSize, s32 recordCapacity)
{
    for (s32 i = 0; i < 2; i++) {
        MoriCommandBuffer *buffer = &command->buffers[i];
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelCommand.cpp", 74);
        buffer->dataBlock = asdMemoryAllocAligned(0x10000, 0x100, 0, dataSize, 16, 1);
        s32 recordBytes = FUN_0017daf8(recordCapacity);
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelCommand.cpp", 76);
        buffer->recordBlock = asdMemoryAllocAligned(0x10000, 0x100, 0, recordBytes, 16, 1);
        FUN_0017d1e4(&buffer->queue, dataSize, buffer->dataBlock, recordCapacity, buffer->recordBlock);
        FUN_0017d184(&buffer->queue);
    }

    Vector8 *list = (Vector8 *)FUN_00178b04(sizeof(Vector8), "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelCommand.cpp", 89);
    if (list != NULL) {
        list = FUN_0016d374(list, 0);
    }
    command->listA = list;

    list = (Vector8 *)FUN_00178b04(sizeof(Vector8), "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelCommand.cpp", 90);
    if (list != NULL) {
        list = FUN_0016d374(list, 0);
    }
    command->listB = list;
}

} /* extern "C" */

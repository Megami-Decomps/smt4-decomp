#include "AsdSDK/Source/Sys/Save/AsdSaveCommon.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdMemFree(void *block);
u32 FUN_0037ab70(u32 file, u32 unk, void *buffer, u32 size);
void FUN_002e59f8(const void *src, void *dst, u32 size);

/* Reads a save block: header into `header`, payload (`payloadSize` bytes) into `payload`. Returns the reader's result. */
u32 asdSaveReadBlock(u32 file, u32 unk, void *header, void *payload, u32 payloadSize)
{
    u32 total = payloadSize + ASD_SAVE_HEADER_SIZE;
    u8 *buffer;
    u32 result;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Save\\AsdSaveCommon.cpp", 518);
    buffer = (u8 *)asdMemoryAlloc(0x100, 0x100, 0, total, 1);
    result = FUN_0037ab70(file, unk, buffer, total);
    FUN_002e59f8(buffer, header, ASD_SAVE_HEADER_SIZE);
    FUN_002e59f8(buffer + ASD_SAVE_HEADER_SIZE, payload, payloadSize);
    asdMemFree(buffer);
    return result;
}

} /* extern "C" */

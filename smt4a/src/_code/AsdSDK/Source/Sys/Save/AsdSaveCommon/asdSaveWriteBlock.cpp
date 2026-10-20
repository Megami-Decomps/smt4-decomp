#include "AsdSDK/Source/Sys/Save/AsdSaveCommon.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdMemFree(void *block);
u32 FUN_0037adac(u32 file, u32 unk, void *buffer, u32 size);
void FUN_002e59f8(const void *src, void *dst, u32 size);

/* Writes a save block: `header` then `payload` (`payloadSize` bytes) go out in one piece. Returns the writer's result. */
u32 asdSaveWriteBlock(u32 file, u32 unk, const void *header, const void *payload, u32 payloadSize)
{
    u32 total = payloadSize + ASD_SAVE_HEADER_SIZE;
    u8 *buffer;
    u32 result;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Save\\AsdSaveCommon.cpp", 468);
    buffer = (u8 *)asdMemoryAlloc(0x100, 0x100, 0, total, 1);

    FUN_002e59f8(header, buffer, ASD_SAVE_HEADER_SIZE);
    FUN_002e59f8(payload, buffer + ASD_SAVE_HEADER_SIZE, payloadSize);
    result = FUN_0037adac(file, unk, buffer, total);
    asdMemFree(buffer);
    return result;
}

} /* extern "C" */

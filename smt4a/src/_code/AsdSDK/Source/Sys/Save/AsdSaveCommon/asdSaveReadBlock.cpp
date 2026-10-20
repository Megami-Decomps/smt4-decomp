/* NON_MATCHING: retail has a stripped debug call (file/line setup + nop) before the staging buffer allocation. */
#include "AsdSDK/Source/Sys/Save/AsdSaveCommon.h"

extern "C" {
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdMemFree(void *block);
void FUN_0037ab70(u32 file, u32 unk, void *buffer, u32 size);
void FUN_002e59f8(const void *src, void *dst, u32 size);

/* Reads a save block: header into `header`, payload (`payloadSize` bytes) into `payload`. Returns `file`. */
u32 asdSaveReadBlock(u32 file, u32 unk, void *header, void *payload, u32 payloadSize)
{
    u8 *buffer = (u8 *)asdMemoryAlloc(0x100, 0x100, 0, payloadSize + ASD_SAVE_HEADER_SIZE, 1);

    FUN_0037ab70(file, unk, buffer, payloadSize + ASD_SAVE_HEADER_SIZE);
    FUN_002e59f8(buffer, header, ASD_SAVE_HEADER_SIZE);
    FUN_002e59f8(buffer + ASD_SAVE_HEADER_SIZE, payload, payloadSize);
    asdMemFree(buffer);
    return file;
}

} /* extern "C" */

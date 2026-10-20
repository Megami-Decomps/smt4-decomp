/* NON_MATCHING: retail has a stripped debug call (file/line setup + nop) before the staging buffer allocation. */
#include "AsdSDK/Source/Sys/Save/AsdSaveCommon.h"

extern "C" {
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdMemFree(void *block);
void FUN_002f55cc(u32 file, u32 unk, void *buffer, u32 size);
void FUN_002bd420(const void *src, void *dst, u32 size);

/* Writes a save block: `header` then `payload` (`payloadSize` bytes) go out in one piece. Returns `file`. */
u32 asdSaveWriteBlock(u32 file, u32 unk, const void *header, const void *payload, u32 payloadSize)
{
    u8 *buffer = (u8 *)asdMemoryAlloc(0x100, 0x100, 0, payloadSize + ASD_SAVE_HEADER_SIZE, 1);

    FUN_002bd420(header, buffer, ASD_SAVE_HEADER_SIZE);
    FUN_002bd420(payload, buffer + ASD_SAVE_HEADER_SIZE, payloadSize);
    FUN_002f55cc(file, unk, buffer, payloadSize + ASD_SAVE_HEADER_SIZE);
    asdMemFree(buffer);
    return file;
}

} /* extern "C" */

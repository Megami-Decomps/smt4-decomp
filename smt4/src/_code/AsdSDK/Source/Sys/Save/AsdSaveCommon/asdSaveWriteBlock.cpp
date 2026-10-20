#include "AsdSDK/Source/Sys/Save/AsdSaveCommon.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00409cac[]; /* "c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\Save\\AsdSaveCommon.cpp": __FILE__ */
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdMemFree(void *block);
u32 FUN_002f55cc(u32 file, u32 unk, void *buffer, u32 size);
void FUN_002bd420(const void *src, void *dst, u32 size);

/* Writes a save block: `header` then `payload` (`payloadSize` bytes) go out in one piece. Returns the writer's result. */
u32 asdSaveWriteBlock(u32 file, u32 unk, const void *header, const void *payload, u32 payloadSize)
{
    u32 total = payloadSize + ASD_SAVE_HEADER_SIZE;
    u8 *buffer;
    u32 result;

    asdDebugTrace(DAT_00409cac, 468);
    buffer = (u8 *)asdMemoryAlloc(0x100, 0x100, 0, total, 1);

    FUN_002bd420(header, buffer, ASD_SAVE_HEADER_SIZE);
    FUN_002bd420(payload, buffer + ASD_SAVE_HEADER_SIZE, payloadSize);
    result = FUN_002f55cc(file, unk, buffer, total);
    asdMemFree(buffer);
    return result;
}

} /* extern "C" */

/* NON_MATCHING: native timestamp argument copying and stack-slot reuse require unresolved class-value ABI semantics. */
#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"

extern "C" {
void FUN_00193038(SaveCalendarTime *output, const u64 *time);
void FUN_002e59f8(const void *source, void *destination, u32 bytes);
void rt_aeabi_memclr(void *destination, u32 bytes);
void FUN_0030fc80(u64 *output);

// Initialize a save-block header, stamp its current date and copy optional metadata.
void FUN_00280bd0(AsdSaveHeader *header, u32 gameMagic, u32 blockMagic, u32 version,
                  u32 dataSize, u32 flags, const void *metadata)
{
    rt_aeabi_memclr(header, sizeof(AsdSaveHeader));
    header->gameMagic = gameMagic;
    header->blockMagic = blockMagic;
    header->version = version;
    header->dataSize = dataSize;
    u64 time;
    FUN_0030fc80(&time);
    SaveCalendarTime timestamp;
    FUN_00193038(&timestamp, &time);
    header->timestamp = timestamp;
    header->flags = flags;
    if (metadata != NULL)
        FUN_002e59f8(metadata, header->metadata, sizeof(header->metadata));
}
}

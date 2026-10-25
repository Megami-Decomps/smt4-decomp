/* NON_MATCHING: native timestamp argument copying and stack-slot reuse require unresolved class-value ABI semantics. */
#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"

extern "C" {
void FUN_002ad66c(SaveCalendarTime *output, const u64 *time);
void rt_aeabi_memclr(void *destination, u32 bytes);
void FUN_002c567c(u64 *output);

// Initialize a save-block header, stamp its current date and copy optional metadata.
void FUN_001db90c(AsdSaveHeader *header, u32 gameMagic, u32 blockMagic, u32 version,
                  u32 dataSize, u32 flags, const void *metadata)
{
    rt_aeabi_memclr(header, sizeof(AsdSaveHeader));
    header->gameMagic = gameMagic;
    header->blockMagic = blockMagic;
    header->version = version;
    header->dataSize = dataSize;
    u64 time;
    FUN_002c567c(&time);
    SaveCalendarTime timestamp;
    FUN_002ad66c(&timestamp, &time);
    header->timestamp = timestamp;
    header->flags = flags;
    if (metadata != NULL)
        memCopy(metadata, header->metadata, sizeof(header->metadata));
}
}

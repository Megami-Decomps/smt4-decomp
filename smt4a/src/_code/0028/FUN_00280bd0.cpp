/* NON_MATCHING: native timestamp argument copying and stack-slot reuse require unresolved class-value ABI semantics. */
#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"
#include "AsdSDK/AsdMemCopy.h"

extern "C" {
void FUN_00193038(SaveCalendarTime *output, const u64 *time);
void rt_aeabi_memclr(void *destination, u32 bytes);
void clockGetTicksAsMicroseconds(u64 *output);

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
    clockGetTicksAsMicroseconds(&time);
    SaveCalendarTime timestamp;
    FUN_00193038(&timestamp, &time);
    header->timestamp = timestamp;
    header->flags = flags;
    if (metadata != NULL)
        memcpySrcFirst(metadata, header->metadata, sizeof(header->metadata));
}
}

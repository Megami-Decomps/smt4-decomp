#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"
#include "AsdSDK/AsdMemCopy.h"
#include "shard/W6_W6Match8_DateTimeValue.h"

extern "C" {
SaveCalendarTime FUN_00193038(const DateTimeValue *value);
void rt_aeabi_memclr(void *destination, u32 bytes);
DateTimeValue clockGetTicksAsMicroseconds(void);

// Initialize a save-block header, stamp its current date and copy optional metadata.
void asdSaveHeaderInit(AsdSaveHeader *header, u32 gameMagic, u32 blockMagic, u32 version,
                  u32 dataSize, u32 flags, const void *metadata)
{
    rt_aeabi_memclr(header, sizeof(AsdSaveHeader));
    header->gameMagic = gameMagic;
    header->blockMagic = blockMagic;
    header->version = version;
    header->dataSize = dataSize;
    DateTimeValue now = clockGetTicksAsMicroseconds();
    header->timestamp = FUN_00193038(&now);
    header->flags = flags;
    if (metadata != NULL)
        memcpySrcFirst(metadata, header->metadata, sizeof(header->metadata));
}
}

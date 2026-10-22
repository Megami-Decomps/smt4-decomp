/* NON_MATCHING: Descriptor format dispatch uses branches rather than a jump table; grouped stores differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern ResourceDescriptorPrefixA DAT_0061b000;
extern u8 DAT_0061c000[];

u32 FUN_0016ccfc(void);
s32 tokenResolveAddress(u32 token, const ResourceDescriptorRecordPrefixA **record, u32 key);
s32 initBlockE30(u8 *block);
s32 clearBlock10808(u8 *block);
s32 sysFatalBreak(void);
unsigned long long FUN_00302420(const char *text, u32 unused, u32 base);

s32 FUN_00427e68(u32 key, u32 value)
{
    const ResourceDescriptorRecordPrefixA *record;
    const s32 status = tokenResolveAddress(FUN_0016ccfc(), &record, key);
    if (status < 0)
        return status;

    const u32 identifier = record->identifier;
    const u32 attributes = record->attributes;
    const char *text = reinterpret_cast<const char *>(record) + 0x14;
    initBlockE30(reinterpret_cast<u8 *>(&DAT_0061b000));

    u32 format;
    switch (attributes & 0xffu) {
    case 0: format = 0x8c; break;
    case 1: format = 0x0d; break;
    case 3: format = 0x10; break;
    case 4: format = 0x30; break;
    default: format = 0; break;
    }

    u32 mode = 0;
    switch ((attributes >> 16) & 0xffu) {
    case 0:
        break;
    case 1:
        mode = 2;
        break;
    default:
        sysFatalBreak();
        break;
    }

    DAT_0061b000.packedIdentifier = (mode << 28) |
        ((attributes >> 8) & 0xffu) | ((identifier & 0xfffffu) << 8);
    DAT_0061b000.formatFlags = format | 0x40000u;

    const unsigned long long parsed = FUN_00302420(text, 0, 10);
    DAT_0061b000.parsedLow = static_cast<u32>(parsed);
    DAT_0061b000.parsedHigh = static_cast<u32>(parsed >> 32);
    DAT_0061b000.value = value;
    clearBlock10808(DAT_0061c000);
    return 0;
}
}

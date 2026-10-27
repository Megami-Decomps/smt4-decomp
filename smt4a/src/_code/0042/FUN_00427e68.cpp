/* NON_MATCHING: retail loads the identifier/attributes pair with one `ldm r4, {r4, r6}` (and keeps the value argument in r5); this build loads them separately. */
#include "nn/Result.h"
#include "common.h"
#include "sys/ProgramId.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern ResourceDescriptorPrefixA DAT_0061b000;
extern u8 DAT_0061c000[];

u32 FUN_0016ccfc(void);
s32 tokenResolveAddress(u32 token, const ResourceDescriptorRecordPrefixA **record, u32 key);
s32 initBlockE30(u8 *block);
s32 clearBlock10808(u8 *block);
unsigned long long FUN_00302420(const char *text, u32 unused, u32 base);

s32 FUN_00427e68(u32 key, u32 value)
{
    const ResourceDescriptorRecordPrefixA *record;
    const s32 status = tokenResolveAddress(FUN_0016ccfc(), &record, key);
    if (nnResultIsFailure(status))
        return status;

    const ResourceDescriptorKeyA *body = &record->key;
    const char *text = reinterpret_cast<const char *>(body + 1);
    const ResourceDescriptorKeyA fields = *body;
    initBlockE30(reinterpret_cast<u8 *>(&DAT_0061b000));

    u32 category;
    switch (fields.attributes & 0xffu) {
    case 0: category = 0x8c; break;
    case 1: category = 0x0d; break;
    case 3: category = 0x10; break;
    case 4: category = 0x30; break;
    case 2: category = 0; break;
    default: category = 0; break;
    }
    u32 high = category | 0x40000;
    u32 low = ((fields.attributes >> 8) & 0xffu) | ((fields.identifier & 0xfffffu) << 8);
    s32 media = programMediaBits((fields.attributes >> 16) & 0xffu) << 28;
    DAT_0061b000.programId = (u64)high << 32 | (u64)(low & 0x0fffffffu) | (u64)media;

    const unsigned long long parsed = FUN_00302420(text, 0, 10);
    DAT_0061b000.parsedLow = static_cast<u32>(parsed);
    DAT_0061b000.parsedHigh = static_cast<u32>(parsed >> 32);
    DAT_0061b000.value = value;
    clearBlock10808(DAT_0061c000);
    return 0;
}
}

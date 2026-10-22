/* NON_MATCHING: Header stores do not combine into STRD; resource/output bases and the cached word-count result use different registers. */
#include "common.h"

struct TaggedResourceOwner {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 **entries;
};
struct TaggedBlockHeader {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 tag;
};
struct TaggedBlock {
    /* 0x00 */ TaggedBlockHeader header;
    /* 0x08 */ u8 unk08[0x38];
    /* 0x40 */ u32 payload[1]; /* trailing word storage */
};
struct ResourceWordSegment {
    /* 0x00 */ u32 count;
    /* 0x04 */ u32 words[1]; /* trailing serialized words */
};
extern "C" {
extern u8 DAT_005dee3e;
void FUN_0019a270(void *state, u32 parameter, u32 flags);
u32 *FUN_00501084(ResourceWordSegment *segment, u32 *payload);
void FUN_00500fe4(ResourceWordSegment *segment, u32 *destinationEnd, u8 *trailer);
void rt_memcpy_w(void *destination, const void *source, u32 bytes);

/* Initializes the tagged output, caches its leading word count, and copies that segment. */
void FUN_00419d8c(TaggedResourceOwner *owner, TaggedBlock *output, u32 index, u32 parameter)
{
    u8 *resource = owner->entries[index];
    if (resource == NULL) {
        return;
    }
    output->header.flags = static_cast<u32>(DAT_005dee3e) | 0x80000000u;
    output->header.tag = 0xF02C0;
    FUN_0019a270(output->unk08, parameter, 0xBF02C1);
    ResourceWordSegment *segment = reinterpret_cast<ResourceWordSegment *>(resource + 0x10);
    if (segment->count == 0) {
        u32 *end = FUN_00501084(segment, segment->words);
        segment->count = static_cast<u32>(end - segment->words);
    }
    rt_memcpy_w(output->payload, segment->words, segment->count * sizeof(u32));
    FUN_00500fe4(segment, output->payload + segment->count, resource + 0x7A0);
}
}

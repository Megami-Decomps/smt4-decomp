/* NON_MATCHING: the hash loop uses different scratch registers and schedules the next-byte check differently;
 * the entry and name-table loads also use different scratch registers. */
#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"
#include "AsdSDK/AsdMemCopy.h"
#include "shard/W8X15_PackageList.h"

extern "C" {
void rt_aeabi_memclr(void *memory, u32 size);
u32 libc_strlen(const char *text);
s32 libc_toupper(s32 character);
s32 libc_strncmp(const char *first, const char *second, u32 length);
}

/* Finds a normalized, case-insensitive pathname in a named HPI archive index. */
extern "C" AsdHashPackEntry *asdFileHashPackFindNamedEntry(AsdFileHashPack *index, const char *path)
{
    AsdHashPackHeader *header = index->data;
    if (header == NULL) {
        return NULL;
    }
    if (header->identification.magic[0] != 'H' || header->identification.magic[1] != 'P' ||
        header->identification.magic[2] != 'I' || header->identification.magic[3] != 'H' ||
        header->identification.formatFlags != 0) {
        return NULL;
    }
    if (path == NULL) {
        return NULL;
    }
    if (path[0] == '\0') {
        return NULL;
    }
    char normalized[256];
    rt_aeabi_memclr(normalized, sizeof(normalized));
    memcpySrcFirst(path, normalized, libc_strlen(path));
    pathStripScheme(index, normalized, libc_strlen(normalized));
    s32 length = libc_strlen(normalized);
    /* Process a leading unpaired byte, then convert two bytes at a time. */
    s32 position = length > 0 ? length & 1 : 0;
    if (position == 1)
        normalized[0] = libc_toupper((s8)normalized[0]);
    for (; position < length; position += 2) {
        normalized[position] = libc_toupper((s8)normalized[position]);
        normalized[position + 1] = libc_toupper((s8)normalized[position + 1]);
    }
    u32 bucket = 0;
    u32 bucketCount = index->data->hashCount;
    if (bucketCount != 0) {
        const char *name = normalized;
        u32 hash = (s8)*name++;
        while (*name != '\0') {
            hash = hash * 37 + (s8)*name++;
        }
        bucket = hash % bucketCount;
    }
    const AsdHashPackBucket *range = &index->buckets[bucket];
    s32 count = range->count;
    if (count == 0)
        return NULL;
    u32 first = range->first;
    for (s32 position = 0; position < count; ++position) {
        AsdHashPackEntry *entry = &((AsdHashPackEntry *)index->entries)[first + position];
        const char *name = (const char *)index->names + entry->nameOffset;
        if (libc_strlen(name) == (u32)length && libc_strncmp(name, normalized, length) == 0) {
            return entry;
        }
    }
    return NULL;
}

/* NON_MATCHING: Retail unrolls uppercase conversion by two; hash accumulation registers and bucket/entry loads differ. */
#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"
#include "AsdSDK/AsdMemCopy.h"

extern "C" {
void rt_aeabi_memclr(void *memory, u32 size);
u32 libc_strlen(const char *text);
void pathStripScheme(AsdFileHashPack *index, char *path, u32 length);
s32 libc_toupper(s32 character);
s32 libc_strncmp(const char *first, const char *second, u32 length);
}

static __inline u32 hpiHashNormalizedName(const char *name, u32 bucketCount)
{
    u32 hash = (s8)*name++;
    while (*name != '\0') {
        hash = hash * 37 + (s8)*name++;
    }
    return hash % bucketCount;
}

/* Finds a normalized, case-insensitive pathname in a named HPI archive index. */
extern "C" AsdHashPackEntry *FUN_001a70dc(AsdFileHashPack *index, const char *path)
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
    FUN_002e59f8(path, normalized, libc_strlen(path));
    pathStripScheme(index, normalized, libc_strlen(normalized));
    s32 length = libc_strlen(normalized);
    for (s32 position = 0; position < length; ++position) {
        normalized[position] = libc_toupper((s8)normalized[position]);
    }
    u32 bucket = 0;
    if (index->data->hashCount != 0) {
        bucket = hpiHashNormalizedName(normalized, index->data->hashCount);
    }
    u32 count = index->buckets[bucket].count;
    if (count != 0) {
        u32 first = index->buckets[bucket].first;
        for (s32 position = 0; position < (s32)count; ++position) {
            AsdHashPackEntry *entry = &((AsdHashPackEntry *)index->entries)[first + position];
            const char *name = (const char *)index->names + entry->nameOffset;
            if (libc_strlen(name) == (u32)length && libc_strncmp(name, normalized, length) == 0) {
                return entry;
            }
        }
    }
    return NULL;
}

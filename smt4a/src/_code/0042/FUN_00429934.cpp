/* NON_MATCHING: compiler does not hoist the metadata-key literal and places the found-property branch in a cold tail. */
#include "common.h"
#include <string.h>

struct ResourceMetadataEntry {
    const char *key;
    const char *value;
};
struct ResourceMetadataTable {
    ResourceMetadataEntry *entries;
    u32 count;
};
struct ResourceMetadataOwner {
    u32 unk00;
    ResourceMetadataTable *metadata;
};
extern "C" {
s32 libc_strncmp(const char *, const char *, u32);
void rt_memcpy(void *, const void *, u32);
}

/* Copy the card-type code property, returning an empty fixed-size value if absent. */
extern "C" void FUN_00429934(char *output, const ResourceMetadataOwner *owner)
{
    char value[64] = {0};
    ResourceMetadataTable *metadata = owner->metadata;
    u32 count = metadata->count;
    for (u32 i = 0; i < count; ++i) {
        if (libc_strncmp(metadata->entries[i].key, "sys.ECardTypeCode", sizeof(value)) == 0) {
            const char *source = metadata->entries[i].value;
            if (source != NULL) {
                strncpy(value, source, sizeof(value));
            }
            break;
        }
    }
    rt_memcpy(output, value, sizeof(value));
}

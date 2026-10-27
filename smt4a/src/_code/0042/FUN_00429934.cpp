/* NON_MATCHING: the search loop then the found-property copy after it now follows retail's layout; remaining: retail has a NOPed call (an empty-function call armlink removed, needs a multifile list) between the strncmp test and its branch, which keeps the loop unpredicated; registers shift with it. */
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
    const char *key = "sys.ECardTypeCode";
    u32 i;
    for (i = 0; i < count; ++i) {
        if (libc_strncmp(metadata->entries[i].key, key, sizeof(value)) == 0) {
            break;
        }
    }
    if (i < count) {
        const char *source = metadata->entries[i].value;
        if (source != NULL) {
            strncpy(value, source, sizeof(value));
        }
    }
    rt_memcpy(output, value, sizeof(value));
}

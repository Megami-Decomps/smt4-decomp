/* NON_MATCHING: string literal hoisting, identity temporaries and match-branch registers differ from retail. */
#include "shard/W5_W5Match5_TwinRecords.h"

using namespace ResourceTableLookup;

extern "C" int libc_strncmp(const char *left, const char *right, u32 size);
extern "C" char *strncpy(char *destination, const char *source, u32 size);

/* Extract a resource's numeric id and its sys.ItemCode attribute. */
extern "C" void FUN_003df8e4(ResourceItemIdentity *output, ResourceTable **resource)
{
    /* ResourceHeader's byte prefix cannot gain an aligned word without moving its count. */
    struct ResourceHeaderIdView { u32 id; };
    ResourceItemIdentity identity = {0};
    ResourceTable *table = *resource;
    identity.id = reinterpret_cast<ResourceHeaderIdView *>(table->header)->id;
    const u32 count = table->attributes.count;
    const char *code = NULL;
    for (u32 index = 0; index < count; ++index) {
        if (libc_strncmp(table->attributes.entries[index].name, "sys.ItemCode", 64) == 0) {
            code = table->attributes.entries[index].value;
            break;
        }
    }
    strncpy(identity.code, code, sizeof(identity.code));
    identity.code[31] = 0;
    *output = identity;
}

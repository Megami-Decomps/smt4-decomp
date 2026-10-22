/* NON_MATCHING: the resource-body adjustment folds into a single load at the combined offset. */
#include "common.h"

struct ResourceNameGroup {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ const char **names;
    /* 0x08 */ u32 count;
};
struct ResourceNameGroupTable {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ ResourceNameGroup *groups;
    /* 0x10 */ u32 count;
};
struct ResourceNameTableRef {
    /* 0x00 */ ResourceNameGroupTable *table;
};
struct ResourceNameData {
    /* 0x00 */ u8 unk00[0xa8];
    /* 0xa8 */ ResourceNameTableRef *tableRef;
};
struct ResourceNameBody {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ ResourceNameData *data;
};
struct NamedResource {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ ResourceNameBody body;
};
struct NamedResourceOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ NamedResource *resource;
};

extern "C" {
s32 libc_strcmp(const char *first, const char *second);

s32 FUN_00406798(const NamedResourceOwner *owner, const char *name)
{
    if (!owner->resource) {
        return -1;
    }
    ResourceNameGroupTable *table = owner->resource->body.data->tableRef->table;
    for (u32 groupIndex = 0; groupIndex < table->count; ++groupIndex) {
        const ResourceNameGroup *group = &table->groups[groupIndex];
        for (u32 index = 0; index < group->count; ++index) {
            if (libc_strcmp(group->names[index], name) == 0) {
                return groupIndex;
            }
        }
    }
    return -1;
}
}

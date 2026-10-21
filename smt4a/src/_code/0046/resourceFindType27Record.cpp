#include "common.h"

struct ResourceTableFile {
    /* 0x00 */ void *file;
    /* 0x04 */ u8 unk04[0xc];
};

struct ResourceDescription {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[0x3f];
};

struct ResourceContainer {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ ResourceTableFile *files;
};

struct ResourceCollection {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 count;
    /* 0x314 */ u32 unk314;
    /* 0x318 */ ResourceContainer *containers;
};

struct ResourceTableRecord {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 payload[0x78];
};

extern "C" {
s32 FUN_001b315c(ResourceContainer *);
ResourceDescription *FUN_001b31ac(ResourceContainer *);
u32 FUN_001b31e0(ResourceContainer *);
void *dataTableFileGetTable(void *file, u32 index);
ResourceTableRecord *dataTableGetEntries(void *table);
s32 dataTableGetCount(void *table);

// Find an ID in the first table of a type-27 resource.
void *resourceFindType27Record(ResourceCollection *collection, s32 id)
{
    for (s32 i = 0; i < collection->count; ++i) {
        ResourceContainer *container = &collection->containers[i];
        if (FUN_001b315c(container)) {
            ResourceDescription *descriptions = FUN_001b31ac(container);
            u32 count = FUN_001b31e0(container);
            for (u32 j = 0; j < count; ++j) {
                if (descriptions[j].kind == 0x1b) {
                    void *table = dataTableFileGetTable(container->files[j].file, 0);
                    ResourceTableRecord *records = dataTableGetEntries(table);
                    s32 recordCount = dataTableGetCount(table);
                    for (s32 k = 0; k < recordCount; ++k) {
                        if (records[k].id == id)
                            return records[k].payload;
                    }
                }
            }
        }
    }
    return NULL;
}
}

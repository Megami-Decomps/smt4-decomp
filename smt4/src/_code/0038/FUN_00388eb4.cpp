/* NON_MATCHING: The saved file ID and coordinate arguments occupy different registers, with an LDM pair instead of LDRD. */
#include "common.h"

namespace {
struct ResourceParameters {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10[0x2C];
};
struct ResourceObject {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 parameters[1];
};
struct ResourceHandle { /* 0x00 */ ResourceObject *object; };
struct ResourceEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ResourceHandle *handle;
};
struct ResourceTable { /* 0x00 */ ResourceEntry *entry; };
struct ResourceFile { /* 0x00 */ ResourceTable *table; };
struct FileEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ResourceFile *resource;
};
}
extern "C" {
FileEntry *packageFindFileRefByName(void *owner, u32 type, u32 fileId);
u32 asdTMTexTableCallFileB(u32 type, u32 fileId);
void FUN_002a6d1c(ResourceParameters *parameters, u32 value, u32 x, u32 y, u32 scalar);
void FUN_002a8ac4(void *destination, ResourceParameters *parameters, u32 file);

/* Applies the requested file and parameter block to the selected text resource. */
void FUN_00388eb4(void *owner, u32 unused, u32 value, u32 fileId, u32 x, u32 y, u32 scalar)
{
    FileEntry *entry = packageFindFileRefByName(owner, 0x17, fileId);
    ResourceFile *resource = NULL;
    if (entry != NULL) {
        resource = entry->resource;
    }
    u32 file = asdTMTexTableCallFileB(0x17, fileId);
    ResourceParameters parameters;
    FUN_002a6d1c(&parameters, value, x, y, scalar);
    FUN_002a8ac4(resource->table->entry->handle->object->parameters, &parameters, file);
}
}

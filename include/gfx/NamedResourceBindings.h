#ifndef GFX_NAMEDRESOURCEBINDINGS_H
#define GFX_NAMEDRESOURCEBINDINGS_H
#include "common.h"
#include <stddef.h>

struct NamedResourceDirectoryData {
    /* 0x00 */ void** resources;
    /* 0x04 */ u8 nameIndex[4]; // Embedded lookup structure; remaining extent is unknown.
};
struct NamedResourceDirectory {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ NamedResourceDirectoryData data;
};
struct NamedResourceBindingArray {
    /* 0x00 */ void** resources;
    /* 0x04 */ u32 capacity;
};
struct NamedResourceBindingRequest {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ const u16** names;
    /* 0x1C */ u32 count;
};
struct NamedResourceBindingOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ NamedResourceDirectory* directory;
};
typedef char NamedResourceBindingOffsetsCheck[
    offsetof(NamedResourceDirectory, data.resources) == 0x24 &&
    offsetof(NamedResourceDirectory, data.nameIndex) == 0x28 &&
    offsetof(NamedResourceBindingRequest, count) == 0x1C &&
    offsetof(NamedResourceBindingOwner, directory) == 0x30 ? 1 : -1];
#endif

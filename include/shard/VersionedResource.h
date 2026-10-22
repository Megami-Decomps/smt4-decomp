#ifndef SHARD_VERSIONEDRESOURCE_H
#define SHARD_VERSIONEDRESOURCE_H

#include "common.h"
#include <stddef.h>

struct VersionedResourceHeader {
    /* 0x00 */ u8 signature[4];
    /* 0x04 */ s8 version[4];
    /* 0x08 */ u16 payloadOffset;
    /* 0x0a */ u8 format;
    /* 0x0b */ u8 unk0b;
};

typedef char VersionedResourceHeaderLayoutCheck[sizeof(VersionedResourceHeader) == 12 &&
    offsetof(VersionedResourceHeader, payloadOffset) == 8 &&
    offsetof(VersionedResourceHeader, format) == 10 ? 1 : -1];

#endif

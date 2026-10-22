#ifndef GFX_VERSIONEDTEXTUREREQUEST_H
#define GFX_VERSIONEDTEXTUREREQUEST_H
#include "common.h"
#include <stddef.h>

struct VersionedTextureRequest {
    /* 0x00 */ u8 id;
    /* 0x01 */ u8 padding01[3];
    /* 0x04 */ const char *format;
    /* 0x08 */ char name[0x80];
    /* 0x88 */ u8 flags;
    /* 0x89 */ u8 padding89[3];
};
struct VersionedTextureOwner {
    u8 prefix[0x3028];
    u32 flags;
    u8 padding302C[0x1EC];
    VersionedTextureRequest request;
};
typedef char VersionedTextureRequestLayoutCheck[
    offsetof(VersionedTextureRequest, flags) == 0x88 &&
    sizeof(VersionedTextureRequest) == 0x8C &&
    offsetof(VersionedTextureOwner, flags) == 0x3028 &&
    offsetof(VersionedTextureOwner, request) == 0x3218 ? 1 : -1];
#endif

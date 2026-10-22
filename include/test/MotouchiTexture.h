#ifndef TEST_MOTOUCHITEXTURE_H
#define TEST_MOTOUCHITEXTURE_H
#include "common.h"
#include <stddef.h>

struct MotouchiTexture {
    u32 unk00;
    u32 target; // 0x04
    u32 unk08;
    u32 unk0c;
    s32 mipLevel; // 0x10
    u32 width; // 0x14
    u32 height; // 0x18
    u32 format; // 0x1c
    u32 pixelType; // 0x20
    void *data; // 0x24
    u32 dataSize; // 0x28
};
struct MotouchiTextureResource {
    u32 magic; // 0x00: TXOB
    u8 unk04[0x10];
    u32 height; // 0x14
    u32 width; // 0x18
    u32 format; // 0x1c
    u32 pixelType; // 0x20
    s32 mipLevel; // 0x24
    u8 unk28[0x18];
    u32 dataSize; // 0x40
    s32 dataOffset; // 0x44: relative to this field
};
typedef char MotouchiTextureLayoutCheck[sizeof(MotouchiTexture) == 0x2c && offsetof(MotouchiTexture, data) == 0x24 ? 1 : -1];
typedef char MotouchiTextureResourceLayoutCheck[sizeof(MotouchiTextureResource) == 0x48 && offsetof(MotouchiTextureResource, dataOffset) == 0x44 ? 1 : -1];
#endif

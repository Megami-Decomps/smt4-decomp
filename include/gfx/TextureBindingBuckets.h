#ifndef GFX_TEXTUREBINDINGBUCKETS_H
#define GFX_TEXTUREBINDINGBUCKETS_H
#include "common.h"
#include <stddef.h>

struct TextureBindingNode {
    /* 0x00 */ u32 key;
    /* 0x04 */ u32 kind;
    /* 0x08 */ void *resource;
    /* 0x0C */ TextureBindingNode *next;
};
struct TextureBindingBuckets {
    /* 0x000 */ TextureBindingNode *buckets[512];
    /* 0x800 */ void *storage;
};
typedef char TextureBindingBucketsLayoutCheck[
    sizeof(TextureBindingNode) == 0x10 &&
    offsetof(TextureBindingNode, kind) == 4 &&
    offsetof(TextureBindingNode, resource) == 8 &&
    offsetof(TextureBindingNode, next) == 0xC &&
    offsetof(TextureBindingBuckets, storage) == 0x800 ? 1 : -1];
#endif

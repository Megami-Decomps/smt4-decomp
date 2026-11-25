#ifndef GFX_TEXTUREBINDINGBUCKETS_H
#define GFX_TEXTUREBINDINGBUCKETS_H
#include "common.h"
#include <stddef.h>

struct GfxReleaseEntry {
    /* 0x00 */ void *mainData;
    /* 0x04 */ void *subData;
    /* 0x08 */ u32 unk08[3];
    /* 0x14 */ u32 mainKind;
    /* 0x18 */ s32 kind;
};

struct TextureBindingNode {
    /* 0x00 */ u32 address;
    /* 0x04 */ u32 kind;
    /* 0x08 */ void *resource; /* GfxReleaseEntry when kind is 0 */
    /* 0x0C */ TextureBindingNode *next;
};
struct TextureBindingBuckets {
    /* 0x000 */ TextureBindingNode *buckets[512];
    /* 0x800 */ void *storage;
};
typedef char TextureBindingBucketsLayoutCheck[
    sizeof(TextureBindingNode) == 0x10 &&
    offsetof(GfxReleaseEntry, mainKind) == 0x14 && offsetof(GfxReleaseEntry, kind) == 0x18 &&
    offsetof(TextureBindingNode, kind) == 4 &&
    offsetof(TextureBindingNode, resource) == 8 &&
    offsetof(TextureBindingNode, next) == 0xC &&
    offsetof(TextureBindingBuckets, storage) == 0x800 ? 1 : -1];
extern "C" void gfxReleaseEntryBlocks(TextureBindingNode *node);

#endif

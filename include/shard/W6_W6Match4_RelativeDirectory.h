#ifndef SHARD_W6_W6MATCH4_RELATIVEDIRECTORY_H
#define SHARD_W6_W6MATCH4_RELATIVEDIRECTORY_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

struct DirectoryRecord {
    u32 id; // 0x00
    u32 size; // 0x04
    u32 dataOffset; // 0x08
    u32 unk0c;
};
struct RelativeDirectory {
    u8 unk00[0x10];
    s32 count; // 0x10
    u32 recordsOffset; // 0x14
};

extern "C" {
void FUN_0029e328(u8 value);
}

#ifdef __cplusplus
extern "C" {
#endif

u32 flagCountUnlockedSlots(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_0031f208(u8 value);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y, RelativeDirectory *directory, u32 index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 ifTouchRegionAdd(u16 x, u16 y, u16 width, u16 height);

#ifdef __cplusplus
}
#endif

#endif

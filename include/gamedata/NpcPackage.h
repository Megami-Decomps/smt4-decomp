#ifndef GAMEDATA_NPC_PACKAGE_H
#define GAMEDATA_NPC_PACKAGE_H
#include "common.h"
#include <stddef.h>

struct NpcPackagePrimaryRecord { u8 data[0x20]; };
struct NpcPackageSecondaryRecord { u8 data[0x28]; };
struct NpcPackageExtraRecord { u8 data[0x18]; };
struct NpcPackageHeader {
    u32 magic;
    u16 primaryCount;
    u16 indexCount;
    u32 secondaryCount;
    u16 extraCount;
    u8 unk0E[0x1A];
};
struct NpcPackageWork {
    u32 unk00;
    s32 id;
    s32 kind;
    s32 sourceId;
    NpcPackageHeader* header;
    NpcPackagePrimaryRecord* primary;
    NpcPackageSecondaryRecord* secondary;
    u32* indices;
    NpcPackageExtraRecord* extra;
    void* payload;
    void* fileData;
    u8 unk2C[0x10];
    bool loaded;
};
typedef char NpcPackageHeaderLayoutCheck[sizeof(NpcPackageHeader) == 0x28 &&
    offsetof(NpcPackageHeader, primaryCount) == 4 && offsetof(NpcPackageHeader, secondaryCount) == 8 &&
    offsetof(NpcPackageHeader, extraCount) == 0xC ? 1 : -1];
typedef char NpcPackageRecordSizeCheck[sizeof(NpcPackagePrimaryRecord) == 0x20 &&
    sizeof(NpcPackageSecondaryRecord) == 0x28 && sizeof(NpcPackageExtraRecord) == 0x18 ? 1 : -1];
typedef char NpcPackageWorkOffsets[offsetof(NpcPackageWork, header) == 0x10 &&
    offsetof(NpcPackageWork, fileData) == 0x28 && offsetof(NpcPackageWork, loaded) == 0x3C ? 1 : -1];
#endif

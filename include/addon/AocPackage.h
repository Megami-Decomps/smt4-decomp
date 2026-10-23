#ifndef ADDON_AOC_PACKAGE_H
#define ADDON_AOC_PACKAGE_H
#include "common.h"
#include <stddef.h>
struct AocPackageFile {
    /* 0x00 */ void *data;
    union {
        /* 0x04 */ u8 unk04[0xC];
        struct {
            /* 0x04 */ u8 unk04[8];
            /* 0x0C */ u8 available;
            /* 0x0D */ u8 unk0D[3];
        } state;
        struct {
            u8 unk04[4];
            u32 result; // 0x08
            u8 available;
            u8 completion; // 0x0D
            u8 unk0E[2];
        } texture;
    };
};
typedef char AocPackageFileAvailableOffsetCheck[
    offsetof(AocPackageFile, state.available) == 0xC ? 1 : -1];
typedef char AocPackageFileTextureOffsetsCheck[
    offsetof(AocPackageFile, texture.result) == 8 &&
    offsetof(AocPackageFile, texture.completion) == 0xD ? 1 : -1];
struct AocPackageFileDescription {
    /* 0x00 */ u8 kind;
    union {
        /* 0x01 */ u8 unk01[0x3F];
        /* 0x01 */ char name[0x3F];
    };
};
struct QuestRecord {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 data[0x3C];
};
struct AocPackage {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u16 id;
    /* 0x0A */ u8 unk0A[0x16];
    /* 0x20 */ u32 archive;
    /* 0x24 */ char mountName[16];
    /* 0x34 */ u32 flags;
    union {
        /* 0x38 */ u8 unk38[0x18];
        struct {
            /* 0x38 */ u8 unk38[0x14];
            /* 0x4C */ AocPackageFile *files;
        } fileTable;
    };
};
typedef char AocPackageLayoutCheck[sizeof(AocPackage) == 0x50 &&
    offsetof(AocPackage, id) == 8 && offsetof(AocPackage, archive) == 0x20 &&
    offsetof(AocPackage, mountName) == 0x24 && offsetof(AocPackage, flags) == 0x34 ? 1 : -1];
typedef char AocPackageFileLayoutCheck[offsetof(AocPackage, fileTable.files) == 0x4C &&
    sizeof(AocPackageFile) == 0x10 && sizeof(AocPackageFileDescription) == 0x40 &&
    sizeof(QuestRecord) == 0x40 ? 1 : -1];
typedef char AocPackageFileDescriptionNameOffsetCheck[
    offsetof(AocPackageFileDescription, name) == 1 ? 1 : -1];
#endif

#ifndef ADDON_PACKAGESELECTION_H
#define ADDON_PACKAGESELECTION_H
#include "shard/W8X15_PackageList.h"
#include <stddef.h>

struct PackageSelectableRecord {
    /* 0x00 */ u16 id;
    union {
        /* 0x02 */ u8 unk02[0x5C];
        struct {
            u8 prefix[0x56];
            /* 0x58 */ u16 mode;
            /* 0x5A */ u16 completionFlag;
            /* 0x5C */ u16 unlockFlag;
        } progress;
    };
    /* 0x5E */ u16 options[5];
    /* 0x68 */ u8 unk68[0x14];
};
struct PackageIndexedRecord {
    /* 0x00 */ u8 data[0x24];
};
struct ExtendedPackageIndexedRecord {
    /* 0x00 */ u8 data[0x2C];
};
typedef char PackageSelectableRecordSizeCheck[sizeof(PackageSelectableRecord) == 0x7C &&
    offsetof(PackageSelectableRecord, options) == 0x5E ? 1 : -1];
typedef char PackageSelectableRecordProgressOffsetCheck[
    offsetof(PackageSelectableRecord, progress.mode) == 0x58 &&
    offsetof(PackageSelectableRecord, progress.completionFlag) == 0x5A &&
    offsetof(PackageSelectableRecord, progress.unlockFlag) == 0x5C &&
    sizeof(PackageSelectableRecord) == 0x7C ? 1 : -1];
#endif

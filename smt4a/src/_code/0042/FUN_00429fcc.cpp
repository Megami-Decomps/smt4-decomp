/* NON_MATCHING: result module/description extraction and signed status tests lower differently. */
#include "common.h"

struct SaveDataArchivePath {
    /* 0x00 */ u8 mediaType;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u32 titleIdLow;
    /* 0x08 */ u32 titleIdHigh;
};
struct SaveDataArchive;
struct SaveDataArchiveVtable {
    /* 0x00 */ void *unk00[12];
    /* 0x30 */ void (*close)(SaveDataArchive *archive);
};
struct SaveDataArchive {
    /* 0x00 */ SaveDataArchiveVtable *vtable;
};

extern "C" {
void FUN_0016cdc0(SaveDataArchivePath *path, u8 mediaType, u64 titleId);
s32 FUN_0042b3b8(SaveDataArchive **archive, const SaveDataArchivePath *path, u32 flags);
s32 FUN_001aeefc(const char *name, SaveDataArchive *archive, u32 first, u32 second);

s32 FUN_00429fcc(const char *name, u64 titleId)
{
    SaveDataArchivePath path;
    FUN_0016cdc0(&path, 1, titleId);
    SaveDataArchive *archive;
    s32 status = FUN_0042b3b8(&archive, &path, 0);
    u32 module = ((u32)status >> 10) & 0xff;
    s32 description = (u32)status & 0x3ff;
    if (module == 17 && description >= 220 && description <= 229) {
        status = (s32)0xc8804482;
    }
    if (status >= 0) {
        status = FUN_001aeefc(name, archive, 0, 0);
        if (status < 0) {
            archive->vtable->close(archive);
        }
    }
    return status;
}
}

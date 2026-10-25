#ifndef NN_FS_ARCHIVE_CREATE_FILE_H
#define NN_FS_ARCHIVE_CREATE_FILE_H

#include "nn/fs/ArchivePath.h"

/* The archive interface's create-file operation is its seventh virtual slot. */
class ArchiveCreationDevice : public ArchivePathDevice {
public:
    virtual void operation04();
    virtual void operation08();
    virtual void operation0c();
    virtual void operation10();
    virtual void operation14();
    virtual s32 createFile(const ArchivePathDescriptor *path, u64 size);
};
typedef char ArchiveCreationDeviceSizeCheck[sizeof(ArchiveCreationDevice) == sizeof(ArchivePathDevice) ? 1 : -1];

extern "C" {
s32 FUN_002ad80c(const u16 *path, u64 size);
s32 FUN_00158844(const u16 *path, u64 size);
}

#endif

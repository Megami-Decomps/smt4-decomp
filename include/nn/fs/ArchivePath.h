#ifndef NN_FS_ARCHIVE_PATH_H
#define NN_FS_ARCHIVE_PATH_H
#include "common.h"
extern "C" u32 wstrlenU16(const u16*);

struct ArchivePathDescriptor {
    // Device lookup has already accepted the archive-qualified path.
    ArchivePathDescriptor(const u16* fullPath)
    {
        while (*fullPath++ != ':') {
        }
        type = 4;
        data = fullPath;
        size = (wstrlenU16(fullPath) + 1) * sizeof(u16);
    }

    u32 type; // 0x00
    const void* data; // 0x04
    u32 size; // 0x08
};
class ArchivePathDevice {
public:
    virtual u32 open(u32* result, const ArchivePathDescriptor* path, u32 flags);
};
/* Opens an archive-qualified UTF-16 path on its archive's device and stores the file handle on success.
 * Returns the device's result code, or 0xC8804465 when no device owns the archive name. The callers' code
 * (FUN_00220330's, FUN_00317d48's) shows a plain integer, not an nn::Result class value. */
extern "C" s32 archivePathDeviceOpen(u32 *handle, const u16 *path, u32 mode);
typedef char ArchivePathDescriptorSizeCheck[sizeof(ArchivePathDescriptor) == 12 ? 1 : -1];
#endif

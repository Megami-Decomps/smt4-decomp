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
typedef char ArchivePathDescriptorSizeCheck[sizeof(ArchivePathDescriptor) == 12 ? 1 : -1];
#endif

/* NON_MATCHING: retail walks the archive prefix in the path's own register (r4) and stores the descriptor's type and
 * data with one stm; the build copies the path into r0 for the walk and stores them separately. */
#include "nn/fs/ArchiveCreateFile.h"

extern "C" ArchiveCreationDevice *FUN_00197c78(const u16 *path);

/* Resolve the archive prefix and create the requested file in that archive. */
extern "C" nn::Result archivePathDeviceCreateFile(const u16 *path, u64 size)
{
    ArchiveCreationDevice *device = FUN_00197c78(path);
    if (device == NULL) {
        return 0xC8804465u;
    }
    return device->createFile(ArchivePathDescriptor(path), size);
}

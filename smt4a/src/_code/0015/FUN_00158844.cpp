/* NON_MATCHING: descriptor construction uses fewer saved registers and separate type/data stores; retail retains the descriptor address and uses stm. */
#include "nn/fs/ArchiveCreateFile.h"

extern "C" ArchiveCreationDevice *FUN_00197c78(const u16 *path);

/* Resolve the archive prefix and create the requested file in that archive. */
extern "C" nn::Result FUN_00158844(const u16 *path, u64 size)
{
    ArchiveCreationDevice *device = FUN_00197c78(path);
    if (device == NULL) {
        return 0xC8804465u;
    }
    ArchivePathDescriptor archivePath(path);
    return device->createFile(&archivePath, size);
}

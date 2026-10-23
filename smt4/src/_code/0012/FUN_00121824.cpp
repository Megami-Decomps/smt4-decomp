/* NON_MATCHING: read-count scratch is at +96 rather than +120; suppress-errors addressing, path-loop rotation and return sharing differ; 78 versus retail 83 instructions. */
#include "nw/snd/SoundArchiveDisk.h"

extern "C" {
s32 FUN_00130320(NativeFileReader *reader, const s8 *path, s32 suppressErrors);
s32 FUN_002b4e00(NativeFileReader *reader, void *buffer, u32 bytes, u32 *readBytes);
void FUN_00130e50(ArchiveFileHeader *header, const void *buffer);
void FUN_0012f5ac(SoundArchiveDiskIV *archive, const ArchiveFileHeader *header);
u32 libc_strlen(const s8 *path);
void nw_snd_SoundArchive_SetExternalFileRoot(SoundArchiveDiskIV *archive, const s8 *root);

// Open a CSAR file, initialize its header and derive the external-file root from its path.
u32 FUN_00121824(SoundArchiveDiskIV *archive, const s8 *path)
{
    // Header I/O and root extraction are disjoint phases of the same scratch workspace.
    union ArchiveOpenScratch {
        struct { u8 storage[64 + 31]; u32 readBytes; } header;
        s8 directory[256];
    } scratch;
    if (!FUN_00130320(&archive->reader, path, archive->suppressErrors)) {
        archive->result = archive->reader.result;
        return 0;
    }
    archive->opened = 1;
    {
        void *header = reinterpret_cast<void *>((reinterpret_cast<u32>(scratch.header.storage) + 31) & ~31u);
        scratch.header.readBytes = 0;
        if (!FUN_002b4e00(&archive->reader, header, 64, &scratch.header.readBytes)) {
            archive->result = archive->reader.result;
            return 0;
        }
        if (scratch.header.readBytes != 64)
            return 0;
        FUN_00130e50(&archive->header, header);
        FUN_0012f5ac(archive, &archive->header);
    }
    s32 separator = libc_strlen(path);
    do {
        if (--separator < 0)
            return 1;
    } while (path[separator] != '/' && path[separator] != '\\');
    if (separator >= 256)
        return 0;
    s8 *destination = scratch.directory;
    u32 copied = 0;
    do {
        u32 limit = static_cast<u32>(separator) < 255u ? static_cast<u32>(separator) : 255u;
        if (copied >= limit)
            break;
        ++copied;
        *destination++ = *path++;
    } while (*path);
    *destination = 0;
    scratch.directory[separator] = 0;
    nw_snd_SoundArchive_SetExternalFileRoot(archive, scratch.directory);
    return 1;
}
}

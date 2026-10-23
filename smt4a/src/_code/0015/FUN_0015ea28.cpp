/* NON_MATCHING: header/path stack lifetimes are not overlaid, and archive status addressing and bounded-copy control flow differ. */
#include "nw/snd/SoundArchiveDisk.h"

extern "C" {
s32 FUN_001748a0(NativeFileReader *reader, const char *path, s32 suppressErrors);
s32 FUN_00174a00(NativeFileReader *reader, void *data, u32 size, u32 *bytesRead);
void FUN_00175750(ArchiveFileHeader *header, const void *data);
void FUN_001739d4(SoundArchiveDisk *archive, ArchiveFileHeader *header);
void FUN_001739f8(SoundArchiveDisk *archive, const char *directory);
u32 wstrlen(const char *text);

// Open a CSAR stream, install its header and remember the containing directory.
u32 FUN_0015ea28(SoundArchiveDisk *archive, const char *path)
{
    if (!FUN_001748a0(&archive->reader, path, archive->suppressErrors)) {
        archive->result = archive->reader.result;
        return 0;
    }
    archive->opened = 1;
    {
        // The native file reader requires a cache-line-aligned destination.
        u8 storage[64 + 31];
        void *data = (void *)(((u32)storage + 31) & ~31u);
        u32 bytesRead = 0;
        if (!FUN_00174a00(&archive->reader, data, 64, &bytesRead)) {
            archive->result = archive->reader.result;
            return 0;
        }
        if (bytesRead != 64) {
            return 0;
        }
        FUN_00175750(&archive->header, data);
        FUN_001739d4(archive, &archive->header);
    }
    s32 separator = wstrlen(path) - 1;
    while (separator >= 0 && path[separator] != '/' && path[separator] != '\\') {
        --separator;
    }
    if (separator < 0) {
        return 1;
    }
    if (separator >= 256) {
        return 0;
    }
    char directory[256];
    char *destination = directory;
    u32 count = 0;
    while (count < ((u32)separator < 255 ? (u32)separator : 255)) {
        *destination++ = *path++;
        ++count;
        if (*path == '\0') {
            break;
        }
    }
    *destination = '\0';
    directory[separator] = '\0';
    FUN_001739f8(archive, directory);
    return 1;
}
}

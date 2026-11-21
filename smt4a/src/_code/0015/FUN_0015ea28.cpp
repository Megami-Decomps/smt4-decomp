/* NON_MATCHING: 43 lines, all from one base choice: retail forms archive + 0x100 in r6 for the suppressErrors byte (ldrsb [r6, #0x91]) and reuses it for reader.result, which costs it r8 and a 256-byte frame; the build loads 0x191 from the pool, saves one register less and pads the frame to 260. */
#include "nw/snd/SoundArchiveDisk.h"

extern "C" {
s32 FUN_001748a0(NativeFileReader *reader, const char *path, s32 suppressErrors);
s32 fileHandleRead(NativeFileReader *reader, void *data, u32 size, u32 *bytesRead);
void FUN_00175750(ArchiveFileHeader *header, const void *data);
void FUN_001739d4(SoundArchiveDisk *archive, ArchiveFileHeader *header);
u32 libc_strlen(const char *text);
void FUN_001739f8(SoundArchiveDisk *archive, const char *directory);
}

/* Copies at most srcCount characters of src, and never more than dstCount - 1, then terminates
 * dst (NintendoWare's ut::strncpy). */
static __inline void utStrncpy(char *dst, u32 dstCount, const char *src, u32 srcCount)
{
    u32 count = 0;
    do {
        u32 limit = dstCount - 1 <= srcCount ? dstCount - 1 : srcCount;
        if (limit <= count)
            break;
        ++count;
        *dst++ = *src++;
    } while (*src);
    *dst = 0;
}

/* Reads the archive's file header and installs it. */
static __inline bool loadFileHeader(SoundArchiveDisk *archive)
{
    /* The file reader needs a 32-byte aligned destination. */
    u8 storage[sizeof(ArchiveFileHeader) + 64];
    void *header = (void *)(((u32)storage + 31) & ~31u);
    u32 readBytes = 0;
    if (!fileHandleRead(&archive->reader, header, 64, &readBytes)) {
        archive->result = archive->reader.result;
        return false;
    }
    if (readBytes != 64)
        return false;
    FUN_00175750(&archive->header, header);
    FUN_001739d4(archive, &archive->header);
    return true;
}

extern "C" {
/* Opens a CSAR file, loads its header and sets the external-file root to the file's directory. */
u32 FUN_0015ea28(SoundArchiveDisk *archive, const char *path)
{
    if (!FUN_001748a0(&archive->reader, path, archive->suppressErrors)) {
        archive->result = archive->reader.result;
        return 0;
    }
    archive->opened = 1;
    if (!loadFileHeader(archive))
        return 0;
    for (s32 i = libc_strlen(path) - 1; i >= 0; i--) {
        if (path[i] == '/' || path[i] == '\\') {
            if (i >= 256)
                return 0;
            char root[256];
            utStrncpy(root, sizeof(root), path, i);
            root[i] = 0;
            FUN_001739f8(archive, root);
            break;
        }
    }
    return 1;
}
}

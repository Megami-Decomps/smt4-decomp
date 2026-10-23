#ifndef NW_SND_SOUND_ARCHIVE_DISK_H
#define NW_SND_SOUND_ARCHIVE_DISK_H
#include "common.h"
#include "mobiclip_ctrl/MobiclipPlaybackStart.h"
#include <stddef.h>

struct NativeFileReader {
    /* 0x00 */ void *vtable;
    /* 0x04 */ MovieOpenFile file;
    /* 0x18 */ u32 result;
    /* 0x1C */ s8 suppressErrors;
    /* 0x1D */ u8 unk1D[3];
};
struct ArchiveFileHeader {
    u8 bytes[0x38];
};
struct SoundArchiveDisk {
    /* 0x000 */ u8 unk000[0x11C];
    /* 0x11C */ NativeFileReader reader;
    /* 0x13C */ ArchiveFileHeader header;
    /* 0x174 */ u8 unk174[0xC];
    /* 0x180 */ u32 result;
    /* 0x184 */ u8 unk184[0xC];
    /* 0x190 */ u8 opened;
    /* 0x191 */ s8 suppressErrors;
    /* 0x192 */ u8 unk192[2];
};
struct SoundArchiveDiskIV {
    /* 0x000 */ u8 unk000[0x10C];
    /* 0x10C */ NativeFileReader reader;
    /* 0x12C */ ArchiveFileHeader header;
    /* 0x164 */ u8 unk164[0xC];
    /* 0x170 */ u32 result;
    /* 0x174 */ u8 unk174[0xC];
    /* 0x180 */ u8 opened;
    /* 0x181 */ s8 suppressErrors;
    /* 0x182 */ u8 unk182[2];
};
typedef char NativeFileReaderLayoutCheck[sizeof(NativeFileReader) == 0x20 &&
    offsetof(NativeFileReader, result) == 0x18 &&
    offsetof(NativeFileReader, suppressErrors) == 0x1C ? 1 : -1];
typedef char SoundArchiveDiskLayoutCheck[sizeof(SoundArchiveDisk) == 0x194 &&
    offsetof(SoundArchiveDisk, reader) == 0x11C &&
    offsetof(SoundArchiveDisk, header) == 0x13C &&
    offsetof(SoundArchiveDisk, result) == 0x180 &&
    offsetof(SoundArchiveDisk, opened) == 0x190 &&
    offsetof(SoundArchiveDisk, suppressErrors) == 0x191 ? 1 : -1];
typedef char SoundArchiveDiskIVLayoutCheck[sizeof(SoundArchiveDiskIV) == 0x184 &&
    offsetof(SoundArchiveDiskIV, reader) == 0x10C &&
    offsetof(SoundArchiveDiskIV, header) == 0x12C &&
    offsetof(SoundArchiveDiskIV, result) == 0x170 &&
    offsetof(SoundArchiveDiskIV, opened) == 0x180 &&
    offsetof(SoundArchiveDiskIV, suppressErrors) == 0x181 ? 1 : -1];
#endif

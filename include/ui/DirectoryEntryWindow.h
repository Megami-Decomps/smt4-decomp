#ifndef UI_DIRECTORYENTRYWINDOW_H
#define UI_DIRECTORYENTRYWINDOW_H
#include "common.h"
#include <stddef.h>
struct FileHeader;
struct AsdText;
struct DirectoryEntryRecord {
    u16 id;
    u8 unk02[0x2E];
    u16 alternateId; /* 0x30 */
};
/* The unlock log's directory text window: unlockLogLoadSelectedTopic fills it from a directory entry, unlockLogLoadCurrentMessage from the
 * message table row at `index`. */
struct DirectoryEntryWindow {
    u8 unk00[0x4];
    s32 index; /* 0x04: row of the message table */
    u32 message; /* 0x08: message id of that row */
    u8 marked; /* 0x0C: the row's flag bit 0 */
    u8 unk0D[3];
    void *tableFile; /* 0x10: the message table file */
    u8 unk14[0x14];
    FileHeader *file; /* 0x28 */
    u8 unk2C[0x10];
    u32 alternateId; /* 0x3C */
    u8 unk40[0x10];
    u32 state; /* 0x50 */
    u8 unk54[0x68];
    u8 textControl[0x64]; /* 0xBC */
    u8 active; /* 0x120 */
    u8 unk121[3];
    u32 scroll; /* 0x124 */
    s32 lineOffset; /* 0x128 */
    u8 unk12C[0x4AC];
    AsdText *text; /* 0x5D8 */
    s32 lineCount; /* 0x5DC */
    DirectoryEntryRecord *entry; /* 0x5E0 */
};
typedef char DirectoryEntryWindowOffsets[offsetof(DirectoryEntryWindow, tableFile) == 0x10 && offsetof(DirectoryEntryWindow, file) == 0x28 && offsetof(DirectoryEntryWindow, textControl) == 0xBC && offsetof(DirectoryEntryWindow, active) == 0x120 && offsetof(DirectoryEntryWindow, entry) == 0x5E0 && sizeof(DirectoryEntryWindow) == 0x5E4 && offsetof(DirectoryEntryRecord, alternateId) == 0x30 ? 1 : -1];
#endif

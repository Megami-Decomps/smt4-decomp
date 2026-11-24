#ifndef SYS_TITLECONTENTFILESYSTEM_H
#define SYS_TITLECONTENTFILESYSTEM_H

#include "common.h"
#include <stddef.h>

class Obj420f4c;

/* Title-content filesystem state, shared by IV and Apocalypse. */
struct TitleContentFileSystemState {
    /* 0x00 */ bool delayEnabled;
    /* 0x01 */ s8 debugDelay;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ Obj420f4c *streamHeap;
    /* 0x08 */ void *mountedFileSystem;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 sessionHandle;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s64 accessDelayMilliseconds;
};
typedef char TitleContentFileSystemLayoutCheck[
    offsetof(TitleContentFileSystemState, streamHeap) == 0x04 &&
    offsetof(TitleContentFileSystemState, mountedFileSystem) == 0x08 &&
    offsetof(TitleContentFileSystemState, sessionHandle) == 0x10 &&
    offsetof(TitleContentFileSystemState, accessDelayMilliseconds) == 0x18 ? 1 : -1];

extern "C" {

/* Read the filesystem access delay from the system configuration (units of 10 ms). */
u8 FUN_0011bde8(void);
u8 FUN_00158ef4(void);
} /* extern "C" */

#endif

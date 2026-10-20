/* AsdSDK/Source/Sys/File/AsdLoadFile.cpp: the simple file loaders.
 *
 * A path is looked up in one of two filesystems: "patch:/" for the files the 1.2.0 patch replaced
 * and "rom:/" for everything else. A path that already names a device is used as it is, and
 * the loader can be told to always use paths as given. */
#ifndef ASDSDK_SOURCE_SYS_FILE_ASDLOADFILE_H
#define ASDSDK_SOURCE_SYS_FILE_ASDLOADFILE_H

#include "AsdSDK/Source/Sys/File/AsdFile.h"

/* The loaders' flag word: bit 0 and bit 1 are passed on to the request (as bit 0 and bit 4 of its flags). */
#define ASD_LOAD_FLAG_0 0x1
#define ASD_LOAD_FLAG_1 0x2

/* The small request AsdLoadFile keeps while an asynchronous load runs (0x18 bytes). */
typedef struct AsdLoadJob {
    /* 0x00 */ u32 handle;     /* the file request */
    /* 0x04 */ u32 arg;
    /* 0x08 */ u32 arg2;
    /* 0x0c */ u32 flags;
    /* 0x10 */ u32 priority;
    /* 0x14 */ u32 *result;    /* cleared at the start, set when the load finishes */
} AsdLoadJob;

#endif

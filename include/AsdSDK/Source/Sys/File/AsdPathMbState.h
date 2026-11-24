/* The conversion state the file paths' UTF-16 conversion passes to the C library's multibyte routines (armlib's
 * mbsinit, mbrlen and mbrtowc: smt4 refIsNullOrZero, FUN_002b90c8, FUN_002c618c; smt4a refIsNullOrZero, FUN_00100836,
 * FUN_002e3c44). Same two words as armcc's <wchar.h> mbstate_t; it zeroes itself in its constructor, which gives the
 * probes retail's frame (as the C struct with an initialiser, fileExistsPatchOrRom's frame is 16 bytes smaller). */
#ifndef ASDSDK_SOURCE_SYS_FILE_ASDPATHMBSTATE_H
#define ASDSDK_SOURCE_SYS_FILE_ASDPATHMBSTATE_H

#include "common.h"

struct AsdPathMbState {
    /* 0x00 */ u32 state;
    /* 0x04 */ u32 pending;

    AsdPathMbState() : state(0), pending(0) {}
};
typedef char AsdPathMbStateSizeCheck[sizeof(AsdPathMbState) == 8 ? 1 : -1];

#endif

/* AsdSDK/Source/Sys/Save/AsdSaveCommon.cpp: save data blocks.
 *
 * A save block is a fixed ASD_SAVE_HEADER_SIZE header followed by the payload; both are staged
 * through one temporary heap buffer on their way to and from the file layer. */
#ifndef ASDSDK_SOURCE_SYS_SAVE_ASDSAVECOMMON_H
#define ASDSDK_SOURCE_SYS_SAVE_ASDSAVECOMMON_H

#include "common.h"

#define ASD_SAVE_HEADER_SIZE 0x80

#endif

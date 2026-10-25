#ifndef ASDSDK_ASDSAVEREADBLOCK_H
#define ASDSDK_ASDSAVEREADBLOCK_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

u32 asdSaveReadBlock(u32 file, u32 unk, void *header, void *payload, u32 payloadSize);

#ifdef __cplusplus
}
#endif

#endif

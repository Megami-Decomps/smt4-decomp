#ifndef ASDSDK_ASDSAVEWRITEBLOCK_H
#define ASDSDK_ASDSAVEWRITEBLOCK_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

u32 asdSaveWriteBlock(u32 file, u32 unk, const void *header, const void *payload, u32 payloadSize);

#ifdef __cplusplus
}
#endif

#endif

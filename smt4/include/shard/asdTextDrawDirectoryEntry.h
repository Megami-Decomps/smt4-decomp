#ifndef SHARD_ASDTEXTDRAWDIRECTORYENTRY_H
#define SHARD_ASDTEXTDRAWDIRECTORYENTRY_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"

#ifdef __cplusplus
extern "C" {
#endif

void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y, RelativeDirectory *directory, u32 index);

#ifdef __cplusplus
}
#endif

#endif

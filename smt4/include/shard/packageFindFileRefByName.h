#ifndef SHARD_PACKAGEFINDFILEREFBYNAME_H
#define SHARD_PACKAGEFINDFILEREFBYNAME_H

#include "common.h"
#include "shard/W8X15_PackageList.h"

#ifdef __cplusplus
extern "C" {
#endif

PackageFileRef *packageFindFileRefByName(PackageList *list, s32 kind, const char *name);

#ifdef __cplusplus
}
#endif

#endif

#ifndef SHARD_W6_W6MATCH3_UNITSTATUSREQUEST_H
#define SHARD_W6_W6MATCH3_UNITSTATUSREQUEST_H

#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct UnitCategoryRecord;

extern "C" void statusRequestUnitDetails(const UnitCategoryRecord* unit, u8 option, const void* extra);

#ifdef __cplusplus
extern "C" {
#endif

s32 FUN_0036fcd0(u32 kind, s32 variant);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 FUN_00384d34(int bit);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

AsdAllocator *asdMemoryGetAllocatorC(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void mapEnvironmentApplySelectedEntry(void);

#ifdef __cplusplus
}
#endif

#endif

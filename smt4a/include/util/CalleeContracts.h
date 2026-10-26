#pragma once
#include "common.h"
#include "shard/Block61a470.h"
#include "AsdSDK/AsdMemAlloc.h"

/* Canonical prototypes of small helpers whose definitions take only primitive types; the definitions
 * include this header so callers and callee cannot drift apart. */
extern "C" {

s32 FUN_0019acdc(s32 id, s32 flag);
u8 FUN_0013def0(s32 index);
u8 FUN_0014af98(void);
int FUN_002613f0(int index);
u32 FUN_001bd100(u32 id);
u8 FUN_00152f44(void);
s32 asdListBoxCreateDefaultFlags(u32 parent, u32 configuration, u32 items, u32 itemCount);
u32 FUN_00203d74(void);
void FUN_00359974(s32 index, u32 a, u32 b, u32 c);
void FUN_003343f0(u8 value);
u32 effGetFrameStep(void);
u32 asdGxGetPhysicalAddress(u32 address);
void FUN_0023b45c(s32 flag);
bool devilIsTextureLoaded(s32 id, s32 resolve);
u32 FUN_00387580(u32 kind, f32 value);
s32 arrayContainsU16(const u16 *values, s32 count, u32 value);
u32 FUN_00152f54(void);
s32 FUN_001bd118(u32 id);
void MapNaviTable_GetCategoryCount(void);
u8 FUN_0034919c(void);












void FUN_002c8538(u8 value);

void FUN_001ba3d0(void);

f32 *asdListBoxGetFloatValuePtr(u32 listBox, s32 id);

} /* extern "C" */

#ifdef __cplusplus
extern "C" {
#endif

void *FUN_00239218(u32 index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 FUN_002a21e8(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 *FUN_002c2710(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

int FUN_002f7730(int param_1,int param_2);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_0037eb64(u32 mode, s32 x, s32 y, f32 speed);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00387350(u32 arg);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_003da998(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_003e7840(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_003f5b14(void *owner, s32 y, u32 color, s32 firstX, s32 secondX, f32 alpha);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_00427e28(void *arg0, void *arg1, u32 arg2);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_004ab7f4(void*arg0, s32 arg1);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_004abba8(void*unused, u32 value);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 aocHasType36(u32 a, u32 b);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void asdListBoxMarkDirty(u32 listBox);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 btlResolveEntryChoice(s32 choice);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void btlSelectCandidateEntries(s32 limit);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 btlUiHasSelection(void *arg0);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void bustupConfigureSlotTransition(u32 job, u32 portrait, s32 mode, u32 first, u32 second, u32 third);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void bustupCutAnimRequestStopSlots(s32 arg0);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 campIsState85(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void deblockerHandleRelease(u32 *handle);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 findRecordByKey(const char *key);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

int gameGetOptions(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 gameGetUnlockedCountLimit(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 gfxTexFormatGetBitsPerPixel(u32 format, u32 type);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 lmapGetSpawnIndex(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

unsigned long long nnnstdMemCpy(u8 *destination, const u8 *source, u32 size);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 playerAlignmentClass(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 renderPopStateStacks(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 uniteGetWork(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void asdGfxSetMode(s32 code, u32 unused, s32 offset);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 aocPackageGrantsItem(struct DataSet *system, u32 itemId, s32 checkAvailable);

#ifdef __cplusplus
}
#endif

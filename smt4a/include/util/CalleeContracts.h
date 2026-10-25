#pragma once
#include "common.h"

/* Canonical prototypes of small helpers whose definitions take only primitive types; the definitions
 * include this header so callers and callee cannot drift apart. */
extern "C" {

s32 FUN_0019acdc(s32 id, s32 flag);
u8 FUN_0013def0(s32 index);
u8 FUN_0014af98(void);
void FUN_001642e4(u32 c, u32 d, u32 e, u32 f);
u32 FUN_0014bd84(u32 index);
int FUN_002613f0(int index);
u8 FUN_0023b3d0(void);
void FUN_002c8538(u8 value);
void FUN_0039b984(s32 id);
void FUN_00192718(void);
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
void *memAlloc(u32 a, u32 b, u32 c, u32 size, u32 alignment, u32 extra);
u32 FUN_002ba85c(void);
u32 FUN_00387580(u32 kind, f32 value);
s32 arrayContainsU16(const u16 *values, s32 count, u32 value);
void FUN_001cd3ec(u8 *a, void *b);
u32 FUN_00152f54(void);
u8 *gameFlagBlockGet(void);
s32 FUN_001bd118(u32 id);
void MapNaviTable_GetCategoryCount(void);
void FUN_001ba3d0(void);
u8 FUN_0034919c(void);
f32 *asdListBoxGetFloatValuePtr(u32 listBox, s32 id);

} /* extern "C" */

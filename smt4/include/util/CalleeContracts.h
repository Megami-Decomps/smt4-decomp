#pragma once
#include "common.h"

/* Canonical prototypes of small helpers whose definitions take only primitive types; the definitions
 * include this header so callers and callee cannot drift apart. */
extern "C" {

u32 FUN_002865c0(u32 kind, f32 value);
void *dataTable06Sub1GetRecord(u16 id);
u8 FUN_002c2a04(int index);
s32 asdModelForwardChecked(u32 handle, u32 arg, s32 level, u32 extra);
u32 scrGetCommandFrame(void);
u32 FUN_00298f88(u32 id);
u8 flagBitIsSet(u32 bit);
int FUN_002ae8e4(u32 a, u32 file, u32 id, u32 value);
u32 randNextInRange(int limit);
void asdCecMessageBoxClose(int a);
void dataTable1bOr1cGetRecord(unsigned short param_1);
u32 osVirtToPhysAddress(u32 address);
f32 *mathMatrixApplyScale(f32 *m, const f32 *scale, int mode);
int questGetRuntimeStatus(int index);
void FUN_00242914(void *block, u8 value);
u32 FUN_002b6ad0(void);
u32 FUN_0029c43c(u32 value, u8 flag);




void FUN_0023dcb8(void);

u8 *asdListBoxGetItemText(void *listBox, u32 id);

} /* extern "C" */

#ifdef __cplusplus
extern "C" {
#endif

void FUN_0026d654(u8 value);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

int FUN_00288ddc(int limit, u32 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_0028f694(s32 x, s32 y, u32 region);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_0029c1c8(s32 id, u16 a, bool b);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_002bffe0(s32*x, s32*y, s32 mode);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00343a04(s32 amount);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void aocClearDisplayFlag(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void btlReflectInitKind9(s32 id, u32 flags, u32 value, u32 target, u32 option);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 dataTable05Sub9GetCount(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 dialogIsActive(void);

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

void ifTouchRegionRemove(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 listBoxItemHasOwner(u32 arg0, u32 arg1);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 randRange(int range);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void asdGfxSetMode(s32 mode);

#ifdef __cplusplus
}
#endif

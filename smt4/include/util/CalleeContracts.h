#pragma once
#include "common.h"

/* Canonical prototypes of small helpers whose definitions take only primitive types; the definitions
 * include this header so callers and callee cannot drift apart. */
extern "C" {

u32 FUN_002865c0(u32 kind, f32 value);
void dataTable06Sub1GetRecord(u16 id);
u8 FUN_002c2a04(int index);
void FUN_002499fc(s32 kind, u32* first, u32* count);
void FUN_002498ec(u32 id);
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
void FUN_0023dcb8(void);
int questGetRuntimeStatus(int index);
u8 *FUN_002a0d0c(void);
void FUN_00242914(void);
u32 FUN_002b6ad0(void);
u32 FUN_0029c43c(u32 value, u8 flag);
void FUN_002a0cc8(u8 value);
u8 *asdListBoxGetItemText(void *listBox, u32 id);

} /* extern "C" */

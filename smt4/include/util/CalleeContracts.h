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

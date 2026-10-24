/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a9a0` (_code @ 0x10a9a0, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0010a9a0_arg0 fn_0010a9a0_arg0;
struct fn_0010a9a0_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x4];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    void *field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined1 field_0x20; /* +0x20 */
    undefined1 field_0x21; /* +0x21 */
    unsigned char pad_0x22[0x2];
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    void *field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined1 field_0x3c; /* +0x3c */
    undefined1 field_0x3d; /* +0x3d */
    unsigned char pad_0x3e[0x2];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    unsigned char pad_0x48[0x68];
    undefined4 field_0xb0; /* +0xb0 */
    undefined4 field_0xb4; /* +0xb4 */
};

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00558c7c; /* 0x558c7c */

extern int FUN_0012da5c(unsigned int *);
extern int _ZN9Obj5590d0C1Ej(unsigned int *, unsigned int);
extern int FUN_002eac34(unsigned int);
extern unsigned int *FUN_002eb994(fn_0010a9a0_arg0 *, unsigned int, unsigned int, unsigned int, fn_0010a9a0_arg0 *, unsigned int, unsigned int, unsigned int);
extern int FUN_002eb9b0(int, int);
extern int FUN_002f3a2a(unsigned int *);


int FUN_0010a9a0(fn_0010a9a0_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_002eb994(param_1,8,param_3,param_4,param_1,param_2,param_3,param_4);
  puVar1[2] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = (unsigned int)&DAT_00558c7c;
  *(unsigned char *)(puVar1 + 8) = 0;
  *(char *)((int)puVar1 + 0x21) = (char)(int)(puVar1 + 2);
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  temp_v0 = FUN_002f3a2a(puVar1 + 2);
  puVar1[6] = temp_v0;
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(unsigned int *)(puVar1[6] + 8) = puVar1[6];
  *(unsigned int *)(puVar1[6] + 0xc) = puVar1[6];
  puVar1[9] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(unsigned char *)(puVar1 + 0xf) = 0;
  *(char *)((int)puVar1 + 0x3d) = (char)(int)(puVar1 + 9);
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  temp_v0 = FUN_0012da5c(puVar1 + 9);
  puVar1[0xd] = temp_v0;
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(unsigned int *)(puVar1[0xd] + 8) = puVar1[0xd];
  *(unsigned int *)(puVar1[0xd] + 0xc) = puVar1[0xd];
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  temp_v0 = _ZN9Obj5590d0C1Ej(puVar1 + 0x13,1);
  temp_v1 = FUN_002eac34(1);
  temp_v0 = FUN_002eb9b0(temp_v0 + 0x34,*(int *)(temp_v1 + 0x74) * 3);
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 - 0x40) = 0;
  *(unsigned int *)(temp_v0 - 0x3c) = 0;
  return temp_v0 - 0x80;
}

} /* extern "C" */

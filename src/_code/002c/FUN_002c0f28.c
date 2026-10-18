/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0f28` (_code @ 0x2c0f28, 0x3f8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
} param_4_stack;

extern unsigned int DAT_00465124; /* 0x465124 */
extern unsigned int DAT_004c6290; /* 0x4c6290 */
extern int DAT_004c63b4; /* 0x4c63b4 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
extern int FUN_0011d11c(void);
/* Supplied declaration required: FUN_002bb480. */
/* Supplied declaration required: FUN_002bb4c0. */
/* Supplied declaration required: FUN_002bb624. */
/* Supplied declaration required: FUN_002c0efc. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002c2754) overlaps instruction at (ram,0x002c2752)
    */

unsigned int FUN_002c0f28(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr12, in_cr14, in_cr2, in_cr4, in_r12, in_s0, in_s1; 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short unaff_r5;
  int unaff_r8;
  int in_r12;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr4;
  unsigned int in_cr12;
  unsigned int in_cr14;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned char temp_v3 [24];
  unsigned char temp_v4 [40];
  unsigned int temp_v5;
  int iStack_34;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int iStack_28;
  
  temp_v5 = 0;
  iStack_34 = param_1;
  temp_v6 = param_2;
  temp_v7 = param_3;
  iStack_28 = param_4;
  temp_v1 = FUN_0011d11c();
  FUN_002bb480(0);
  if (temp_v1 == 99) {
    *(unsigned int *)(unaff_r8 + 0x504) = in_s0;
    *(unsigned int *)(unaff_r8 + 0x500) = in_s1;
    return unaff_r8 + 0x400;
  }
  FUN_002bb624();
  FUN_002bb4c0();
  temp_v0 = DAT_004c63b4;
  if (temp_v1 != 0x62) {
    FUN_002c0efc();
    temp_v2 = DAT_00465124;
    coprocessor_storelong(0xb,in_cr14,in_r12 + 0x3fc);
    if (((unsigned int)temp_v4 & 0x1fffff) != 0) {
      *(unsigned int *)(DAT_00465124 + 0x28) = in_s0;
    }
    return temp_v2;
  }
  param_1 = param_1 * 2;
  coprocessor_load(0,in_cr1,temp_v3);
  if (param_1 == 0x8057) {
    *(int *)((int)(&DAT_004c6290 + DAT_004c63b4) * 2) = DAT_004c63b4;
    temp_v1 = coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
    coprocessor_function(0xc,1,0,in_cr0,in_cr0,in_cr0);
    coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
    coprocessor_function(10,0xf,0,in_cr2,in_cr0,in_cr2);
    coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
    coprocessor_load(0,in_cr2,temp_v1 + 0x3fc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 < 0x8057) {
    param_1 = param_1 - 0x8051;
    if (param_1 == 0) {
      temp_v2 = 0;
      coprocessor_store(0,in_cr0,temp_v2 >> 8);
      return temp_v2 >> 8;
    }
    if (param_1 != 5) {
      *(short *)(param_4 + 0x3e) = (short)param_1;
      *(unsigned short *)(temp_v0 + 2) = unaff_r5;
      halt_baddata();
    }
  }
  temp_v2 = *(int *)(DAT_004c63b4 * 4 + 0x4c63b8) << 6;
  coprocessor_store(0,in_cr0,temp_v2 >> 8);
  return temp_v2 >> 8;
}

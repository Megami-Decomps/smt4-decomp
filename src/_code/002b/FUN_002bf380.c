/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf380` (_code @ 0x2bf380, 0x9e bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_4_stack;

extern unsigned char uRam00000006; /* 0x6 */
extern unsigned int uRam00000038; /* 0x38 */
extern unsigned int uRam00000048; /* 0x48 */
extern unsigned int uRam00000058; /* 0x58 */
extern unsigned int uRam00000068; /* 0x68 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
extern unsigned long long FUN_00126724(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4938. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bedba) */
/* WARNING: Removing unreachable block (ram,0x002bedb2) */
/* WARNING: Removing unreachable block (ram,0x002bf4e6) */

void FUN_002bf380(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr3, in_cr5, in_cr6, in_cr8, in_s0, in_s16; 14 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int *piVar3;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr5;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned int in_s0;
  int in_s16;
  unsigned long long temp_v1;
  unsigned char uStack00000088;
  unsigned char temp_v2 [60];
  unsigned int temp_v3;
  unsigned int uStack_34;
  unsigned int temp_v4;
  unsigned int uStack_2c;
  unsigned int *puStack_28;
  
  temp_v3 = 1;
  uStack_34 = param_1;
  temp_v4 = param_2;
  uStack_2c = param_3;
  puStack_28 = param_4;
  temp_v1 = FUN_00126724(param_2,param_3);
  piVar2 = (int *)((unsigned long long)temp_v1 >> 0x20);
  piVar3 = (int *)temp_v1;
  if (piVar3 == (int *)0x0) {
    uRam00000006 = (char)param_3;
    uRam00000038 = in_s0;
    uRam00000048 = in_s0;
    uRam00000058 = in_s0;
    uRam00000068 = in_s0;
    coprocessor_store(0,in_cr1,500);
    coprocessor_storelong(0,in_cr1,&uStack00000088);
    coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
    coprocessor_load(0,in_cr3,temp_v2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  temp_v0 = piVar3[1];
  *param_4 = (unsigned int)piVar2;
  param_4[1] = temp_v0 >> 4;
  param_4[2] = unaff_r7;
  *piVar3 = temp_v0 << 1;
  piVar3[1] = temp_v0 >> 4;
  piVar3[2] = (int)(param_4 + 3);
  piVar3[3] = unaff_r7;
  piVar3 = (int *)0x0;
  if ((int)(temp_v0 << 2) < 0) {
    piVar3 = piVar2;
  }
  FUN_002c4938(temp_v0 << 1,0x8c);
  *piVar3 = unaff_r7;
  piVar3[1] = unaff_r8;
  piVar3[2] = unaff_r9;
  piVar3[8] = in_s16;
  *(short *)(piVar3 + 0xe) = (short)(temp_v0 << 2);
  piVar3[9] = 0x3f800000;
  piVar3[0xb] = 0x3f800000;
  coprocessor_storelong(0,in_cr5,piVar3 + 0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

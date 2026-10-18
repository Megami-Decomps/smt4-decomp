/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf558` (_code @ 0x2bf558, 0x170 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_4_stack;

extern unsigned char uRam00000006; /* 0x6 */
extern unsigned int uRam00000038; /* 0x38 */
extern unsigned int uRam00000048; /* 0x48 */
extern unsigned int uRam00000058; /* 0x58 */
extern unsigned int uRam00000068; /* 0x68 */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_00126648(unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bef8a) */
/* WARNING: Removing unreachable block (ram,0x00337196) */
/* WARNING: Removing unreachable block (ram,0x0033719e) */
/* WARNING: Removing unreachable block (ram,0x003371a6) */
/* WARNING: Removing unreachable block (ram,0x003371aa) */
/* WARNING: Removing unreachable block (ram,0x003371b2) */
/* WARNING: Removing unreachable block (ram,0x003371c2) */
/* WARNING: Removing unreachable block (ram,0x003371ca) */
/* WARNING: Removing unreachable block (ram,0x003371ce) */
/* WARNING: Removing unreachable block (ram,0x002bef92) */
/* WARNING: Removing unreachable block (ram,0x002bf6be) */

void FUN_002bf558(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr3, in_cr6, in_cr8, in_s0, in_s2; 20 native warning(s); review required */
  int temp_v0;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned int in_s0;
  unsigned int in_s2;
  unsigned char uStack00000088;
  unsigned char temp_v1 [60];
  unsigned int temp_v2;
  unsigned int uStack_34;
  unsigned int temp_v3;
  unsigned int uStack_2c;
  unsigned int temp_v4;
  
  temp_v2 = 1;
  uStack_34 = param_1;
  temp_v3 = param_2;
  uStack_2c = param_3;
  temp_v4 = param_4;
  temp_v0 = FUN_00126648(param_2,param_3);
  if (temp_v0 == 0) {
    uRam00000006 = (char)param_3;
    uRam00000038 = in_s0;
    uRam00000048 = in_s0;
    uRam00000058 = in_s0;
    uRam00000068 = in_s0;
    coprocessor_store(0,in_cr1,500);
    coprocessor_storelong(0,in_cr1,&uStack00000088);
    coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
    coprocessor_load(0,in_cr3,temp_v1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0 < *(int *)(temp_v0 + 4)) {
    coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
    VectorFloatToUnsigned(in_s2,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

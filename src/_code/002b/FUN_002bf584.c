/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf584` (_code @ 0x2bf584, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000038; /* 0x38 */
extern unsigned int uRam00000048; /* 0x48 */
extern unsigned int uRam00000058; /* 0x58 */
extern unsigned int uRam00000068; /* 0x68 */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bedba) */

void FUN_002bf584(int param_1,int param_2)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr3, in_cr6, in_cr8, in_s0; 15 native warning(s); review required */
  unsigned int unaff_r4;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned int in_s0;
  unsigned char uStack00000000;
  unsigned char uStack00000100;
  
  *(int *)(param_2 + 8) = param_1;
  *(char *)(param_1 + 0x1e) = (char)param_2;
  uRam00000038 = in_s0;
  uRam00000048 = in_s0;
  uRam00000058 = in_s0;
  uRam00000068 = in_s0;
  coprocessor_store(0,in_cr1,500);
  coprocessor_storelong(0,in_cr1,&uStack00000100);
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,&uStack00000000);
  if ((int)(((param_1 + 0x1c) >> 0x20) & unaff_r4) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

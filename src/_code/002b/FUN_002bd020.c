/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd020` (_code @ 0x2bd020, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000024; /* 0x24 */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Supplied declaration required: FUN_002bd420. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bd020(unsigned int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr13, in_cr2, in_cr5; 13 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char unaff_r5;
  unsigned int unaff_r6;
  int unaff_r7;
  unsigned int in_cr0;
  unsigned int in_cr2;
  unsigned int in_cr5;
  unsigned int in_cr13;
  unsigned char temp_v3 [48];
  
  temp_v1 = (int)unaff_r6 >> 1;
  temp_v1 = (temp_v1 << 0x18) | (((temp_v1 >> 8) & 0xff) << 0x10) | (((temp_v1 >> 0x10) & 0xff) << 8) |
          (temp_v1 >> 0x18);
  coprocessor_store(0,in_cr13,temp_v3);
  *(unsigned int *)(temp_v1 * 2) = temp_v1;
  temp_v0 = (char)((int)unaff_r6 >> 0x19);
  *(char *)(unaff_r7 + 0x12) = temp_v0;
  temp_v2 = param_4 + 0x80 + (unsigned int)((unaff_r6 & 1) != 0);
  *(int *)(unaff_r6 + 0x44) = param_4;
  *(int *)(param_3 + 0x54) = temp_v2;
  *(char *)(unaff_r7 + 0x11) = temp_v0;
  *(unsigned char *)(unaff_r6 + 9) = unaff_r5;
  *(char *)(temp_v2 + 1) = (char)param_4;
  if ((unaff_r6 & 0x7fffffff) != 0) {
    coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_002bd420(temp_v2 * 2);
  uRam00000024 = 0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

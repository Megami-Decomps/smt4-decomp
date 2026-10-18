/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c26a8` (_code @ 0x2c26a8, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004c63b4; /* 0x4c63b4 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: while (STORE). */


/* WARNING: Instruction at (ram,0x002c26c2) overlaps instruction at (ram,0x002c26c0)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_002c26a8(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_cr0, in_s1, in_s2, in_s8; 8 native warning(s); review required */
  int temp_v0;
  unsigned int in_cr0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s8;
  
  temp_v0 = *(int *)(DAT_004c63b4 * 4 + 0x4c63b8);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 * 0x400000;
    param_2 = param_2 * 2;
    *(short *)(param_2 + temp_v0) = (short)(param_1 >> 8);
    *(short *)(param_2 + temp_v0) = (short)param_2;
    do {
      coprocessor_storelong(0,in_cr0,param_1 >> 8);
      *(unsigned int *)(param_2 + 0x94) = in_s1;
      in_s1 = *(unsigned int *)(param_2 + 0x1a4);
      *(unsigned int *)(param_2 + 0x1b8) = in_s8;
      *(unsigned int *)(param_2 + 0x10) = in_s2;
    } while( 1 );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

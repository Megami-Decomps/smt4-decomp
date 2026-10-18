/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb114` (_code @ 0x2fb114, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0024692c. */
/* Supplied declaration required: FUN_002b0750. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bfc3a) */
/* WARNING: Removing unreachable block (ram,0x002bfc3e) */
/* WARNING: Removing unreachable block (ram,0x002bfc46) */

void FUN_002fb114(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_lr; 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int unaff_r5;
  int unaff_r6;
  unsigned short *unaff_r8;
  unsigned short in_lr;
  unsigned int in_fpscr;
  
  if (param_1 < 0xf0) {
    return;
  }
  if ((param_1 < 0x14b) &&
     ((temp_v0 = 0xff, param_1 < 0x137 || (temp_v0 = (0x136 - param_1) * 0x20 + 0xff, -1 < (int)temp_v0)))
     ) {
    FUN_0024692c(temp_v0 & 0xff);
    temp_v1 = param_1 - 0xf0;
    if (temp_v1 >= 6) {
      temp_v1 = 5;
    }
    temp_v1 = (temp_v1 * 0xf0) / 5;
    if (temp_v1 < 0xf0) {
      temp_v2 = (0xf0 - temp_v1) / 2;
    }
    else {
      temp_v2 = 0;
    }
    FUN_002b0750(2,10,37000,0,temp_v2,400,temp_v1,0xb);
    param_1 = param_1 - 0xf5;
    if (param_1 >= 9) {
      param_1 = 8;
    }
    temp_v1 = (int)(param_1 * 0xf0 + ((unsigned int)(param_1 * 0xf0 >> 0x1f) >> 0x1d)) >> 3;
    if (temp_v1 < 0xf0) {
      temp_v2 = (0xf0 - temp_v1) / 2;
    }
    else {
      temp_v2 = 0;
    }
    FUN_002b0750(2,10,0x9089,0,temp_v2,400,temp_v1,0xb);
    VectorUnsignedToFloat(0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    if (*(int **)(unaff_r6 + 0x1c) == (int *)0x0) {
      *unaff_r8 = in_lr;
      software_interrupt(0x3ae28d);
      software_interrupt(0x37e28d);
      software_interrupt(0x34e28d);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (**(int **)(unaff_r6 + 0x1c) == unaff_r5 + 0x18) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

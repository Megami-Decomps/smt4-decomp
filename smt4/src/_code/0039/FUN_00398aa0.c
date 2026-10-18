/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398aa0` (_code @ 0x398aa0, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_002aeaac(unsigned int);
/* Supplied declaration required: FUN_002be5a4. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bfc3a) */
/* WARNING: Removing unreachable block (ram,0x002bfc3e) */
/* WARNING: Removing unreachable block (ram,0x002bfc46) */

void FUN_00398aa0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,
                 int param_6)

{
/* irregular: irregular input(s): in_fpscr, in_lr; 14 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int unaff_r5;
  int unaff_r6;
  unsigned short *unaff_r8;
  unsigned short in_lr;
  unsigned int in_fpscr;
  unsigned char uStack_28;
  unsigned char uStack_27;
  unsigned char uStack_26;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  temp_v0 = FUN_002aeaac(3);
  temp_v0 = (**(romwright_code **)(**(int **)(temp_v0 + 8) + 0x44))(*(int **)(temp_v0 + 8),param_2 & 0xffff);
  if (temp_v0 == 0) {
    param_2 = 0xffff8140;
  }
  temp_v1 = 0x323232ff;
  if (param_6 != 0) {
    temp_v1 = 0x72e027ff;
  }
  if (param_5 != 0) {
    in_fpscr = in_fpscr & 0xfffffff;
  }
  uStack_28 = (unsigned char)(param_2 >> 8);
  uStack_27 = (unsigned char)param_2;
  uStack_26 = 0;
  if (param_6 != 0) {
    VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(4,temp_v1,&uStack_28);
  }
  else {
    VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,temp_v1,&uStack_28);
  }
  if (*(int **)(unaff_r6 + 0x1c) != (int *)0x0) {
    if (**(int **)(unaff_r6 + 0x1c) != unaff_r5 + 0x18) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r8 = in_lr;
  software_interrupt(0x3ae28d);
  software_interrupt(0x37e28d);
  software_interrupt(0x34e28d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

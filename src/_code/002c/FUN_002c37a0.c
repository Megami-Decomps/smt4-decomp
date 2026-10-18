/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c37a0` (_code @ 0x2c37a0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short FUN_002b3abc(void);
extern int func_0x006c3e10(void);


/* WARNING: Instruction at (ram,0x002c37cc) overlaps instruction at (ram,0x002c37ca)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_002c37a0(int param_1,unsigned int param_2,unsigned short *param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int unaff_r7;
  
  if (param_1 == 0x20000) {
    temp_v1 = func_0x006c3e10();
    *(int *)temp_v1 = temp_v1;
    *(unsigned int *)(temp_v1 + 4) = param_4;
    *(unsigned int *)(temp_v1 + 8) = unaff_r4;
    *(unsigned int *)(temp_v1 + 0xc) = unaff_r5;
    *(unsigned int *)(temp_v1 + 0x10) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 0x30000) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = FUN_002b3abc();
  }
  *param_3 = temp_v0;
  return;
}

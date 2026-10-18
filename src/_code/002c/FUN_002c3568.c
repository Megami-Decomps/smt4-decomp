/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3568` (_code @ 0x2c3568, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_002c3568(unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int unaff_r4;
  int unaff_r6;
  romwright_code *UNRECOVERED_JUMPTABLE;
  
  temp_v0 = *param_1;
  puVar2 = (unsigned int *)(temp_v0 >> 8);
  *puVar2 = 0x44e8c4;
  *(short *)(param_4 + 0x44e8c4) = (short)(temp_v0 >> 8);
  *(int *)(unaff_r6 + 0xc0) = param_4;
  temp_v1 = *(unsigned int *)(unaff_r4 * 0x100 + 0x74);
  *(char *)(unaff_r6 + 0x85) = (char)((int)puVar2 << 4);
  *(unsigned int *)(unaff_r4 + param_4 + (unsigned int)(0xffffffc7 < unaff_r6 + 0x44U) + 0x54) = temp_v1;
                    /* WARNING: Could not recover jumptable at 0x002c4abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc210` (_code @ 0x2bc210, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int uRam004c567c; /* 0x4c567c */
extern unsigned char uRam004c56b9; /* 0x4c56b9 */
extern int iRam004c56f4; /* 0x4c56f4 */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
extern unsigned int FUN_002c1a28(unsigned int);


/* WARNING: Removing unreachable block (ram,0x002bc228) */

void FUN_002bc210(unsigned int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr2; 5 native warning(s); review required */
  unsigned int temp_v0;
  romwright_code *UNRECOVERED_JUMPTABLE;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  
  temp_v0 = FUN_002c1a28(uRam004c567c);
  coprocessor_function(1,1,0,in_cr1,in_cr0,in_cr2);
  uRam004c56b9 = 0x34;
  iRam004c56f4 = param_4;
  *(unsigned int *)(param_4 + 0x54) = *(unsigned int *)(param_3 + 0x74);
                    /* WARNING: Could not recover jumptable at 0x002bda8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(temp_v0);
  return;
}

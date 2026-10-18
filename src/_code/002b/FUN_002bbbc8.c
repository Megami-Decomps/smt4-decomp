/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bbbc8` (_code @ 0x2bbbc8, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
} param_4_stack;

/* Supplied declaration required: FUN_002ae038. */


void FUN_002bbbc8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0 [5];
  romwright_code *UNRECOVERED_JUMPTABLE;
  int iStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  temp_v0[0] = param_1 + 0x400;
  iStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_002ae038(temp_v0,param_2,param_3,(int)*(short *)(param_1 * 2 + 0x1000));
                    /* WARNING: Could not recover jumptable at 0x002bc110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00212008` (_code @ 0x212008, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_002c526c. */


unsigned int FUN_00212008(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  romwright_code *pcVar3;
  
  temp_v1 = param_1[5];
  if ((int)(temp_v1 - (param_4 + (param_1[4] < param_3))) < 0 !=
      (SBORROW4(temp_v1,param_4) != SBORROW4(temp_v1 - param_4,(unsigned int)(param_1[4] < param_3)))) {
    temp_v0 = 0;
  }
  else {
    FUN_002c38a4(param_1 + 0x10);
    param_1[6] = param_3;
    param_1[7] = param_4;
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = param_3;
    param_1[3] = param_4;
    pcVar3 = *(romwright_code **)(*(int *)param_1[0xe] + 0xc);
    (*pcVar3)((int *)param_1[0xe],pcVar3,param_3,param_4,0);
    FUN_002c3820(param_1 + 0x10);
    software_interrupt(0x18);
    if ((int)param_1[0x13] < 0) {
      FUN_002c526c();
    }
    temp_v0 = 1;
  }
  return temp_v0;
}

/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001532a0` (_code @ 0x1532a0, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_002a8608. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_001532a0(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002c3aa8(param_1 + 0x34);
  temp_v0 = param_1 + param_2 * 4;
  *(int *)(temp_v0 + 0x14) = param_3;
  *(unsigned int *)(temp_v0 + 0x1c) = param_4;
  if (param_3 != 0) {
    FUN_002a8608(&DAT_004e6f64,param_2,1);
  }
  else {
    FUN_002a8608(&DAT_004e6f64,param_2,(int)*(char *)(param_1 + param_2 + 0x30));
  }
  FUN_002c3a24(param_1 + 0x34);
  return;
}

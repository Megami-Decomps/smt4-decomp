/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036ca3c` (_code @ 0x36ca3c, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */
/* Supplied declaration required: FUN_002e1b64. */


void FUN_0036ca3c(int param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_00183bb0();
  FUN_001677c0();
  param_2 = *(int *)(param_1 + 4) + param_2;
  param_3 = *(int *)(param_1 + 8) + param_3;
  if (param_5 != 0) {
    FUN_00164b5c(2,0x2e,8,param_2,param_3,0x65);
  }
  else {
    FUN_00164b5c(2,0x2e,7,param_2,param_3,0x65);
  }
  FUN_00184e64(0x82fff500);
  temp_v0 = FUN_001834a4(0x2e,0x53);
  FUN_002e1b64(param_4,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,0x67);
  FUN_00183bb0();
  FUN_001677c0();
  return;
}

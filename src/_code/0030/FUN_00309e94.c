/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309e94` (_code @ 0x309e94, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00465124; /* 0x465124 */

/* Supplied declaration required: FUN_002a780c. */
extern int FUN_002c38a4(unsigned int);


void FUN_00309e94(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
  FUN_002a780c(*param_1);
  FUN_002a780c(param_1[1]);
  FUN_002a780c(param_1[2]);
  temp_v0 = FUN_002c38a4(DAT_00465124);
  if ((param_3 & 0x1fffff) != 0) {
    *(unsigned int *)(temp_v0 + 0x28) = in_s0;
  }
  return;
}

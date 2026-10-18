/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0a24` (_code @ 0x2c0a24, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short FUN_00269758(void);
extern unsigned int FUN_0028ca7c(void);
/* Supplied declaration required: FUN_0028cabc. */
extern int FUN_0028cba8(unsigned int);


void FUN_002c0a24(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int unaff_r6;
  
  temp_v1 = FUN_0028cba8(param_2);
  if (temp_v1 != 0) {
    FUN_0028cabc();
  }
  else {
    param_2 = FUN_0028ca7c();
  }
  *(unsigned int *)(param_1 + 0x14) = param_2;
  temp_v0 = FUN_00269758();
  *(unsigned short *)(unaff_r6 + 0x3e) = temp_v0;
  return;
}

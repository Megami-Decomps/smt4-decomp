/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381fbc` (_code @ 0x381fbc, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00382008; /* 0x382008 */

/* Supplied declaration required: FUN_002356ec. */
/* Supplied declaration required: FUN_00235744. */
/* Supplied declaration required: FUN_00259490. */
/* Supplied declaration required: FUN_00263978. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_00385d34. */


void FUN_00381fbc(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c0ba8(0x24);
  if (temp_v0 != 0) {
    FUN_00235744(1);
  }
  FUN_00259490();
  FUN_002356ec(param_1,&LAB_00382008);
  FUN_00385d34(param_1 + 0x20,(int)*(char *)(param_1 + 0x10));
  FUN_00263978();
  *(unsigned int *)(param_1 + 4) = 6;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

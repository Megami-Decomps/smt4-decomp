/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343298` (_code @ 0x343298, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b7768. */
/* Supplied declaration required: FUN_002bbb74. */
/* Supplied declaration required: FUN_002bbbc8. */
/* Supplied declaration required: FUN_002bfe28. */
extern int FUN_002c1870(unsigned int, int, unsigned int);


void FUN_00343298(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if ((*(char *)(param_1 + 0x5b0) != '\0') ||
     (temp_v0 = FUN_002c1870(param_2,param_1 + 0x570,0x40), temp_v0 != 0)) {
    FUN_002bfe28(param_1 + 0x570,param_2);
    FUN_002b7768(param_1 + 0x530,param_1 + 0x570);
    FUN_002bbbc8(param_1,param_1 + 0x114c,param_1 + 0x110c,param_1 + 0x530);
    FUN_002bbb74(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
    *(unsigned char *)(param_1 + 0x5b0) = 0;
  }
  return;
}

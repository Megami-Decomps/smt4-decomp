/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040967c` (_code @ 0x40967c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00187a84. */
/* Supplied declaration required: FUN_00187d90. */
/* Supplied declaration required: FUN_0019a0e8. */
extern int FUN_0030ef8c(unsigned int, int, unsigned int);
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */


void FUN_0040967c(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1 + 0x574;
  if ((*(char *)(param_1 + 0x5b4) != '\0') || (temp_v0 = FUN_0030ef8c(param_2,temp_v1,0x40), temp_v0 != 0)
     ) {
    FUN_0019a0e8(temp_v1,param_2);
    nn_math_ARMv6_MTX44TransposeAsm(param_1 + 0x534,temp_v1);
    FUN_00187a84(param_1,param_1 + 0x1158,param_1 + 0x1118,param_1 + 0x534);
    FUN_00187d90(*(unsigned int *)(param_1 + 0x530),param_1 + 0x1198);
    *(unsigned char *)(param_1 + 0x5b4) = 0;
  }
  return;
}

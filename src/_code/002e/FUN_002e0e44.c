/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0e44` (_code @ 0x2e0e44, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_00238f44. */
/* Supplied declaration required: FUN_00248ce8. */
/* Supplied declaration required: FUN_00263308. */
extern int FUN_002b5a48(unsigned int);


unsigned int
FUN_002e0e44(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 5;
  temp_v0 = *(int *)(DAT_00464fac + 0x18);
  FUN_00263308(temp_v0,param_1,param_2);
  if (-1 < temp_v0) {
    temp_v0 = FUN_002b5a48(param_3);
    FUN_00248ce8(*(unsigned int *)(DAT_00464fac + 0x18),0x6e,param_3,temp_v0 << 1);
    FUN_00248ce8(*(unsigned int *)(DAT_00464fac + 0x18),0x65,param_4,param_5);
    FUN_00238f44(*(unsigned int *)(DAT_00464fac + 0x18));
    temp_v1 = 0;
  }
  return temp_v1;
}

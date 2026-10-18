/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0dd0` (_code @ 0x2e0dd0, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_002390dc. */
/* Supplied declaration required: FUN_00248e58. */
/* Supplied declaration required: FUN_00263534. */
extern int FUN_002b5c2c(unsigned int);


unsigned int
FUN_002e0dd0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 5;
  temp_v0 = *(int *)(DAT_00464fac + 0x18);
  FUN_00263534(temp_v0,param_1,param_2);
  if (-1 < temp_v0) {
    temp_v0 = FUN_002b5c2c(param_3);
    FUN_00248e58(*(unsigned int *)(DAT_00464fac + 0x18),0x6e,param_3,temp_v0 << 1);
    FUN_00248e58(*(unsigned int *)(DAT_00464fac + 0x18),0x65,param_4,param_5);
    FUN_002390dc(*(unsigned int *)(DAT_00464fac + 0x18));
    temp_v1 = 0;
  }
  return temp_v1;
}

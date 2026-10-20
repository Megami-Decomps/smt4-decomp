/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022ad9c` (_code @ 0x22ad9c, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238f44(unsigned int);
int FUN_00263308(unsigned int, unsigned int, unsigned int);

extern int DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_00238f44. */
/* Supplied declaration required: FUN_00263308. */


unsigned char FUN_0022ad9c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = *(unsigned int *)(DAT_00464fac + 0x18);
  FUN_00263308(temp_v0,param_1,param_2);
  temp_v1 = (temp_v0 & 0x80000000) == 0;
  if (temp_v1) {
    FUN_00238f44(*(unsigned int *)(DAT_00464fac + 0x18));
  }
  return temp_v1;
}

} /* extern "C" */

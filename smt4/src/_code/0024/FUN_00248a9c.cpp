/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00248a9c` (_code @ 0x248a9c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238f44(unsigned int);
int FUN_00263308(int, unsigned int, unsigned int);

extern unsigned int *DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_00238f44. */
/* Supplied declaration required: FUN_00263308. */


int FUN_00248a9c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = DAT_00464fac[6];
  FUN_00263308(temp_v0,*DAT_00464fac,DAT_00464fac[1]);
  if (-1 < temp_v0) {
    temp_v0 = *(int *)(DAT_00464fac[6] + 0x210);
    if (temp_v0 != 0) {
      temp_v1 = temp_v0;
    }
    FUN_00238f44(DAT_00464fac[6]);
  }
  return temp_v1;
}

} /* extern "C" */

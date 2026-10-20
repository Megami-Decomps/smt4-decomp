/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ccd5c` (_code @ 0x4ccd5c, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192748(unsigned int);

extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(unsigned int);


unsigned short FUN_004ccd5c(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00187180(9,3);
  temp_v3 = (param_1 - param_2) + 10;
  if ((int)temp_v3 < 0) {
    temp_v3 = 0;
  }
  temp_v1 = FUN_00192748(temp_v0);
  if (temp_v1 <= temp_v3) {
    temp_v2 = FUN_00192748(temp_v0);
    temp_v3 = temp_v2 - 1;
  }
  temp_v2 = FUN_00192798(temp_v0);
  return *(unsigned short *)(temp_v2 + temp_v3 * 2);
}

} /* extern "C" */

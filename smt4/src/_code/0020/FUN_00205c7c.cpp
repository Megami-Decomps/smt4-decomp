/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00205c7c` (_code @ 0x205c7c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);
int FUN_00296cc8(...);

/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_00296cc8. */
extern int FUN_002c09f4(unsigned int);


unsigned int FUN_00205c7c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_00296cc8(1);
  if (temp_v0 < (int)temp_v1) {
    temp_v2 = FUN_002c09f4(temp_v1 & 0xffff);
    FUN_0028dcb0(temp_v2 < temp_v0);
    return 1;
  }
  FUN_0028dcb0(1);
  return 1;
}

} /* extern "C" */

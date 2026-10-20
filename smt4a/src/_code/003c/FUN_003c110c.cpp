/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c110c` (_code @ 0x3c110c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(...);
int FUN_004187e8(int, int);

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_004187e8. */


unsigned int FUN_003c110c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(1);
  FUN_004187e8(temp_v0,temp_v1 == 1);
  return 1;
}

} /* extern "C" */

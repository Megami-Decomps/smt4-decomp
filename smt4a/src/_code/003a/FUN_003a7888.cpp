/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7888` (_code @ 0x3a7888, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_004d9e58(int);

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_004d9e58. */


unsigned int FUN_003a7888(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  FUN_00236038(3);
  if (temp_v0 != 0) {
    FUN_004d9e58(3);
  }
  if (temp_v1 != 0) {
    FUN_004d9e58(4);
  }
  if (temp_v2 != 0) {
    FUN_004d9e58(5);
  }
  return 1;
}

} /* extern "C" */

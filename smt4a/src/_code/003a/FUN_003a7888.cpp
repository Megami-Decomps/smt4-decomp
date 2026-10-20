/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7888` (_code @ 0x3a7888, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_004d9e58(int);

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_004d9e58. */


unsigned int FUN_003a7888(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = scrGetArg(2);
  scrGetArg(3);
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

/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dfd5c` (_code @ 0x3dfd5c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_003e46f4(unsigned int);


unsigned int FUN_003dfd5c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 4;
  temp_v0 = FUN_003e46f4(0x77);
  if (temp_v0 != 0) {
    temp_v1 = 5;
  }
  temp_v0 = FUN_003e46f4(0x78);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_003e46f4(0x79);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_003e46f4(0x7a);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  if (temp_v1 >= 9) {
    temp_v1 = 8;
  }
  return temp_v1;
}

} /* extern "C" */

/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ad98` (_code @ 0x29ad98, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002931cc(unsigned int);


unsigned int FUN_0029ad98(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 4;
  temp_v0 = FUN_002931cc(0x77);
  if (temp_v0 != 0) {
    temp_v1 = 5;
  }
  temp_v0 = FUN_002931cc(0x78);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_002931cc(0x79);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_002931cc(0x7a);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  if (temp_v1 >= 9) {
    temp_v1 = 8;
  }
  return temp_v1;
}

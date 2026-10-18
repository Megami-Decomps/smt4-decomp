/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c8f4` (_code @ 0x29c8f4, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00292f28(unsigned int);


unsigned int FUN_0029c8f4(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 4;
  temp_v0 = FUN_00292f28(0x7b);
  if (temp_v0 != 0) {
    temp_v1 = 5;
  }
  temp_v0 = FUN_00292f28(0x7c);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00292f28(0x7d);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00292f28(0x7e);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  if (temp_v1 >= 9) {
    temp_v1 = 8;
  }
  return temp_v1;
}

/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ace0` (_code @ 0x26ace0, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002931cc(unsigned int);


int FUN_0026ace0(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 2;
  temp_v0 = FUN_002931cc(0x12);
  if (temp_v0 != 0) {
    temp_v1 = 3;
  }
  temp_v0 = FUN_002931cc(0x13);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_002931cc(0x14);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_002931cc(0x15);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_002931cc(0x16);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_002931cc(0x17);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  return temp_v1;
}

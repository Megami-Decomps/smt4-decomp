/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377084` (_code @ 0x377084, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162e8c(void);


unsigned char FUN_00377084(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  if (param_1 == 0x17 || param_1 == 0x18) {
    param_1 = 0xe;
  }
  else if (param_1 == 0x19 || param_1 == 0x1a) {
    param_1 = 0x12;
  }
  else if (param_1 == 0x49 || param_1 == 0x4d) {
    param_1 = 0x41;
  }
  else if (param_1 == 0x4a || param_1 == 0x4e) {
    param_1 = 0x42;
  }
  else if (param_1 == 0x4b || param_1 == 0x4f) {
    param_1 = 0x43;
  }
  else if (param_1 == 0x4c || param_1 == 0x50) {
    param_1 = 0x44;
  }
  else if (param_1 == 0x94 || param_1 == 0x9e) {
    param_1 = 0x8d;
  }
  else if (param_1 == 0x95 || param_1 == 0x9f) {
    param_1 = 0x8e;
  }
  else if (param_1 == 0x96 || param_1 == 0xa0) {
    param_1 = 0x91;
  }
  else if (param_1 == 0xa6 || param_1 == 0xa7) {
    param_1 = 0xa4;
  }
  return (*(unsigned int *)(temp_v0 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4 + 0xccc) &
         (1 << ((param_1 % 0x20) & 0xffU))) != 0;
}

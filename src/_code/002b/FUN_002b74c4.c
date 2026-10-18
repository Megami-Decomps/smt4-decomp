/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b74c4` (_code @ 0x2b74c4, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *FUN_002c0ac8(void);


void FUN_002b74c4(unsigned int param_1,int param_2)

{
  int *piVar1;
  int temp_v0;
  unsigned char temp_v1;
  
  piVar1 = (int *)FUN_002c0ac8();
  if (param_2 != 0) {
    piVar1[2] = 0x3f800000;
  }
  else {
    piVar1[2] = 0x3f000000;
  }
  temp_v0 = *piVar1;
  temp_v1 = temp_v0 == 0xfc97 || temp_v0 == 0xfc96;
  if (temp_v0 != 0xfc97 && temp_v0 != 0xfc96) {
    temp_v1 = temp_v0 == 0xfc95;
  }
  if (temp_v1) {
    piVar1[2] = 0x3f800000;
  }
  return;
}

/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288f78` (_code @ 0x288f78, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002c09d0(unsigned int);
extern int FUN_002c2950(void);


unsigned int FUN_00288f78(int param_1)

{
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_002c2950();
  if ((((param_1 - 0x19U < 6) || (param_1 == 0x66)) && (temp_v2 = FUN_002c09d0(0x144), temp_v2 == 0)) ||
     (((param_1 - 0x1fU < 5 || (param_1 == 0x67)) && (temp_v2 = FUN_002c09d0(0x15a), temp_v2 == 0)))) {
    return 3;
  }
  temp_v2 = FUN_002c2950();
  if (*(char *)(temp_v2 + 3) != '\x01') {
    if (param_1 == 0x18) {
      return 2;
    }
    if (param_1 >= 0x40) {
      return 0;
    }
    temp_v0 = *(char *)(temp_v1 + param_1 + 0xe14);
  }
  else {
    temp_v0 = *(char *)(temp_v1 + 0xe3d);
  }
  if (temp_v0 != '\x03') {
    return 1;
  }
  return 0;
}

} /* extern "C" */

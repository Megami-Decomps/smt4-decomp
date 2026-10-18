/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e266c` (_code @ 0x1e266c, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002705f4(int);
extern int FUN_002c0ba8(unsigned int);
extern int FUN_002c2b1c(void);


unsigned int FUN_001e266c(int param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c2b1c();
  if ((param_1 == 0x18) ||
     ((((param_1 - 0x19U >= 6 && (param_1 != 0x66)) ||
       (temp_v1 = FUN_002c0ba8(0x144), temp_v2 = 0, temp_v1 != 0)) &&
      ((((param_1 - 0x1fU >= 5 && (param_1 != 0x67)) ||
        (temp_v1 = FUN_002c0ba8(0x15a), temp_v2 = 0, temp_v1 != 0)) &&
       ((temp_v1 = FUN_002705f4(param_1), temp_v1 != 1 ||
        (temp_v2 = 1, *(char *)(temp_v0 + param_1 + 0xe14) != '\x01')))))))) {
    temp_v2 = 0;
  }
  return temp_v2;
}

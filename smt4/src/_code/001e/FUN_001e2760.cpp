/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2760` (_code @ 0x1e2760, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00270384(int);
extern int gameFlagIsSet(unsigned int);
extern int gameGetMapBlock(void);


unsigned int FUN_001e2760(int param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = gameGetMapBlock();
  if ((param_1 == 0x18) ||
     ((((param_1 - 0x19U >= 6 && (param_1 != 0x66)) ||
       (temp_v1 = gameFlagIsSet(0x144), temp_v2 = 0, temp_v1 != 0)) &&
      ((((param_1 - 0x1fU >= 5 && (param_1 != 0x67)) ||
        (temp_v1 = gameFlagIsSet(0x15a), temp_v2 = 0, temp_v1 != 0)) &&
       ((temp_v1 = FUN_00270384(param_1), temp_v1 != 1 ||
        (temp_v2 = 1, *(char *)(temp_v0 + param_1 + 0xe14) != '\x01')))))))) {
    temp_v2 = 0;
  }
  return temp_v2;
}

} /* extern "C" */

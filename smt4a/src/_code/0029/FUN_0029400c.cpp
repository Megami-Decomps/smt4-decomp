/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029400c` (_code @ 0x29400c, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int gameFlagsGetBlock(void);
extern unsigned long long FUN_00324f74(int, unsigned int);


unsigned char FUN_0029400c(int param_1)

{
  unsigned int temp_v0;
  unsigned long long temp_v1;
  
  temp_v0 = gameFlagsGetBlock();
  if (param_1 != 0x18) {
    if ((param_1 == 0x2c || param_1 == 0x2d) || (param_1 == 0x2e || param_1 == 0x2f)) {
      param_1 = 0x2b;
    }
    temp_v1 = FUN_00324f74(param_1,temp_v0);
    if (((int)temp_v1 == 1) &&
       (*(char *)((int)((unsigned long long)temp_v1 >> 0x20) + param_1 + 0xe48) == '\x01')) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */

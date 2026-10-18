/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240e8c` (_code @ 0x240e8c, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0029e3bc(void);


unsigned int FUN_00240e8c(char *param_1)

{
  unsigned int temp_v0;
  
  if (*param_1 == '\x01') {
    if (param_1[0x72] == '\0') {
      temp_v0 = *(unsigned int *)(param_1 + 0x58);
    }
    else {
      temp_v0 = 0;
    }
    return temp_v0;
  }
  temp_v0 = FUN_0029e3bc();
  return temp_v0;
}
